#include <iostream>

class DLL{
	int value;
	DLL *llink, *rlink;

public:

	DLL();
	~DLL();
	static DLL* create();
	void add(DLL *head);
	void display(DLL *head);

	void insertBefore(DLL *head);
	void insertAfter(DLL *head);
	void deleteElement(DLL *head);
	DLL* reverse(DLL *head);
};

DLL::DLL(){
	llink=rlink=NULL;
}

DLL::~DLL(){
}

DLL* DLL::create(){
	DLL *head=new DLL();
	std::cout<<"\nEnter the value : ";std::cin>>head->value;
	return head;
}

void DLL::add(DLL *head){
	DLL *n=new DLL();
	std::cout<<"\nEnter the value : ";std::cin>>n->value;
	if(head==NULL)	head=n;
	else{
		DLL *node=head;
		while(node->rlink!=NULL)
			node=node->rlink;
		node->rlink=n;
		node->rlink->llink=node;
	}
}

void DLL::display(DLL *head){
	DLL *node=head;

	std::cout<<'\n';
	while(node!=NULL){
		std::cout<<node->value<<'\t';
		node=node->rlink;
	}
	std::cout<<'\n';
}

void DLL::insertBefore(DLL *head){
	DLL *n=new DLL();	int v;
	std::cout<<"\tEnter the value : ";std::cin>>n->value;
	std::cout<<"\t Enter the Element before which you want it : ";std::cin>>v;

	if(head==NULL)	head=n;
	else{
		DLL*node=head;
		while(node->rlink!=NULL){
			if(node->value==v){
				node=node->llink;
				n->rlink=node->rlink;
				node->rlink=n;
				n->llink=node;
				n->rlink->llink=n;
				return;
			}
			node=node->rlink;
		}
		std::cout<<'\n'<<v<<" value not found. Inserting at last.\n";
		node->rlink=n;
		node->rlink->llink=node;
	}
}

void DLL::insertAfter(DLL *head){
	DLL *n=new DLL();	int v;
	std::cout<<"\tEnter the value : ";std::cin>>n->value;
	std::cout<<"\t Enter the Element after which you want it : ";std::cin>>v;

	if(head==NULL)	head=n;
	else{
		DLL*node=head;
		while(node->rlink!=NULL){
			if(node->value==v){
				n->rlink=node->rlink;
				node->rlink=n;
				n->llink=node;
				n->rlink->llink=n;
				return;
			}
			node=node->rlink;
		}
		std::cout<<'\n'<<v<<" value not found. Inserting at last.\n";
		node->rlink=n;
		node->rlink->llink=node;
	}
}

void DLL::deleteElement(DLL *head){
	int v;
	std::cout<<"\t Enter the Element you want to Delete : ";std::cin>>v;

	if(head==NULL){
		std::cout<<"\nEmpty List.\n";
		return;
	}

	else{
		DLL*node=head;
		while(node->rlink!=NULL){
			if(node->value==v){
				DLL *temp=node;
				node=node->llink;
				node->rlink=temp->rlink;
				node->rlink->llink=node;
				delete temp;
				return;
			}
			node=node->rlink;
		}
		std::cout<<'\n'<<v<<" value not found.\n";
	}
}

DLL* DLL::reverse(DLL *head){
	if(head==NULL){
		std::cout<<"\nEmpty List.\n";
		return NULL;
	}

	else{
		DLL*node=head;
		while(node->rlink!=NULL){
			DLL *t=node->rlink;
			node->rlink=node->llink;
			node->llink=t;

			node=t;
		}
		node->rlink=node->llink;
		node->llink=NULL;
		head=node;
	}
}

int main()
{
    int opt=0;
    while(opt!=8)
    {
    	DLL *head;
        std::cout<<"\n\n\n\tEnter your Choice\n"
                 <<"\n1. Create a Double-Linked List."
                 <<"\n2. Add data in a Double-Linked List."
                 <<"\n3. Insert Value Before an Element."
                 <<"\n4. Insert Value After an Element."
                 <<"\n5. Delete a particular Element."
                 <<"\n6. Traverse a List."
                 <<"\n7. Reverse a List."
                 <<"\n8. Exit.";
        std::cin>>opt;
        switch(opt)
        {
            case 1 :  head=DLL::create();
                      break;

            case 2 :  head->add(head);
                      break;
            
            case 3 :  head->insertBefore(head);
                      break;
                      
            case 4 :  head->insertAfter(head);
                      break;

            case 5 :  head->deleteElement(head);
                      break;

            case 6 :  head->display(head);
                      break;

            case 7 :  head=head->reverse(head);
                      break;
        }
    }
    return 0;
}