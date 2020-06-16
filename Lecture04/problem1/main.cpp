#include <iostream>

using namespace std;

void sort(int arr[]) {
    int sorted[3];

    for (int i = 0; i < 3; i += 1) {
        for (int j = 0; j < 3; j += 1) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n1, n2, n3;

    cin >> n1;
    cin >> n2;
    cin >> n3;

    int arr[] = { n1, n2, n3 };

    sort(arr);

    for (int i = 0; i < 3; i += 1) {
        cout << arr[i] << endl;
    }
}


