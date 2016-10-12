#include <iostream>

using namespace std;

class CLL{
	int co, exp;
	CLL *next;

public:
	CLL* enter();
	CLL* add(CLL*, CLL*);
	void show(CLL*);
};

CLL* CLL::enter(){
	cout<<"\nEnter the value in decreasing exponents. give -999 to stop;\n";
	CLL *node=new CLL, *p=NULL;
	do{
		cout<<"\nEnter coefficient : ";cin>>node->co;
		cout<<"\nEnter exponent : ";cin>>node->exp;
		if(node->co == 0)	continue;
		if(node->exp == -999)	break;
		if(p==NULL){
			p=node;
			p->next=p;
		}
		else{
			CLL *n=p;
			while(n->next!=p)
				n=n->next;
			node->next=p;
			n->next=node;
		}
	}while(node->exp != -999);
	return p;
}

CLL* CLL::add(CLL *p1, CLL *p2){
	if(p1==NULL)	return p2;
	else if(p2==NULL)	return p1;

	CLL *total=NULL, *x=p1, *y=p2;
	while(x!=p1 || y!=p2)
	{
		CLL *n=new CLL;
		
		if(x->exp == y->exp){
			n->co = x->co + y->co;
			n->exp = x->exp;
			x=x->next;	y=y->next;
		}
		else if(x->exp > y->exp){
			n->co = x->co;
			n->exp = x->exp;
			x=x->next;
		}
		else if(x->exp < y->exp){
			n->co = y->co;
			n->exp = y->exp;
			y=y->next;
		}
		if(total==NULL){
			total=n;
			total->next=total;
		}
		else{
			CLL *node=total;
			while(node->next!=total)
				node=node->next;
			n->next=total;
			node->next=n;
		}
	}
}

void CLL::show(CLL *p)
{
	CLL *node=p;
	cout<<'\n'<<node->co<<"x^"<<node->exp;
	node=node->next;
	while(node->next!=p){
		cout<<" + "<<node->co<<"x^"<<node->exp;
		node=node->next;
	}
}

int main(){
	 CLL *f=new CLL;
	CLL *p1=f->enter();
	f->show(p1);

	CLL *p2=f->enter();
	f->show(p2);

	CLL *tot=f->add(p1, p2);
	f->show(tot);

	return 0;
}