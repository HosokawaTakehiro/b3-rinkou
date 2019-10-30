#include<iostream>
#include<vector>

int main() {
	std::vector<int> babies;
	for (int i = 1; i <= 16; ++i)
		babies.push_back(i);
	int bab=0;
	for (int i = 1; i < 16; ++i) {
		bab += 9;
		bab = bab % babies.size();
		std::cout << babies[bab] <<" was deleted"<< std::endl;
		babies.erase(babies.begin() + bab);
		for (int j = 0; j < babies.size(); ++j)
			std::cout << babies[j] << " ";
		std::cout << std::endl;
		std::cout << "****************" << std::endl;
	}
	return 0;
}