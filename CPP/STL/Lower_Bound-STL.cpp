// https://www.hackerrank.com/challenges/lower-bound-stl

#include <iostream>
#include <algorithm>
#include <vector>

int main(void) {
	unsigned N = 0;
	unsigned Q = 0;
	unsigned Y = 0;

	std::vector<int> vec;
	std::vector<int>::iterator it;

	std::cin >> N;

	unsigned i = 0;
	while (N--) {
		std::cin >> i;
		vec.push_back(i);
	}

	std::cin >> Q;
	while (Q--) {
		std::cin >> Y;

		it = std::lower_bound(vec.begin(), vec.end(), Y);

		*it == Y ? std::cout << "Yes " : std::cout << "No ";

		std::cout << std::distance(vec.begin(), it) + 1 << '\n';
	}

	return 0;
}
