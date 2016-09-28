#include <iostream>
#include <stdio.h>
#include <string.h>

class LinkedLists
{
    int value;
    LinkedLists *next;
    
public:
    
    LinkedLists()
    {
        *next=NULL;
    }
    
    LinkedLists* create();
    void add(LinkedLists *head);
    void display(LinkedLists *head);
    
    void insertBefore(LinkedLists *head);
    void insertAfter(LinkedLists *head);
    void deleteAtIndex(LinkedLists *head);
    void reverse(LinkedLists *head);
    void sort(LinkedLists *head);
    void deleteAlternate(LinkedLists *head);
    void insertSort(LinkedLists *head);
};

LinkedLists LinkedLists::create()
{
    LinkedLists *head=new LinkedLists();
    std::cout<<"\nEnter the Value";std::cin>>head->value;
    
    return head;
}

void LinkedLists::add(LinkedLists* head)
{
    LinkedLists *p=new LinkedLists();
    std::cout<<"\nEnter the Value : ";std::cin>>p->value;
    if(head==NULL)  head=p;
    else
    {
        LinkedLists *node=new LinkedLists();
        node=head;
        while(node->next!=NULL)
        {
            node=node->next;
        }
        node->next=p;
        delete node;
    }
    delete p;
}

void LinkedLists::display(LinkedLists *head)
{
    if(head==NULL)
    {
        std::cout<<"\nEmpty List\n";
        return;
    }
    
    LinkedLists *node=new LinkedLists();
    node=head;
    std::cout<<'\n';
    while(node!=NULL)
    {
        std::cout<<node->value<<'\t';
        node=node->next;
    }
}

void LinkedLists::insertBefore(LinkedLists *head)
{
    LinkedLists *n=new LinkedLists();
    int v;
    std::cout<<"\nEnter the Element : ";std::cin>>n->value;
    std::cout<<"\nWhere do you want to Insert : ";std::cin>>v;
    if(head==NULL)
    {
        std::cout<<"\nEmpty List. Inserting as first value.";
        head=n;
        return;
    }
    
    else if(head->next==NULL)
    {
        if(head->value==v)
        {
            n->next=head;
            head=n;
        }
        else
        {
            head->next=n;
        }
    }
    
    else
    {   LinkedLists *node=new LinkedLists(), *node1=new LinkedLists();
        node=head;
        while(node!=NULL)
        {
            if(node->value==v)
            {
                node1->next=n;
                node1=node1->next;
                node1->next=node;
                break;
            }
            else
            {
                node1=node;
                node=node->next;
            }
        }
    }
}

void LinkedLists::insertAfter(LinkedLists *head)
{
    LinkedLists *n=new LinkedLists();
    int v;
    std::cout<<"\nEnter the Element : ";std::cin>>n->value;
    std::cout<<"\nWhere do you want to Insert : ";std::cin>>v;
    if(head==NULL)
    {
        std::cout<<"\nEmpty List. Inserting as first value.";
        head=n;
        return;
    }
    
    else
    {   LinkedLists *node=new LinkedLists();
        node=head;
        while(node->next!=NULL)
        {
            if(node->value==v)
            {
                n->next=node->next;
                node->next=n;
                break;
            }
            else
                node=node->next;
        }
    }
}

void LinkedLists::deleteAtIndex(LinkedLists* head)
{
    int v;
    std::cout<<"\nWhere do you want to Delete : ";std::cin>>v;
    if(head==NULL)
    {
        std::cout<<"\nEmpty List.";
        return;
    }
    
    else if(head->next==NULL)
    {
        if(head->value==v)
            head=NULL;
        
        else
            std::cout<<"\nElement not found.";        
    }
    
    else
    {   LinkedLists *node=new LinkedLists(), *node1=new LinkedLists();
        node=head;
        while(node!=NULL)
        {
            if(node->value==v)
            {
                LinkedLists *temp=node;
                node=node->next;
                node1->next=node;
                delete temp;
                break;
            }
            else
            {
                node1=node;
                node=node->next;
            }
        }
    }
}

void LinkedLists::reverse(LinkedLists* head)
{
    if(head==NULL)
    {
        std::cout<<"\nEmpty List.";
        return;
    }
    
    LinkedLists *p1, *p2, *p3;
    p1=head;
    p2=p1->next;
    p3=p2->next;
    p1->next=NULL;
    p2->next=p1;
    while(p3!=NULL)
    {
        p1=p2;
        p2=p3;
        p3=p3->next;
        p2->next=p1;
    }
    head=p2;
}

void LinkedLists::sort(LinkedLists* head)
{
    if(head==NULL)
    {
        std::cout<<"\nEmpty List.";
        return;
    }    
    
    LinkedLists *temp, *p, *q;
    temp=new LinkedLists();
    p=head;
    while(p->next!=NULL)
    {
        q=p->next;
        while(q!=NULL)
        {
            if(p->value > q->value)
            {
                temp->value=q->value;
                q->value=p->value;
                p->value=temp->value;
            }
            q=q->next;
        }
        p=p->next;
    }
}

void LinkedLists::deleteAlternate(LinkedLists* head)
{
    int v;
    std::cout<<"\nWhere do you want to Delete : ";std::cin>>v;
    if(head==NULL)
    {
        std::cout<<"\nEmpty List.";
        return;
    }
    
    else if(head->next==NULL)
    {
        std::cout<<"\nOnly 1 Element.";        
    }
    
    else
    {   
        LinkedLists *node=head;
        while(node!=NULL && node->next!=NULL)
        {
            LinkedLists *temp=node->next;
            node->next=node->next->next;
            node=node->next;
            delete temp;
        }
    }
}

void LinkedLists::insertSort(LinkedLists *head)
{
    LinkedLists *n=new LinkedLists();
    std::cout<<"\nEnter the Element : ";std::cin>>n->value;
    if(head==NULL)
    {
        std::cout<<"\nEmpty List. Inserting as first value.";
        head=n;
        return;
    }
    
    else if(head->next==NULL)
    {
        if(head->value <= n->value)
        {
            n->next=head;
            head=n;
        }
        else
        {
            head->next=n;
        }
    }
    
    else
    {   int f=0;
        LinkedLists *node=new LinkedLists(), *node1=new LinkedLists();
        node=head;
        while(node!=NULL)
        {
            if(node->value <= n->value)
            {
                f=1;
                node1->next=n;
                node1=node1->next;
                node1->next=node;
                break;
            }
            else
            {
                node1=node;
                node=node->next;
            }
        }
        if(f==0)
        {
            node1->next=n;
        }
    }
}

int main()
{
    int opt=0;
    while(opt!=11)
    {
        LinkedLists *head=NULL;
        std::cout<<"\n\n\n\tEnter your Choice\n"
                 <<"\n1. Create a Linked List."
                 <<"\n2. Add data in a Linked List."
                 <<"\n3. Insert Value Before an Element."
                 <<"\n5. Delete a particular Element."
                 <<"\n6. Traverse a List."
                 <<"\n7. Reverse a List."
                 <<"\n8. Sort a List."
                 <<"\n9. Delete Alternate Elements in a List"
                 <<"\n10. Insert Element in a Sorted List"
                 <<"\n11. Exit.";
        std::cin>>opt;
        switch(opt)
        {
            case 1 :  LinkedLists *n=new LinkedLists();
                      head=n.create();
                      delete n;
                      break;
            case 2 :  head.add(head);
                      break;
            
            case 3 :  head.insertBefore(head);
                      break;
                      
            case 4 :  head.insertAfter(head);
                      break;
        }
    }
    return 0;
}