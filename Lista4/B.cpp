#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
	vector <int> positions;
	int minimum = 0, maximum = 0, N, aux;
	
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> aux;
		if (!positions.empty()) {
			positions.push_back(aux);
			minimum = std::min(aux, minimum);
			maximum = std::max(aux, maximum);
		} else {
			positions.push_back(aux);
			minimum = std::min(aux, positions.back());
			maximum = std::max(aux, positions.back());
		}
	}
	
	cout << (maximum - minimum) << endl;
	
	return 0;
}
