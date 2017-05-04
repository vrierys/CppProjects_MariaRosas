#include <stack>
#include <iostream>
#include <queue>

//1 ) Implementar las siguientes funciones

std::stack<int> superMerge(std::stack<int> s1, std::stack<int> s2) {

	std::stack<int> copia1(s1);
	std::stack<int> copia2(s2);
	std::priority_queue<int> orden;
	std::stack<int> aux;
	std::stack<int> merge;


	while (!copia1.empty()) {
		orden.push(copia1.top());
		copia1.pop();
	}

	while (!copia2.empty()) {
		orden.push(copia2.top());
		copia2.pop();
	}

	while (!orden.empty()) {
		aux.push(orden.top());
		orden.pop();
	}

	while (!aux.empty()) {
		merge.push(aux.top());
		aux.pop();
	}

	std::stack<int> orden2(merge);

	while (!orden2.empty()) {

		std::cout << orden2.top() << std::endl;
		orden2.pop();
	}

	return merge;
}

std::stack<int> putHat(std::stack<int> q1, std::stack<int> q2) {

	std::stack<int> copia1(q2);
	std::stack<int> copia2(q1);
	std::stack<int> primera;
	std::stack<int> segunda;
	std::stack<int> resultado;

	while (!copia1.empty()) {

		primera.push(copia1.top());
		copia1.pop();
	}

	while (!copia2.empty()) {

		segunda.push(copia2.top());
		copia2.pop();
	}

	while (!primera.empty()) {

		resultado.push(primera.top());
		primera.pop();
	}

	while (!segunda.empty()) {

		resultado.push(segunda.top());
		segunda.pop();
	}

	std::stack<int> orden2(resultado);

	while (!orden2.empty()) {

		std::cout << orden2.top() << std::endl;
		orden2.pop();
	}

	return resultado;
}

std::queue<int> transformToQ(std::stack<int> q1) {

	std::queue<int> resultado;
	std::stack<int> copia1(q1);

	while (!copia1.empty()) {

		resultado.push(copia1.top());
		copia1.pop();
	}

	return resultado;
}

bool isHat(std::stack<int> q1, std::stack<int> q2) {

	std::stack<int> copia1(q1);
	std::stack<int> copia2(q2);
	int counter = 0;

	while (!copia1.empty()) {

		if (copia1.top() == copia2.top()) {
			counter++;
		}

		copia1.pop();
		copia2.pop();
	}

	if (counter == copia1.size()) {
		std::cout << "true" << std::endl;
		return true;
	}
	else {
		std::cout << "false" << std::endl;
		return false;
	}
}

/*bool balancedP(std::queue<char> q1) {

std::queue<char> copia1(q1);
int abierto = 0;
int cerrado = 0;

while (!copia1.empty()) {

int p = copia1.front();

if (p == '(') {
abierto++;
}

else if (p == ')') {
cerrado++;
}

copia1.pop();

}

if (abierto == cerrado) {
std::cout << "true" << std::endl;
return true;
}
else {
std::cout << "false" << std::endl;
return false;
}
}*/

void change(std::stack<int> &q1) {

	std::stack<int> copia1(q1);
	std::stack<int> copia2(q1);
	int primero = copia1.top();
	int ultimo;

	while (!q1.empty()) {
		if (q1.size() == 1) {
			ultimo = q1.top();
		}
		q1.pop();
	}

	copia2.pop();
	copia2.push(primero);


	while (!copia2.empty()) {

		if (copia2.size() == 1) {

			q1.push(ultimo);
		}
		else {
			q1.push(copia2.top());
		}

		copia2.pop();
	}
}


void main() {

	std::stack<int> s1;
	s1.push(3);
	s1.push(1);
	s1.push(4);
	std::stack<int> s2;
	s2.push(9);
	s2.push(7);
	s2.push(10);
	std::stack<int> q1;
	q1.push(1);
	q1.push(2);
	q1.push(3);
	std::stack<int> q2;

	q2.push(4);
	q2.push(5); q2.push(1);
	q2.push(2);
	q2.push(3);
	std::queue<char> x;
	x.push(')');
	x.push(')');
	x.push('(');
	x.push(')');
	x.push('(');
	x.push('(');



	auto sm = superMerge(s1, s2);
	auto PH = putHat(s1, s2);
	auto TTQ = transformToQ(s1);
	auto ih = isHat(q1, q2);
	change(q1);


}