#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main (void) {
	vector <int> my_nums;
	int t, aux;
	
	cin >> t;
	for (int i = 0; i<t; i++) {
		cin >> aux;
		my_nums.push_back(aux);
	}
	sort(my_nums.begin(), my_nums.end());
	for (int i = 0; i<t; i++) {
		cout << my_nums.at(i) << endl;
	}
	
	return 0;
}
