#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define MAXLEN 100

class Stack{
    public:
    int data[MAXLEN];
    int top;
};
Stack intialize(){
    Stack s;
    s.top=-1;
    return s;
}
int isEmpty(Stack s){
    if (s.top==-1){ return 1;}
    else{ return 0;}
}
int isFull(Stack s){
    if (s.top==MAXLEN){ return 1; }
    else{ return 0;}
}

Stack push(Stack s,int val){
    if(isFull(s)){
        cout<<"OVERFLOW! Failed to push!"<<endl;
        return s;
    }
    s.data[s.top+1]=val;
    s.top++;
    return s;

}

Stack pop(Stack s){
    if(isEmpty(s)){
        cout<<"UNDERFLOW! Failed to pop!"<<endl;
        return s;
    }
    s.top--;
    return s;
}
void display(Stack s){
    if(isEmpty(s)){
        cout<<"Empty Stack!"<<endl;
        return;
    }
    for(int i=s.top;i>0;i--){
        cout<<s.data[i]<<" <- ";
    }
    cout<<s.data[0]<<" ] "<<endl;
}

int main() {
    Stack S;
    S=intialize();
    S=push(S,10);
    display(S);
    S=push(S,70);
    display(S);
    S=push(S,55);
    display(S);
    S=push(S,61);
    display(S);
    S=pop(S);
    display(S);
    S=pop(S);
    display(S);
    S=pop(S);
    display(S);
    S=pop(S);
    display(S);
    S=pop(S);
    display(S);


return 0;
}