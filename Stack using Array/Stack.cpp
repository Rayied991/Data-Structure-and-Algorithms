#include<iostream>
#define Max 5
using namespace std;
int Stack[Max];
int top;


void initstack(){
    top=-1;
}
bool isempty(){
    if(top==-1){
        return true;
    }
    else{
        return false;
    }

}
bool isfull(){
    if(top==Max-1){
        return true;
    }
    else{
        return false;
    }
}
void Push(int a){
    if(isfull()){
        cout<<"Stack Overflow"<<endl;
    }
    else{
        top++;
        Stack[top]=a;
        cout<<a<<" Inserted into the Stack"<<endl;
    }
}
void Pop(){
    int temp;
    if(isempty()){
        cout<<"Stack Underflow"<<endl;
    }
    else{
        temp=Stack[top];
        top--;
        cout<<temp<<" removed from the Stack"<<endl;
        
    }
}
void topelement(){
    if(isempty()){
        cout<<"Empty Stack"<<endl;
    }
    else{
        cout<<"Top ="<<" Stack"<<"["<<top<<"]"<<" = "<<Stack[top]<<endl;
    }
}
void printstack(){
    cout<<"Stack elements from top:"<<endl;
    for(int i=top;i>=0;i--){
        cout<<Stack[i]<<" ";
    }
    cout<<endl;
}
int main(){
    initstack();
    //stack is now empty
    Pop();//will give underflow
    //inserting
    Push(10);
    Push(20);
    Push(30);
    Push(50);
    Push(8);
    Push(100);//Stack full
    Pop();//8 will be removed
    topelement();
    printstack();
    return 0;
}