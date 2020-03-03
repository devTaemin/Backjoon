#include <iostream>

using namespace std;

int main()
{
    int n, count = 0;
    int first, second, third;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i >= 100) {
            first = i / 100;
            second = (i - (first * 100)) / 10;
            third = i - ((first * 100) + (second * 10));
            if ((first - second) == (second - third)) { count++; }
        }
        else { count++; }
    }
    cout << count << endl;
    return 0;
}