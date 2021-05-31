#include <iostream>
using namespace std;
int main()
{
     int n,item;
     cout<<"Enter size of the array:"<<"\n";
    cin >> n;
    int arr[n];
    
    cout<<"Enter Array elements:"<<"\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        

    }
    cout<<"Enter an element to be searched:"<<"\n";
    cin>>item;
    for(int i=0;i<n;i++){
        if (arr[i]==item)
        {
            cout << "item found in index["<<i<<"]"<< "\n";
            break;
        }
    }

    return 0;
}
