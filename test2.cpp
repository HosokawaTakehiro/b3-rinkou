#include <iostream>

int main() {
	for (int i = 2; i <= 100; ++i) {
		int is0 = 0;
		for (int j = 2; j < i; ++j) {
			if (i % j == 0) {
				++is0;
				break;
			}
		}
		if (is0 == 0)
			std::cout << i << "  ";
	}
	std::cout << std::endl; 
	return 0;
}