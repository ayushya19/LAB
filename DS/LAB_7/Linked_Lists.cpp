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
        next=NULL;
    }
    
    static LinkedLists* create();
    void add(LinkedLists *head);
    void display(LinkedLists *head);
    
    LinkedLists* insertBefore(LinkedLists *head);
    void insertAfter(LinkedLists *head);
    void deleteAtIndex(LinkedLists *head);
    LinkedLists* reverse(LinkedLists *head);
    void sort(LinkedLists *head);
    void deleteAlternate(LinkedLists *head);
    LinkedLists* insertSort(LinkedLists *head);
};

LinkedLists* LinkedLists::create()
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
    }
}

void LinkedLists::display(LinkedLists *head)
{
    if(head==NULL)
    {
        std::cout<<"\nEmpty List\n";
        return;
    }
    
    LinkedLists *node=head;
    std::cout<<'\n';
    while(node!=NULL)
    {
        std::cout<<node->value<<'\t';
        node=node->next;
    }
}

LinkedLists* LinkedLists::insertBefore(LinkedLists *head)
{
    LinkedLists *n=new LinkedLists();
    int v;
    std::cout<<"\nEnter the Element : ";std::cin>>n->value;
    std::cout<<"\nWhere do you want to Insert : ";std::cin>>v;
    if(head==NULL)
    {
        std::cout<<"\nEmpty List. Inserting as first value.";
        head=n;
        return head;
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
    {   LinkedLists *node=head, *node1=NULL;
        while(node!=NULL)
        {
            if(node->value==v)
            {
                if(node==head){
                    n->next=head;
                    head=n; return head;
                }
                else{                        
                    node1->next=n;
                    n->next=node;
                    node1=node1->next;
                    node1->next=node;
                    break;
                }
            }
            else
            {
                node1=node;
                node=node->next;
            }
        }
    }
    return head;
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
    {   LinkedLists *node=head;
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
    {   LinkedLists *node=head, *node1=NULL;
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

LinkedLists* LinkedLists::reverse(LinkedLists* head)
{
    if(head==NULL)
    {
        std::cout<<"\nEmpty List.";
        return NULL;
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
    return head;
}

void LinkedLists::sort(LinkedLists* head)
{
    if(head==NULL)
    {
        std::cout<<"\nEmpty List.";
        return;
    }    
    
    LinkedLists *temp=new LinkedLists, *p=head, *q;
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

LinkedLists* LinkedLists::insertSort(LinkedLists *head)
{
    LinkedLists *n=new LinkedLists();
    std::cout<<"\nEnter the Element : ";std::cin>>n->value;
    if(head==NULL)
    {
        std::cout<<"\nEmpty List. Inserting as first value.";
        head=n;
        return NULL;
    }
    
    else if(head->next==NULL)
    {
        if(head->value >= n->value)
        {
            n->next=head;
            head=n;
        }
        else
            head->next=n;
    }
    
    else
    {   LinkedLists *node=head;

    	if (head->value >= n->value)
    	{
    		n->next=head;
    		head=n;
    	}

        else {
        	while(node->next!=NULL)
	        {
	            if(node->next->value >= n->value)
	            {
	                n->next=node->next;
	                node->next=n;
	                break;
	            }
	            node=node->next;
	        }
	        node->next=n;        
	   	}
    }
    return head;
}

int main()
{
    int opt=0;
    while(opt!=11)
    {
    	LinkedLists *head;
        std::cout<<"\n\n\n\tEnter your Choice\n"
                 <<"\n1. Create a Linked List."
                 <<"\n2. Add data in a Linked List."
                 <<"\n3. Insert Value Before an Element."
                 <<"\n4. Insert Value After an Element."
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
            case 1 :  head=LinkedLists::create();
                      break;

            case 2 :  head->add(head);
                      break;
            
            case 3 :  head=head->insertBefore(head);
                      break;
                      
            case 4 :  head->insertAfter(head);
                      break;

            case 5 :  head->deleteAtIndex(head);
                      break;

            case 6 :  head->display(head);
                      break;

            case 7 :  head=head->reverse(head);
                      break;

            case 8 :  head->sort(head);
                      break;

            case 9 :  head->deleteAlternate(head);
                      break;

            case 10 : head=head->insertSort(head);
                      break;
        }
    }
    return 0;
}