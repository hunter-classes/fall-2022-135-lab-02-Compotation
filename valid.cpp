#include <iostream>
#include <bits/stdc++.h>

int main() {
	int n;
	std::cout << "Please enter an integer: ";
	std::cin >> n;
	while (n <= 0 || n >= 100) {
		std::cout << "Please re-enter: ";
		std::cin >> n;
	}

	std::cout << std::endl;
	std::cout << "Number squared is " << pow(n, 2) << std::endl;
	return 0;
}
