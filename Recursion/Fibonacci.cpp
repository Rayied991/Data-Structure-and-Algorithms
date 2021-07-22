#include <iostream>
using namespace std;
//Recursion is not always good enough
//it sometimes gives us overhead
int fib(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

// fib(5)
// fib(4)+fib(3)
// fib(3)+fib(2)+fib(2)+fib(1)

//same function is calling every time -> Disadvantages of Recursion

int main()
{
    int n;
    cout << "Enter a number:" << endl;
    cin >> n;
    cout << "The term on fibonnacci sequence at position of  " << n << " is = " << fib(n) << endl;

    return 0;
}