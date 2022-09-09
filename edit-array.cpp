#include <iostream>

int main() {
	int myData[10];
	for(int i = 0; i < 10; i++) {
		myData[i] = 1;
	}	

	int i;
	int v;
	do {
		std::cout << std::endl;
		for(int i = 0; i < 10; i++) {
			std::cout << myData[i] << " ";
		}
		std::cout << std::endl;

		std::cout << std::endl << "Input index: ";
		std::cin >> i;

		std::cout << "Input value: ";
		std::cin >> v;

		if (i < 10 && i > -1) {
			myData[i] = v;
		} else {
			std::cout << std::endl << "Index out of range. Exit." << std::endl;
		}
	} while (i < 10 && i > -1);
	return 0;
}
