#pragma once
class MyStack
{
public:

	struct node {
		int info;
		node *next;
	};

	node *s;
	MyStack();
	MyStack(MyStack &m);
	MyStack(int a, int b);
	~MyStack();

	void pop();
	void push(int elem);
	int top();
	int size();
	bool isEmpty();
};

