#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool uniqueCharacters(string str)
{
    sort(str.begin(), str.end());

    for (int i = 0; i < str.length()-1; i++) {
        if (str[i] == str[i+1]) {
            return false;
        }
    }
    return true;
}

using namespace std;
int main(void) 
{
    string myString;
    
    cin >> myString;

    if (uniqueCharacters(myString)) {
        cout << "yes";
    } else {
        cout << "no";
    }

    return 0;
}

