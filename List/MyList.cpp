#include "MyList.h"
#include "iostream"

MyList::MyList()
{
	size = 0;
	last = nullptr;
	first = nullptr;
}

MyList::MyList(MyList &a)
{
	node *t = new node();
	node *aux = a.first;
	t->info = aux->info;
	size++;
	first = t;
	aux = aux->next;
	while (size != a.size)
	{
		node *p = new node();
		p->info = aux->info;
		size++;
		t = p;
		aux = aux->next;
	}
	last = t;

}

MyList::~MyList()
{

}


void MyList::remove(int value)
{

}


void MyList::push_front(int num)
{
	node *t = new node();
	t->info = num;
	if (size == 0)
	{
		last = t;
		first = t;
		size++;

	}
	else
	{
		first->previous = t;
		t->next = first;
		first = t;
		size++;
	}
}



void MyList::shiftLeft()
{
	//Pop front
	node *t = first;
	first = t->next;
	delete t;
	//Push back
	int aux = rand() % (11);
	node *s = new node();
	s->info = aux;
	s->next = nullptr;
	s->previous = last;
	last->next = s;
	last = s;
}

void MyList::shiftRight()
{
	//Pop back
	node *t = last;
	last = t->previous;
	delete t;
	//Push front
	int aux = rand() % 11;
	node *s = new node();
	s->info = aux;
	s->next = first;
	s->previous = nullptr;
	first->previous = s;
	first = s;

}

void MyList::rotateLeft()
{
	node *t = first;
	t->previous = last;
	last->next = t;
	t->next->previous = nullptr;
	first = t->next;
	last = t;
	

}

void MyList::rotateRight()
{
	node *t = last;
	t->next = first;
	first->previous = t;
	t->previous->next = nullptr;
	last = t->previous;
	first = t;
}


