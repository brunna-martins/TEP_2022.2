#include <iostream>
using namespace std;

int main(void)
{
	int H, W;
	string str;
	
	cin >> H >> W;
	
	cout << string(W+2, '#') << endl;
	for (int i = 0; i<H; i++) {
		cin >> str;
		cout << "#" << str << "#" << endl;
	}
	cout << string(W+2, '#') << endl;
	
	return 0;
}
