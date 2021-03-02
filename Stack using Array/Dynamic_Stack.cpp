#include <iostream>
using namespace std;
class MyStack
{
    int *Stack;
    int MaxSize;
    int Top;

public:
    MyStack(int size);
    ~MyStack();
    bool isempty();
    bool isfull();
    void push(int a);
    void pop();
    void PrintStack();
    void TopElement();
    void ResizeStack(int NewSize);
};
MyStack::MyStack(int size)
{
    MaxSize = size;           //get Size
    Top = -1;                 //Start the Stack
    Stack = new int[MaxSize]; //Create array accordingly
}
MyStack::~MyStack()
{
    delete[] Stack; //release the memory of the stack
    cout << "Memory De-allocated" << endl;
}
bool MyStack::isfull()
{
    if (Top == MaxSize - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool MyStack::isempty()
{
    if (Top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void MyStack::push(int a)
{
    if (isfull())
    {
        cout << "Stack Overflow" << endl;
        ResizeStack(5);
        Top++;
        Stack[Top] = a;
        cout << "New Space Created and " << a << " is inserted into the Stack" << endl;
    }
    else
    {
        Top++;
        Stack[Top] = a;
        cout << a << " is inserted into the Stack" << endl;
    }
}
void MyStack::pop()
{
    int temp;
    if (isempty())
    {
        cout << "Stack Underflow" << endl;
    }
    else
    {
        Top--;
        temp = Stack[Top];
        cout << temp << " removed from the Stack" <<endl;
    }
}
void MyStack::TopElement()
{
    if (isempty())
    {
        cout << "Empty Stack" << endl;
    }
    else
    {
        cout << "Top ="
             << " Stack"
             << "[" << Top << "]"
             << " = " << Stack[Top] << endl;
    }
}
void MyStack::ResizeStack(int NewSize)
{
    MaxSize = MaxSize + NewSize;
    int *tempStack = new int[MaxSize];
    for (int i = 0; i < MaxSize; i++)
    {
        tempStack[i] = Stack[i];
    }
    Stack = tempStack;
}
void MyStack::PrintStack()
{
    cout << "Stack elements from top:" << endl;
    for (int i = Top; i >= 0; i--)
    {
        cout << Stack[i] << " ";
    }
    cout << endl;
}
int main()
{
    MyStack M1(5);//Stack Underflow
    M1.pop();//Memory De-allocated 
    M1.push(10);
    M1.push(20);
    M1.push(50);
    M1.push(60);
    M1.push(80);
    M1.push(45);/*Stack Overflow!
    New Stack is created and 45 is inserted into the stack*/
    M1.TopElement();
    M1.PrintStack();
    return 0;
}