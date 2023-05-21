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

void insert(int k)
{
    if(head == NULL)
    {
        head = new node();
        head->val = k;
        head->next = NULL;
        head->pre = NULL;
        cout<<"inserted as head"<<endl;
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
        cout<<"inserted"<<endl;
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

void rev()
{
    node* pre = NULL;
    cur = head;
    while(cur!=NULL)
    {
        temp = cur->next;
        cur->next = pre;
        pre = cur;
        cur = temp;
    }
    head = pre;
}
int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);

    rev();
    rev();
    print();
}