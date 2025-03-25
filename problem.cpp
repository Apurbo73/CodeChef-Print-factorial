#include <iostream>

using namespace std;

int main()
{
    int a, i = 1, b = 1;
    cin >> a;
    do
    {
        b = b * i;
        i++;
    } while (i <= a);
    cout << b << endl;
}