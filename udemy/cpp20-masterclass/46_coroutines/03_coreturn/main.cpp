#include <iostream>
#include <coroutine>

struct CoroType
{
    struct promise_type
    {
        int m_value;
        CoroType get_return_object() { return CoroType(this); }
        std::suspend_always initial_suspend() { return {}; }
        std::suspend_always final_suspend() noexcept { return {}; }

        void unhandled_exception() noexcept
        {
            std::rethrow_exception(std::current_exception());
        }

        std::suspend_always yield_value(int val)
        {
            m_value = val;

            return {};
        }

        void return_void()
        {
            std::cout << "Returning void..." << std::endl;
        }
    };

    CoroType(promise_type *p) : m_handle(std::coroutine_handle<promise_type>::from_promise(*p)) {}

    ~CoroType()
    {
        std::cout << "Handle destroyed..." << std::endl;
        m_handle.destroy();
    }

    std::coroutine_handle<promise_type> m_handle;
};

CoroType do_work()
{
    std::cout << "Starting the coroutine..." << std::endl;

    co_yield 1;
    co_yield 2;
    co_yield 3;

    co_return;
}

int main()
{
    auto task = do_work();

    // Resumes the coroutine. When next suspension point it hit, it pauses.
    task.m_handle();

    std::cout << std::endl;
    std::cout << "Value: " << task.m_handle.promise().m_value << std::endl;

    // Resumes the coroutine. When next suspension point it hit, it pauses.
    task.m_handle();

    std::cout << std::endl;
    std::cout << std::boolalpha;
    std::cout << "Value: " << task.m_handle.promise().m_value << std::endl;
    std::cout << "Coroutine done?: " << task.m_handle.done() << std::endl;

    // Resumes the coroutine. When next suspension point it hit, it pauses.
    task.m_handle();

    std::cout << std::endl;
    std::cout << std::boolalpha;
    std::cout << "Value: " << task.m_handle.promise().m_value << std::endl;
    std::cout << "Coroutine done?: " << task.m_handle.done() << std::endl;

    // Resumes the coroutine. When next suspension point it hit, it pauses.
    task.m_handle();

    std::cout << std::endl;
    std::cout << std::boolalpha;
    std::cout << "Value: " << task.m_handle.promise().m_value << std::endl;
    std::cout << "Coroutine done?: " << task.m_handle.done() << std::endl;
    std::cout << std::endl;

    return 0;
}