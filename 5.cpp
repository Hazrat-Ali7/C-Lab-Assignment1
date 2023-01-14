#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *nxt;
};
class LinkedList
{
public:
    node *head;
    int size=0;
    LinkedList ( )
    {
        head = NULL;
    }

    node *create_new_node(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode-> nxt = NULL;
        return newnode;
    }

    void InsertAtHead(int value)
    {
        node *a = create_new_node(value);
        if(head==NULL)
        {
            head = a;
            size++;
            return;
        }
        a->nxt=head;
        head = a;
        size++;
    }
    int getSize()
    {
        return size;
    }
    int getValue(int index)
    {
        node* a = head;
        int i = 0;
        while(a!= NULL)
        {
            if(i==index)
            {
                return a->data;
            }
            a = a->nxt;
            i++;
        }
        return -1;
    }

    void printReverse()
    {
        printReverseRecursive(head);
        cout<<endl;
    }
    void printReverseRecursive(node *n)
    {
        if(n)
        {
            printReverseRecursive(n->nxt);
            cout << n->data << " ";
        }
    }

    void Traverse()
    {
        node* a = head;
        while(a!= NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }
    void swapFirst( )
    {
        if (size>=2)
        {
            node *a = head;
            node *b = a->nxt;
            swap(a->data, b->data);
        }


    }
};
int main( )
{
    LinkedList l;
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(5);
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(6);
    l.InsertAtHead(30);
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(20);
    l.InsertAtHead(30);

    cout<<l.getValue(2)<<"\n";

    cout<<l.getValue(6)<<"\n";

    l.printReverse();
    l.Traverse();
    l.swapFirst();
    l.Traverse();
    l.printReverse();

}
