#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data=value;
        next=nullptr;
    }
};
int main(){
    Node *first=nullptr;
    Node *last=nullptr;
    int choice,value;
    do{
        cout<<"\n\n===== Linked List Menu=====";
        cout<<"\n1. Create Node";
        cout<<"\n2. Display List";
        cout<<"\n3. Delete First Node";
        cout<<"\n4. Exit";
        cout<<"\nEnter Your Choice: ";
        cin>>choice;
        switch (choice){
            case 1:
            {
                cout<<"Enter value: ";
                cin>>value;
                Node *newnode=new Node(value);
                if (first==nullptr)
                {
                    first=newnode;
                    last=newnode;
                }
                else
                {
                    last->next=newnode;
                    last=newnode;
                }
                cout<<"Node is inserted Successfully!!!";
                break;
            }
            case 2:
            {
                if (first==nullptr)
                {
                    cout<<"List is empty!!!";
                }
                else
                {
                    Node *temp=first;
                    while (temp!=nullptr)
                    {
                        cout<<temp->data<<" ";
                        temp=temp->next;
                    }
                }
                break;
            }
            case 3:
            {
                if (first==nullptr)
                {
                    cout<<"List is empty!!!";
                }
                else{
                    Node *temp=first;
                first=first->next;
                delete temp;
                cout<<"Successfully deleted!!!";
                if (first==nullptr)
                {
                    last=nullptr;
                }
                }
                break;
            }
            default:
            cout<<"Invalid Choce!!!";

        }
    }
    while (choice!=4);
}