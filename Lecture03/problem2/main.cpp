#include <iostream>

using namespace std;

int main() {
    int num;

    cin >> num;
    num % 3 == 0 ? cout << "3의 배수" : cout << "3의 배수 아님";
}
