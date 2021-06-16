#include<bits/stdc++.h>
using namespace std;
//Recursive function->
//when a function call itself inside a function
// void func(int n){
//     if(n==0) return;
//     func(n-1);
//     cout<<n<<endl;

// }

//factorial of n
int fact(int n){
    if(n==0) return 1;
   return n*fact(n-1);
}

int main(){
    // func(5);
    int n;
    cin>>n;
    cout<<fact(n);

    return 0;
}

//Recursive function time complexity requirements->
//1.number of function calls->n
//2.what is complexity of each function->O(1)
//O(n)