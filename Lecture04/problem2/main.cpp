#include <iostream>

using namespace std;

float getAvg(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3;
}


int main() {
    float n1 ,n2, n3;

    cin >> n1;
    cin >> n2;
    cin >> n3;

    float avg = getAvg(n1, n2, n3);
    cout << avg;
}
