#include<iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void display(int *arr, int size)
{
    for(int i=0; i<size; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
int BinarySearch(int Arr[],int n,int search)
{
    int first=0;
    int last=n-1;
    do
    {
        int mid=(first+last)/2;

        if(Arr[mid]==search)
        {
            int val=mid+1;
            cout<<"Element Found in the position No ->"<<val<<endl;
            break;
        }
        else if(Arr[mid]<search)
        {
            first=mid+1;
        }
        else
        {
            last=mid-1;
        }
    }
    while(first<=last);
    if(first>last)
    {
        cout<<"Element not found";
    }


}
int main()
{
    int value,sizearr,temp;
    cout<<"Enter Array size:"<<endl;
    cin>>sizearr;
    int Arr[sizearr];
    cout<<"Enter elements in the Array:"<<endl;
    for (int i=0; i<sizearr; i++)
    {
        cin>>Arr[i];
    }
    //sorting  the Array
    for(int i=0; i<sizearr; i++)
    {

        for(int j=0; j<sizearr-i-1; j++)
        {
            if(Arr[j]>Arr[j+1])
            {
                swap(Arr[j],Arr[j+1]);



            }
        }
    }
    cout<<"Elements of array after sorting:"<<endl;
    for(int i=0; i<sizearr; i++)
    {
        cout<<Arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter value to be Searched:"<<endl;
    cin>>value;


    BinarySearch(Arr,sizearr,value);



    return 0;
}
