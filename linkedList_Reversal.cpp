#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

//Function to reverse the Linked List
node* reverse(node* &head)
{
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;
    while(currptr!=NULL)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}
void insertattail(node* &head, int value)
{
    node* n = new node(value);
    if(head == NULL)
    {
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void display(node* head)
{
    while (head!=NULL)
    {
        cout<<head->data<<"->";
        head  = head->next;
    }
    cout<<"NULL"<<endl;    
}
int main()
{
    node* head = NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    cout<<"Linked List:"<<endl;
    display(head);
    cout<<endl;
    node* newhead = reverse(head);
    cout<<"Reversed Linked List:"<<endl;
    display(newhead);
    return 0;
}