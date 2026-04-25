
#include <iostream>
using namespace std;


int sumArray(int *arr,int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += *(arr + i);
    }
    return sum;
}

int main() {
    int n;
    cin >> n;

    int arr[n];


    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    int result = sumArray(arr,n);


    cout << result;

    return 0;
}
