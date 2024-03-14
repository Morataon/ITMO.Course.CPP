#include <iostream>
#include <vector>

using namespace std;

template <typename Container>
void Print(const Container& container, const std::string& str) {
	for (const auto& element : container) {
		std::cout << element;
		if (&element != &container.back()) { 
			std::cout << str;
		}
	}
	std::cout << "\n";
}

int main() {
	std::vector<int> data = { 1, 2, 3 };
	Print(data, ", ");
	return 0;
}