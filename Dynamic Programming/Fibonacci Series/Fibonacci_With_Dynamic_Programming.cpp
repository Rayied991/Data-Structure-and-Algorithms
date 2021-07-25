#include <iostream>
using namespace std;
void fib()
{
    int n;
    cout << "Enter number of terms:" << endl;
    cin >> n;
    int fibo[n];
    fibo[0] = 1;
    fibo[1] = 1;
    for (int i = 2; i < n; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    cout << "Fibonacci Series:" << endl;

    for (int i = 2; i < n; i++)
    {
        cout << fibo[i] << " ";
    }
}
int main()
{
    fib();

    return 0;
}
