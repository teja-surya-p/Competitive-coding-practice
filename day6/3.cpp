#include <iostream>
using namespace std;

class node
{
    public:
    int val;
    node* next;
    node* pre;
};

node* head = NULL;
node* cur = NULL;
node* temp = NULL;
node* pre = NULL;
node* temp2 = NULL;

void insert(int k)
{
    if(head == NULL)
    {
        head = new node();
        head->val = k;
        head->next = NULL;
        head->pre = NULL;
    }
    else
    {
        temp = head;
        cur = new node();
        cur->val = k;
        cur->next = NULL;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = cur;
        cur->pre = temp;
    }
}

void print()
{
    if(head == NULL)
    {
        cout<<"empty"<<endl;
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            cout<<temp->val<<"->";
            temp = temp->next;
        }
        if(temp == NULL)
        {
            cout<<"NULL"<<endl;
        }
    }
}

void rev_k(int k)
{
    int count = 0;
    temp = head;
    while(temp!=NULL)
    {
        count++;
        temp = temp->next;
    }

    cur = head;
    pre = new node();
    pre->next = head;

    int i=0;
    while(count >= k)
    {
        cur = pre->next;
        temp = cur->next;
        int j=0;
        for(int i=0;i<k-1;i++)
        {
            cur->next = temp->next;
            temp->next = pre->next;
            pre->next = temp;
            temp = cur->next;
        }
        pre = cur;
        count -= k;
    }
}

int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);
    insert(7);
    insert(8);
    insert(9);

    rev_k(3);

    print();
}