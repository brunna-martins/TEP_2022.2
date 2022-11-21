#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main (void) 
{
	int N, Q;
	string firstLine[20];
	string secondLine[20];
	string myString;
	
	cin >> N;
	cin.ignore();
	for (int i = 0; i < N; i++) {
		getline(cin, firstLine[i]);
		getline(cin, secondLine[i]);
	}
	cin >> Q;
	cin.ignore();
	for (int j = 0; j < Q; j++) {
		getline(cin, myString);
		for (int i = 0; i < N; i++) {
			if (myString.compare(firstLine[i])==0) {
				cout << secondLine[i] << endl;
			}
		}
	}
	
	return 0;
}
