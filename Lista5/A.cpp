#include <iostream>

using namespace std;

int main (void)
{
    int X, A, B, bestby_date = 0, time;

    cin >> X >> A >> B;

    time = bestby_date - A + B;

    if (time <= bestby_date) 
    {
        cout << "delicious" << endl;
    }
    else if (time < X+1)
    {
        cout << "safe" << endl;
    }
    else 
    {
        cout << "dangerous" << endl;
    }

    return 0;
}