#include <iostream>

class DLL{
	int value;
	DLL *llink, *rlink;

public:

	DLL();
	~DLL();
	static DLL* create();
	void add(DLL *head);
	void merge(DLL *x1, DLL *x2);
	void display(DLL *head);
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

void DLL::merge(DLL *x1, DLL *x2){
	DLL *node=x1;
	while(node->rlink!=NULL)
		node=node->rlink;

	node->rlink=x2;
	node->rlink->llink=node;
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

int main(){
	DLL *x1=DLL::create();
	std::cout<<"\nEnter 3 values for x1";
	for(int i=0; i<3; i++)
		x1->add(x1);
	x1->display(x1);

	DLL *x2=DLL::create();
	std::cout<<"\nEnter 3 values for x1";
	for(int i=0; i<3; i++)
		x2->add(x2);
	x2->display(x2);

	x1->merge(x1, x2);
	x1->display(x1);

	return 0;
}