#include <iostream>
#include<list>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        this->data=val;
        this->next=NULL;
    }
};
class List{
    Node* head;
    Node* tail;
    public:
    List(){
        head=NULL;
        tail=NULL;
    }
    void push_front(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=newNode;
            tail=newNode;
            return;
        }
        newNode->next=head;
        head=newNode;
    }
    void push_back(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=newNode;
            tail=newNode;
            return;
        }
        tail->next=newNode;
        tail=newNode;
    }
    void pop_front(){
        if(head==NULL){
            return;
        }
        Node* temp=head;
        head=head->next;
        delete temp;
    }
    void pop_back(){
        if(head==NULL){
            return;
        }
        if(head->next==NULL){
            delete head;
            head=NULL;
            tail=NULL;
            return;
        }
        Node* temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        delete tail;
        tail=temp;
        tail->next=NULL;
    }
    
    void print(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
    void insert(int val,int pos){
        Node* newNode=new Node(val);
        if(pos==0){
            push_front(val);
            return;
        }
        Node* temp=head;
        for(int i=0;i<pos-1 && temp!=NULL;i++){
            temp=temp->next;
        }
        if(temp==NULL){
            return;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }
    void search(int key){
        int idx=0;
        Node* temp=head;
        while(temp!=NULL){
            if(temp->data==key){
                cout<<"Found at index: "<<idx<<endl;
                return;
            }
            temp=temp->next;
            idx++;
        }
        cout<<"Not found"<<endl;
    }
    void reverse(){
        Node* prev=NULL;
        Node* curr=head;
        Node* next=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        tail=head;
        head=prev;
    }

};
int main(){
    List l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_front(4);
    l.push_back(5);
    l.print();
    l.pop_front();
    l.print();
    l.pop_back();
    l.print();
    l.reverse();
    l.print();
    return 0;

}