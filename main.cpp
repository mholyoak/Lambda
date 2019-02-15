#include <iostream>

// Works with a lambda function but only if it doesn't use captures
//typedef int MyFunc(int a, int b);

//int TestFunction(int a, int b, MyFunc myFunc)
int TestFunction(int a, int b, std::function<int(int, int)> myFunc)
{
    return myFunc(a, b);
}

int main() {
    std::cout << "Hello, Lamda!" << std::endl;

    int c = 3;

    auto testFunc = [c](int a, int b) {
        return a + b + c;
    };

    auto result = TestFunction(1, 2, testFunc);

    //auto result = testFunc(1, 2);

    std::cout << "MyFunc Result: " << std::to_string(result) << std::endl;

    return 0;
}