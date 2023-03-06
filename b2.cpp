#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[10];
    int *ptr = arr;
    int sum = 0;

    cout << "Input the number of elements to store in the array (max 10) : ";
    cin >> n;

    cout << "Input " << n << " number of elements in the array : " << endl;
    for (int i = 0; i < n; i++) {
        cout << "element - " << i+1 << " : ";
        cin >> *(ptr+i);
        sum += *(ptr+i);
    }

    cout << "The sum of array is : " << sum << endl;

    return 0;
}