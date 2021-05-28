#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node(){}
    node(int x)
    {
        data=x;
        next=NULL;
    }
};

void insertAtBeg(node* &head,int val)
{
    node* newNode = new node(val);
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(node* &head,int val)
{
    node* newNode = new node(val);
    if(head == NULL)
    {
        head = newNode;
        return;
    }   
    node* ptr = head;
    while(ptr->next != NULL)
    {
        ptr=ptr->next;
    }
    
    ptr->next = newNode;
}
void deleteAtBeg(node* &head)
{
    node* todelete = head;
    head = head->next;
    delete todelete;
}
void Delete(node* &head, int key)
{
    if(head==NULL)
        return;
    if(key==head->data)
    {
        deleteAtBeg(head);
        return;
    }
    node* ptr1=head->next;
    node* ptr2=head;
    
    
    while(ptr1!=NULL)
    {
        if(ptr1->data == key)
        {    
            node* todelete = ptr1;
            ptr2->next=ptr1->next;
            delete(todelete);
            break;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }

}

void print(node* head)
{
    if(head==NULL)
        return;
    node* ptr = head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<"->";
        ptr=ptr->next;
    }
    cout<<"NULL"<<endl; 
}

bool search(node* head, int key)
{
    node* ptr = head;
    while(ptr!=NULL)
    {
        if(ptr->data == key)
            return true;
        ptr = ptr->next;
    }
    return false;
}

void reverse(node* &head)
{
    if(head == NULL || head->next == NULL)
        return;
    node* prev= NULL;
    node* curr= head;
    node* nest=head->next;
    while(curr!=NULL)
    {
        curr->next = prev;
        prev=curr;
        curr=nest;
        if(!(nest==NULL))
            nest=nest->next;
    }
    head = prev;
}


node* reverseRecursive(node *head)
{
    if(head == NULL || head->next == NULL)
        return head ;
    node* newhead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}
 
node* reverseK(node *head,int k)
{
    if(head == NULL || head->next == NULL)
        return head;
    node* prev= NULL;
    node* curr= head;
    node* nest=head->next;
    // node* newHead = head;
    // for(int i=0;i<k;i++)
    //     newHead = newHead->next;
    int newK = k;

    while(curr!=NULL && newK--)
    {
        curr->next = prev;
        prev=curr;
        curr=nest;
        if(!(nest==NULL))
            nest=nest->next;
    }
    // head = prev;
    // for(int i=0;i<k-1;i++)
        // prev = prev->next;
    // prev -> next = reverseK(newHead,k);
    
    // return head;
    if(nest != NULL)
    {
        head->next = reverseK(curr,k);
    }
    return prev;
}

bool detectCycle(node* head)
{
    node* slowptr=head;       //Tortoise
    node* fastptr=head;       //Hare
    while(fastptr != NULL && fastptr -> next !=NULL)
    {
        slowptr = slowptr -> next;
        fastptr = fastptr -> next ->next ;
        if(slowptr == fastptr)
            return true;
        
    }
    return false;
}

void removeCycle(node* &head)
{
    node* slowptr=head;       //Tortoise
    node* fastptr=head;       //Hare
    node* exceptionptr=head;
    int flag=0;
    while(fastptr != NULL && fastptr -> next !=NULL)
    {
        exceptionptr=slowptr;
        slowptr = slowptr -> next;
        fastptr = fastptr -> next ->next ;
        if(slowptr == fastptr && slowptr == head)
        {
            flag=2;
            break;
        }
        if(slowptr == fastptr )
        {
            flag=1;
            break;
        }
    }
    if(flag == 1 )
    {
        fastptr=head;
        while(fastptr->next != slowptr->next)
        {
            fastptr = fastptr->next;
            slowptr = slowptr->next;
        }
        slowptr -> next = NULL;
    }
    else if( flag = 2 )
    {
        exceptionptr->next = NULL;
    }
    
}
void makeCycle(node* &head, int pos)
{
    node* ptr=head;
    node* cyclePos = head;
    while(ptr->next != NULL)
    {
        if(pos-- == 0)
        {
            cyclePos = ptr;
        }
        ptr = ptr->next;
    }
    ptr-> next = cyclePos;
}

void moveLastToFront(node* &head)
{
    node* prev=NULL;
    node* curr=head;
    while(curr->next != NULL)
    {
        prev=curr;
        curr=curr->next;
    }
    curr->next = head;
    head = curr;
    prev->next=NULL;
}

int main()
{
    node* head = NULL;
    insertAtEnd(head,10);
    insertAtEnd(head,20);
    insertAtEnd(head,30);
    insertAtEnd(head,40);
    insertAtEnd(head,50);
    insertAtEnd(head,60);
    // print(head);
    // Delete(head,40);
    // cout<<head->data;
    // print(head);
    // head = reverseK(head,3);
    // cout<<head->data;
    // cout<<detectCycle(head)<<endl;
    // makeCycle(head, 0);
    // print(head);
    // cout<<detectCycle(head)<<endl;
    // removeCycle(head);
    // cout<<detectCycle(head)<<endl;
    print(head); 
    moveLastToFront(head);
    print(head);    
    return 0;   
}