#include <iostream>
#include <Windows.h>
using namespace std;


int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int A[12] = { 25, 10, 8, 15, 33, 4, 1, 9, 20, 12, 5, 2 };
    int k;

    cout << "¬вед≥ть ц≥ле число k (1Ц9): ";
    cin >> k;

    if (k <= 0 || k > 9) {
        cout << "ѕомилка: k маЇ бути в≥д 1 до 9.\n";
        return 0;
    }

