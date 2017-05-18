#pragma once
class MyForward
{
public:
	struct node
	{
		int info;
		node *next;
	};

	node *first;
	MyForward();
	MyForward(MyForward &a);
	void push_front(int a);
	void pop_front();
	void insertafter(node *a, int elemen);
	~MyForward();
};
