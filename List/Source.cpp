#include <list>
#include <iostream>
#include <queue>
#include <set>
#include "MyList.h"


std::list<int> superMerge(std::list<int> l1, std::list<int> l2) {


	std::list<int> copia1(l1);
	std::list<int> copia2(l2);
	std::priority_queue<int> orden;
	std::list<int> merge;


	for (std::list<int>::iterator it = copia1.begin(); it != copia1.end(); ++it) {
		int aux = *it;
		orden.push(aux);
	}

	for (std::list<int>::iterator it = copia2.begin(); it != copia2.end(); ++it) {
		int aux = *it;
		orden.push(aux);
	}

	while (!orden.empty()) {
		merge.push_back(orden.top());
		orden.pop();
	}

	for (std::list<int>::iterator it = merge.begin(); it != merge.end(); ++it) {
		std::cout << *it << ' ';
	}

	return merge;

}

void change(std::list<int> &l1) {

	int aux = l1.front();
	l1.pop_front();
	int aux2 = l1.back();
	l1.pop_back();
	l1.push_front(aux2);
	l1.push_back(aux);

	for (std::list<int>::iterator it = l1.begin(); it != l1.end(); ++it) {
		std::cout << *it << ' ';
	}
}

int getElementPos(std::list<int> &l1, int pos) {

	std::list<int>::iterator it = l1.begin();
	std::advance(it, pos - 1);
	int result = *it;
	std::cout << result;
	return result;

}

void removeDuplicates (std::list<int> &l1){

	for (std::list<int>::iterator it = l1.begin(); it != l1.end(); ++it) {

		for (std::list<int>::iterator it2 = l1.begin(); it2 != l1.end(); ++it2) {

			if (*it == *it2 && it2 != it) {

				l1.erase(it2++);
				it2--;
			}
		}
	}

	for (std::list<int>::iterator it = l1.begin(); it != l1.end(); ++it) {
		std::cout << *it << ' ';
	}

}

void removeElement(std::list<int> &l1, int elem) {

	for (std::list<int>::iterator it = l1.begin(); it != l1.end(); ++it) {
	
		if (*it == elem) {
			l1.erase(it++);
			it--;
		}
	}

	for (std::list<int>::iterator it = l1.begin(); it != l1.end(); ++it) {
		std::cout << *it << ' ';
	}
}

/*bool palindrome(std::list<int> l1) {

	for (std::list<int>::iterator it = l1.begin(); it != l1.end(); ++it) {

		for (std::list<int>::reverse_iterator it2 = l1.rbegin(); it2 != l1.rend(); ++it2) {

			if (*it != *it2) {
				std::cout << "false";
				return false;
			}
		}
	}

	std::cout << "true";
	return true;
}*/




void main() {

	MyList b;

	b.push_front(3);
	b.push_front(2);
	b.push_front(4);

	MyList a(b);




	/*std::list<int> l1{ 2, 3, 7, 8 };
	std::list<int> l2{ 5, 9, 1, 4 };
	superMerge(l1, l2);
	std::cout << std::endl;
	change(l1);
	std::cout << std::endl;
	getElementPos(l1, 2);
	std::cout << std::endl;
	std::list<int> repes{ 2, 2, 4, 7, 8, 9, 8, 5};
	removeDuplicates(repes);
	std::cout << std::endl;
	std::list<int> repes2{ 2, 2, 4, 7, 8, 9, 8, 5 };
	removeElement(repes2, 8);
	std::list<int>pal{ 1,2,3,4,4,3,2,1 };
	palindrome(pal);*/



}