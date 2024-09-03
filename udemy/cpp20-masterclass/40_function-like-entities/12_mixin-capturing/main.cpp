#include <iostream>

int main()
{
    int a {10};
    int b {11};
    int c {12};
    int d {13};

    // 1. Mix by value and by reference
    auto func1 = [a, &b] (int x, int y) {};

    // 2. All by reference, a by value
    auto func2 = [=, &a] (int x, int y) {};

    // 3. All by reference, a by value
    auto func3 = [&, a] (int x, int y) {};

    // 4. Capture all = and & must always come first
    /* auto func4 = [a, b, &] (int x, int y) {}; */ // compiler error

    // 5. Capture all = and & must always come first
    /* auto func5 = [a, b, =] (int x, int y) {}; */ // compiler error

    // 6. Cannot prefix vars captured by value with =
    /* auto func6 = [=a, =b] (int x, int y) {}; */ // compiler error

    // 7. If you use =, you are no longer allowed to capture any other variable by value
    //    If you use &, you cannot capture any other variable by reference
    /* auto func7 = [=, &b, c] (int x, int y) {}; */ // compiler error/warning

    /* auto func8 = [&, b, &c] (int x, int y) {}; */ // compiler error/warning

    return 0;
}
