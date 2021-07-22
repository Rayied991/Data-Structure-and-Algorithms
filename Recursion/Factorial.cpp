#include <iostream>
using namespace std;
//Recursion -> a function call itself untill  base condition doesn't exceeded

int fact(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}
//Step by step calculation of fact(4)
// fact(4) = 4 * fact(3);
// fact(4) = 4 * 3 * fact(2);
// fact(4) = 4 * 3 * 2 * fact(1);
// fact(4) = 4 * 3 * 2 * 1 * fact(0);
// fact(4) = 4 * 3 * 2 * 1 *;
//fact(4)=24;

int main()
{
    //Factorial of a number
    //6!=6*5*4*3*2*1=720
    //0!=1
    //1!=1
    //2!=2
    //n!=n*(n-1)!
    int n;
    cout << "Enter a number:" << endl;
    cin >> n;
    cout << "Factorial  of " << n << " is = " << fact(n) << endl;

    return 0;
}