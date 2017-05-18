#pragma once

class MyList
{
public:
	struct node
	{
		int info;
		node *next;
		node *previous;
	};

	int size;
	node *last;
	node *first;
	MyList();
	MyList(MyList &a);
	~MyList();
	void push_front(int num);
	void push_back(int num);
	void pop_front();
	void remove(int value);
	void reverse();
	void shiftLeft();
	void shiftRight();
	void rotateLeft();
	void rotateRight();

};




