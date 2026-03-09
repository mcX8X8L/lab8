#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int number;
    cout << "Введіть ваше число:\n";
    cin >> number;
    for (int a = 0; a < 10; a++) {
    cout << arr[a] * number << "\t"; }
    return 0;
}