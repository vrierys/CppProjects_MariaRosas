#include "MyStack.h"



MyStack::MyStack()
{
}

MyStack::MyStack(MyStack & m)
{
}

MyStack::MyStack(int a, int b)
{
}


MyStack::~MyStack()
{
}

void MyStack::pop()
{
}

void MyStack::push(int elem)
{
	node *t;
	t = new node{elem, s};
	s = t;
	
}

int MyStack::top()
{
	return 0;
}

int MyStack::size()
{
	return 0;
}

bool MyStack::isEmpty()
{
	return false;
}
