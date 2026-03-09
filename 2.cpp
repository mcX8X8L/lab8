#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    int sum = 0;
    for (int a = 0; a < 100; a++) {
        arr[a] = a + 1;
    }
    for (int i = 0; i < 100; i++) {
        if (arr[i] % 2 == 0) {
            sum = sum += arr[i];
        }
    }
    cout << sum << endl;
    return 0;
}