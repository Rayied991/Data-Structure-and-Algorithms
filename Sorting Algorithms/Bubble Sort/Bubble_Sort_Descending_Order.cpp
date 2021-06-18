#include <iostream>
using namespace std;
int main()
{
    int n;
    int temp,comp=0,ex=0;
    int i, j;
    cout << "Enter the number of elements to be inserted:";
    cin >> n;
    int Arr[n];
    cout << "Enter the Array to be inserted:" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> Arr[i];
    }
    cout << "Elements in the Array are:" << endl;
    for (i = 0; i < n; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << endl;
    //Array comparision and swapping
    for (i = 0; i < n-1; i++)
    {

        for (j = 0; j < n-i-1; j++)
        {
            comp++;

            if (Arr[j] < Arr[j + 1])
            {
                temp=Arr[j];
                Arr[j]=Arr[j+1];
                Arr[j+1]=temp;
                ex++;

            }


        }

    }

    cout << "Bubble Sort elements are after sorting:" << endl;
    for (i = 0; i <n; i++)
    {
        cout << Arr[i] << " ";
    }
    cout<<endl;
    cout<<"Number of comparisons:"<<comp<<endl;
    cout<<"Number of exchanges:"<<ex<<endl;

    return 0;
}
