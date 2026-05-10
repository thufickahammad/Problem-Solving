#include <iostream>
using namespace std;

void change(int *p) {
    *p = 50;
}

int main() {
    int x = 10;
    change(&x);

    cout << x << endl;
    return 0;
}
