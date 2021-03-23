#include <iostream>
using namespace std;
class Stack
{
    int *stack;
    int MaxSize;
    int Top;

public:
    Stack(int size);
    ~Stack();
    bool empty();
    bool Full();
    void Push(int element);
    void pop();
    void Resize(int NewSize);
    void Print();
    void topelement();
    int count();
    void clear();
    void change(int pos,int val);
    int peek(int pos);
};
Stack::Stack(int size)
{
    MaxSize = size;  //get size
    Top = -1;        //start the stack
    stack = new (nothrow) int[MaxSize];  //create array accordingly
};
Stack::~Stack()
{
    delete[] stack;   //release memory of the stack
    cout<<"Memory De-allocated"<<endl;
};
int Stack::count()
{
    return (Top+1);
};
void Stack::clear()
{
    system("cls");

};
int Stack::peek(int pos)
{
    if(empty())
    {
        cout<<"Stack underflow"<<endl;
    }
    else
    {
        return stack[pos];
    }
};
void Stack::change(int pos,int val)
{
    stack[pos]=val;
    cout<<"Value changed at location "<<val<<endl;

};

bool Stack::Full()
{
    if (Top == MaxSize - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
};
bool Stack::empty()
{
    if (Top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
};
void Stack::Push(int element)
{
    if (Full())
    {
        int s;
        cout << "Enter Memory to be allocated:"<<endl;
        cin>>s;
        if(s>0)
        {
            Resize(s);
            Top++;
            stack[Top]=element;
            cout<<"New space created and "<<element<<" is inserted into the stack"<<endl;
        }
        else
        {
            cout<<"Memory Cannot be created"<<endl;
        }


    }
    else
    {
        Top++;
        stack[Top] = element;
        cout << element << " is inserted into the Stack" << endl;
    }
};
void Stack::pop()
{
    int temp;
    if (empty())
    {
        cout << "Stack Empty" << endl;
    }
    else
    {

        temp = stack[Top];
        Top--;
        cout << temp << " has been removed from the Stack" << endl;
    }
};
void Stack::topelement()
{
    if(empty())
    {
        cout<<"Empty Stack"<<endl;
    }
    else
    {
        cout<<"Top ="<<" Stack"<<"["<<Top<<"]"<<" = "<<stack[Top]<<endl;
    }
}
void Stack::Resize(int NewSize)
{
    MaxSize = MaxSize + NewSize;
    int *temp = new int[MaxSize];
    for (int i = 0; i < MaxSize; i++)
    {
        temp[i] = stack[i];
    }
    stack = temp;
    cout<<"New Memory Allocated"<<endl;
};
void Stack::Print()
{
    cout << "Stack Elements are:";
    for (int i = Top; i >= 0; i--)
    {
        cout << stack[i] << " ";
    }
    cout << endl;
};

int main()
{
    Stack S1(5);
    int choice,value,position;
    do
    {
        cout<<"Choose an option:"<<endl;
        cout<<"1.Stack Push"<<endl;
        cout<<"2.Stack Pop"<<endl;
        cout<<"3.Print top element"<<endl;
        cout<<"4.Count"<<endl;
        cout<<"5.Print elements in the stack"<<endl;
        cout<<"6.peek"<<endl;
        cout<<"7.Change"<<endl;
        cout<<"8.Clear Screen"<<endl;
        cout<<"9.Exit"<<endl;
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Enter an item to be pushed into the stack:"<<endl;
            cin>>value;
            S1.Push(value);
            break;
        case 2:
            S1.pop();
            break;
        case 3:
            S1.topelement();
            break;
        case 4:
            cout<<"Number of the items in the stack are:"<<S1.count()<<endl;
            break;
        case 5:
            S1.Print();
            break;
        case 6:
            cout<<"Enter position of item you want to peek:"<<endl;
            cin>>position;
            cout<<"Value at position: "<<position<<" is "<<S1.peek(position)<<endl;
            break;
        case 7:
            cout<<"Enter position of item you want to change:"<<endl;
            cin>>position;
            cout<<"Enter value of item you want to change:"<<endl;
            cin>>value;
            S1.change(position,value);
            break;
        case 8:
            S1.clear();
            break;
        case 9:
            break;
        default:
            cout<<"Wrong option chosen!\nEnter Proper Option!"<<endl;
            break;

        }
    }
    while(choice!=9);
    return 0;
}
