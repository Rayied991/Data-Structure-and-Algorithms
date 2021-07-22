#include <iostream>
using namespace std;
class MyCircularQueue
{
    int Queue[5];
    int MaxSize = 5;
    int Front, Rear;

public:
    MyCircularQueue()
    {
        Front = -1;
        Rear = -1;
    }
    bool isempty()
    {
        if ((Front == -1) && (Rear == -1))
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
        if ((Rear + 1) % MaxSize == Front)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void Enqueue(int element)
    {
        if (isfull())
        {
            cout << "Queue Full" << endl;
        }
        else if (isempty())
        {
            Front = 0;
            Rear = 0;
            Queue[Rear] = element;
            cout << element << " is inserted into the Queue" << endl;
        }
        else
        {
            Rear = (Rear + 1) % MaxSize;
            Queue[Rear] = element;
            cout << element << " is inserted into the Queue" << endl;
        }
    }
    void Dequeue()
    {
        int temp;
        if (isempty())
        {
            cout << "Queue Empty" << endl;
        }
        else if (Rear == Front && Front != -1)
        {
            temp = Queue[Front];
            Rear = Front - 1;
            cout << temp << " removed from the Queue" << endl;
        }
        else
        {
            temp = Queue[Front];
            Front = (Front + 1) % MaxSize;
            cout << temp << " removed from the Queue" << endl;
        }
    }
    void ShowQueue()
    {
        if (isempty())
        {
            cout << "Queue Empty" << endl;
        }
        else if (Front <= Rear)
        {
            cout << "Queue Elements:" << endl;
            for (int i = Front; i <= Rear; i++)
            {
                cout << Queue[i] << '\t' << endl;
            }
            cout << endl;
        }
        else
        {
            for (int i = 0; i <= Rear; i++)
            {
                cout << Queue[i] << '\t' << endl;
            }
            for (int i = Front; i < MaxSize; i++)
            {
                cout << Queue[i] << '\t' << endl;
            }
        }
    }
    void Frontelement()
    {
        cout << "Front= "
             << "Queue"
             << "[" << Front << "]"
             << " = " << Queue[Front] << endl;
    }
};
int main()
{
    MyCircularQueue Q1;
    Q1.Dequeue(); //empty
    Q1.Enqueue(5);
    Q1.Enqueue(15);
    Q1.Enqueue(25);
    Q1.Enqueue(35);
    Q1.Enqueue(45);
    Q1.Dequeue();
    Q1.Dequeue();
    Q1.Enqueue(55);
    Q1.Enqueue(65);
    Q1.ShowQueue();
    Q1.Frontelement();

    return 0;
}
