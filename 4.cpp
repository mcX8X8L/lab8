#include <iostream>
using namespace std;
int main()
{
    int n, fac = 1, arr[n];
    cout << "Введіть ваше число:\n";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        fac *= i;
    }
    cout << "Факторіал вашого числа: \n" << fac << endl;
    return 0;
}