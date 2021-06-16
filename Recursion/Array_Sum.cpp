#include<bits/stdc++.h>
using namespace std;
//sum of Array
//sum(n,a)->sum of elements in array a till n index
//sum(n,a)=a[n]+sum(n-1,a)
int sum(int n,int*A){
    if(n<0) return 0; 
    return A[n]+sum(n-1,A);



}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    cout<<sum(n-1,arr)<<endl;
    cout<<sum(3,arr);

        return 0;
}