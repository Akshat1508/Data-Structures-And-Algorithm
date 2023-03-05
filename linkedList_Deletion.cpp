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
void insertathead(node* &head,int value)
{
    node* n = new node(value);
    n->next=head;
    head = n;

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

//Function to delete the first node of Linked List
void deleteathead(node* &head)
{
    node* todelete = head;
    head = head->next;
    delete todelete;
}

//Function to delete the node of given value from Linked List
void nodedeletion(node* &head, int val)
{
    if(head == NULL)
    {
        return;
    }
    if(head->next == NULL)
    {
        deleteathead(head);
        return;
    }
    node* temp = head;
    while(temp->next->data!= val)
    {
        temp= temp->next;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;

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
    insertattail(head,5);
    display(head);
    nodedeletion(head,2);
    display(head);
    deleteathead(head);
    display(head);
    return 0;
}