#include<iostream>
using namespace std;
int main()
{
    int mimo[10] = {32,4,5,12,5,54,6,23,3,5}; // declaration of a new array
    int n;
    int i;

    cout<<"Enter the number to be searched: "<<endl;

    cin>>n; // inputting the number to be searched in the array

    for(i=0; i<10; i++)
    {
         // searching begins

        if (n == mimo[i])
        {


            break; // searching ends

        }
    }

    cout<<n<<"was found in index"<<i<<"of the array."<<endl;
}
