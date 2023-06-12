#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

Node* top=NULL;

void push(int val){
    Node* newnode=new Node();
    newnode->data=val;

    if(top==NULL){
        newnode->next=NULL;
        top=newnode;
        return;
    }

    newnode->next=top;
    top=newnode;
    return;   
}

void pop(){
    if(top==NULL){
        cout<<"ERROR! (empty list)"<<endl;
        return;
    }
    if(top->next==NULL){
        delete top;
        top=NULL;
        return;
    }
    Node* newtop=top->next;
    delete top;
    top=newtop;
    return;

}

void display(){
    if(top==NULL){
        cout<<"EMPTY LIST!"<<endl;
        return;
    }
    Node* iterator=top;
    while(iterator->next!=NULL){
        cout<<iterator->data<<" <- ";
        iterator=iterator->next;
    }
    cout<<iterator->data<<" ] "<<endl;
}
void peek(){
    cout<<"peeking at "<<top->data<<endl;
    return;
}


int main() {
    top=NULL;
    display();
    push(60);
    push(50);
    push(40);
    display();
    pop();
    display();
    peek();

return 0;
}