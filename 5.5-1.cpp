// 5.5-1.cpp 

#include <iostream>
#include <vector>

template<class T>
T Function(T element) {
	return element * element;
}

template<class T>
std::vector<T> Function(std::vector<T> element) {
	for (T& n : element) {
		n *= n;
	}

	return element;
}

int main() {
	int a = 2;
	std::vector<double> b {1.2, 4.5, 6, 0};

	a = Function(a);
	b = Function(b);

	std::cout << a << std::endl;
	for (double n : b) {
		std::cout << n << " ";
	}
}



