#include <iostream>
#include <coroutine>

/*
    Coroutines:
    - Must use C++20
    - Functions can be called and can return something
    - Coroutines can as well, but also be paused and resumed
    - No pre-built coroutines in C++20, so must create our own
*/

struct CoroType
{
    struct promise_type
    {
        CoroType get_return_object() { return CoroType(this); }

        std::suspend_always initial_suspend() { return {}; }
        std::suspend_always final_suspend() noexcept { return {}; }

        void unhandled_exception() noexcept
        {
            std::rethrow_exception(std::current_exception());
        }

        void return_void() {};
    };

    CoroType(promise_type *p) : m_handle(std::coroutine_handle<promise_type>::from_promise(*p)) {}

    ~ CoroType()
    {
        std::cout << "Handle destroyed..." << std::endl;
        m_handle.destroy();
    }

    std::coroutine_handle<promise_type> m_handle;
};

CoroType do_work()
{
    std::cout << "Doing first thing..." << std::endl;
    co_await std::suspend_always {};

    std::cout << "Doing second thing..." << std::endl;
    co_await std::suspend_always {};

    std::cout << "Doing third thing..." << std::endl;
}

int main()
{
    auto task = do_work();

    // Resume
    task.m_handle();

    std::cout << std::boolalpha;
    std::cout << "coroutine done: " << task.m_handle.done() << std::endl;
    std::cout << std::endl;

    // Resume for second time
    task.m_handle.resume();
    
    std::cout << "Coroutine done: " << task.m_handle.done() << std::endl;
    std::cout << std::endl;

    // Resume for thid time
    task.m_handle.resume();

    std::cout << "Coroutine done: " << task.m_handle.done() << std::endl;
    std::cout << std::endl;

    return 0;
}