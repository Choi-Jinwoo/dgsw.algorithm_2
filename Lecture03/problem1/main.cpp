#include <iostream>

using namespace std;

void swapMaxMin(int a, int b, int* pMax, int*pMin);

int main() {
    int a, b;

    cin >> a;
    cin >> b;

    int* pMax = &a;
    int* pMin = &b;
    swapMaxMin(a, b, pMax, pMin);
    cout << pMax - pMin << std::endl;
    return 0;
}

void swapMaxMin(int a, int b, int* pMax, int* pMin) {
    if (a > b) {
        pMax = &a;
        pMin = &b;
    } else {
        pMax = &b;
        pMin = &a;
    }
}
