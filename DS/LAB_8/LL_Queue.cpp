#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

class Queue
{
    struct node *front, *rear;
public:
    Queue(){
        front = NULL, rear = NULL;
    }
    void push(int x)
    {
        struct node *np = new node;
        np->data = x;
        np->next = NULL;
        if(front == NULL)
        {
            front = rear = np;
            rear->next = NULL;
        }
        else
        {
            rear->next = np;
            rear = np;
            rear->next = NULL;
        }
    }
    void remove()
    {
        int x;
        if(front == NULL)
        {
            cout<<"empty queue\n";
        }
        else
        {
            struct node *p = front;
            cout<<"\nDeleted value is "<<p->data;
            front = front->next;
            delete(p);
        }
    }

    void show(){
        if(front == NULL)
        {
            cout<<"empty queue\n";
        }
        else
        {
            struct node *p = front;
            cout<<"\nThe Queue is\n";
            while(p!=NULL)
            {
                cout<<p->data<<'\t';
                p=p->next;
            }
            cout<<"\n";
        } 
    }      
};

int main()
{
    Queue s;
    int choice, n;
    while(1)
    {
        cout<<"\n\t\tSTACK USING LINKED LIST\n\n";
        cout<<"1:Insert\n2:Delete\n3:DISPLAY Queue\n4:EXIT";
        cout<<"\nEnter your choice(1-4): ";
        cin>>choice;
        switch(choice)
        {
            case 1:cout<<"\nEnter the value : ";cin>>n;
                s.push(n);
                break;
            case 2:
                s.remove();
                break;
            case 3:
                s.show();
                break;
            case 4:
                return 0;
                break;
            default:
                cout<<"Please enter correct choice(1-4)!!";
                break;
        }
    }
    return 0;
}