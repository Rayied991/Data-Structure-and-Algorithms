#include <iostream>
using namespace std;
class MyQueue
{
    int Queue[5];
    int MaxSize = 5;
    int Rear, Front;

public:
    MyQueue()
    {
        Rear = -1;
        Front = -1;
    }
    bool isempty()
    {
        if (Rear == -1 && Front == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isfull()
    {
        if (Rear == MaxSize - 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void enqueue(int element)
    {
        if (isfull())
        {
            cout << "Queue is full" << endl;
        }
        else if (isempty())
        {
            //for 1st element insertion
            //while inserting 1st element both rear=front=0
            Front = 0;
            Rear = 0;
            Queue[Rear] = element;
            cout << element << " inserted into the Queue" << endl;
        }
        else
        {
            Rear++;
            Queue[Rear] = element;
            cout << element << " inserted into the Queue" << endl;
        }
    }
    void Dequeue()
    {
        int temp; //Temporary Variable
        if (isempty())
        {
            cout << "Queue is empty" << endl;
        }
        else if (Rear == Front && Front != -1)
        {
            //when front==rear->special case delete korte korte rear and front same hole
            //Front!=-1;->it is not empty
            temp = Queue[Front];
            Rear = Front - 1;
            cout << temp << " removed from the Queue" << endl;
        }
        else
        {
            temp = Queue[Front];
            Front++;
            cout << temp << " removed from the Queue" << endl;
        }
    }
    void ShowQueue()
    {
        cout << "Queue Elements:" << endl;
        for (int i = Front; i <= Rear; i++)
        {
            cout << Queue[i] << '\t' << endl;
        }
        cout << endl;
    }
    void Frontelement()
    {
        cout << " Front= "
             << "Queue"
             << "[" << Front << "]"
             << " = " << Queue[Front] << endl;
    }
};
int main()
{
    MyQueue M1;
    M1.Dequeue(); //Queue Empty
    M1.enqueue(10);
    M1.enqueue(20);
    M1.enqueue(30);
    M1.enqueue(40);
    M1.enqueue(50);
    M1.enqueue(60); //Queue Full
    M1.Dequeue();   //10 removed
    M1.enqueue(60); //limitation

    M1.Frontelement();
    M1.ShowQueue();

    return 0;
}
