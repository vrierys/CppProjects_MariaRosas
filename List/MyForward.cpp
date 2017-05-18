#include "MyForward.h"


MyForward::MyForward()
{
	first = nullptr;
}

MyForward::MyForward(MyForward & a)
{
	node *t = new node();
	node *aux = a.first;
	t->info = aux->info;
	t->next = nullptr;
	first = t;
	aux = aux->next;
	while (aux != nullptr)
	{
		node *p = new node();
		p->info = aux->info;
		p->next = first;
		first = p;
		aux = aux->next;
	}


}

void MyForward::push_front(int a)
{
	node *t = new node();
	t->next = first;
	t->info = a;
	first = t;
}

void MyForward::pop_front()
{
	node *t = first;
	first = t->next;
	delete t;
}

void MyForward::insertafter(node *a, int elemen)
{
	node *t = new node();
	t->info = elemen;
	t->next = a->next;
	a->next = t;
}


MyForward::~MyForward()
{
}
