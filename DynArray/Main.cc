#include "DynArray.hh"
#include <iostream>

void main() {

	int SIZE_ARRAY = 5;
	int VALUE_ARRAY = 3;
	int SIZE_ARRAY2 = 4;
	int VALUE_ARRAY2 = 2;

	DynArray arr(SIZE_ARRAY, VALUE_ARRAY);
	DynArray arr2(SIZE_ARRAY2, VALUE_ARRAY2);


	int x = arr[3];
	int y = arr2[3];

	bool dechu = arr == arr2;

	std::cout << x << " " << y << " " << dechu << std::endl;

}