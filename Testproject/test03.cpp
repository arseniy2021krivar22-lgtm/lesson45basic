#include "util.h"
int main() {
	//int n{0};
	//srand(time(NULL));
	const int SIZE = 10;
	//int array[SIZE]{ };
	//int array[SIZE]{ 1,2,3,4,5 };
	//int array[SIZE]{ 1,2,3,4,5,6  };
	int array[SIZE]{ 1,2,3,4,5,6 };

	print("ARRAY: ");
	print(convert(array, SIZE) + "\n");

	return 0;
}