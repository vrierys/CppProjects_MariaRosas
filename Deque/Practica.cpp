#include <deque>
#include <iostream>
#include <vector>


void main() {

	//Ejercicio 1

	std::deque<float> prices(10, 10.50);

	prices.pop_back();
	prices.push_back(32.43);
	prices.pop_front();

	std::deque<float> nuevadeque(prices);
	nuevadeque.push_front(20.31);
	nuevadeque.push_front(5.64);
	nuevadeque.insert(nuevadeque.begin() + 1, 10);

	
	for (std::deque<float>::reverse_iterator rit = prices.rbegin(); rit != prices.rend(); ++rit) {
		std::cout << *rit << ' ';
	};

	std::cout << '\n';
	
	for (int i = 0; i < nuevadeque.size(); i++) {
		std::cout << nuevadeque[i] << ' ';
	}

	std::cout << '\n';

	// Ejercicio 2

	std::vector<float>prices1(10, 10.50);
	prices1[9] = (32.43);
	prices1.erase(prices1.begin());

	std::vector<float>nuevovector(prices1);
	nuevovector[0] = 5.64;
	nuevovector[1] = 20.31;
	nuevovector.insert(nuevovector.begin() + 1, 10);

	for (std::vector<float>::reverse_iterator rit = prices1.rbegin(); rit != prices1.rend(); ++rit) {
		std::cout << *rit << ' ';

	};

	std::cout << '\n';

	for (int i = 0; i < nuevovector.size() - 1; i++) {
		std::cout << nuevovector[i] << ' ';
	}

	std::cout << '\n';

}