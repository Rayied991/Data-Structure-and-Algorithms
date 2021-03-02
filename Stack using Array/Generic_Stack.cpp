#include <iostream>
using namespace std;
template <typename T>
class Stack
{
    int MaxSize;
    T Stackarr[5];
    int top;

public:
    T initstack()
    {
        top = -1;
        MaxSize = 5;
    }
    bool isfull()
    {
        if (top == MaxSize - 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isempty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    T Push(T a)
    {
        if (isfull())
        {
            cout << "Stack Overflow" << endl;
        }
        else
        {
            top++;
            Stackarr[top] = a;
            cout << a << " is inserted into the array" << endl;
        }
    }
    T Pop()
    {
        if (isempty())
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            top--;
            int temp = Stackarr[top];
            cout << temp << " removed from the Stack" << endl;
        }
    }
    T Topelement()
    {
        if (isempty())
        {
            cout << "Empty Stack" << endl;
        }
        else
        {
            cout << "Top ="
                 << " Stack"
                 << "[" << top << "]"
                 << " = " << Stackarr[top] << endl;
        }
    }
    T PrintStack()
    {
        cout << "Stack elements from top:" << endl;
        for (int i = top; i >= 0; i--)
        {
            cout << Stackarr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    Stack<int> S1;
    Stack<char> S2;

    cout << "Integer Stack:" << endl;
    S1.initstack();
    S1.Pop();
    S1.Push(10);
    S1.Push(20);
    S1.Push(30);
    S1.Push(40);
    S1.Push(50);
    S1.Push(60);
    S2.Pop();
    S1.Topelement();
    S1.PrintStack();

    cout << "Character Stack:" << endl;
    S2.initstack();
    S2.Pop();
    S2.Push('A');
    S2.Push('B');
    S2.Push('C');
    S2.Push('A');
    S2.Push('B');
    S2.Push('C');
    S2.Pop();
    S2.Topelement();
    S2.PrintStack();

    return 0;
}