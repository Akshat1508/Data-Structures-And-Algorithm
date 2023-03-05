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

//Function to insert a node at the beginning of the Linked List
void insertathead(node* &head,int value)
{
    node* n = new node(value);
    n->next=head;
    head = n;

}

//Function to insert a node at the end of the Linked List
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
//Function to display the Linked List
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
    cout<<"The Linked List is:"<<endl;
    display(head);
    cout<<endl;
    insertathead(head,4);
    cout<<"Inserting 4 at the beginning"<<endl;
    cout<<"New linked list is:"<<endl;
    display(head);
    return 0;
}