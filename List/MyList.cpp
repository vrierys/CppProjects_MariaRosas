#include "MyList.h"

MyList::MyList()
{
	size = 0;


}

MyList::MyList(MyList &m)
{
	node *p = new node();
	node *aux = m.first;
	p->info = aux->info;
	size++;
	last = p;
	aux = aux->next;
	while (size != m.size) {

		node *t = new node();
		t->info = aux->info;
		size++;
		p = t;
		aux = aux->next;

	}
	first = p;
}



void MyList::push_front(int elem)
{
	node *p = new node();
	p->info = elem;
	if (size == 0) {

		first = p;
		last = p;
		size++;
	}

	else {
		first->previous = p;
		p->previous = first;
		first = p;
		size++;
	}
}


MyList::~MyList()
{




}
