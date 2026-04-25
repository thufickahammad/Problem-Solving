#include <iostream>
using namespace std;

int countEven(int *arr, int n) {

    int count = 0;
    for (int i = 0; i < n; i++) {

        if (*(arr + i) % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int N;

    if (cin >> N) {
        int arr[N];

        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        cout << countEven(arr, N) << endl;
    }
    return 0;
}
