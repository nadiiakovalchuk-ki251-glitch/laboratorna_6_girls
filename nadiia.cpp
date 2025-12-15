#include <iostream>
#include <Windows.h>
using namespace std;


int main() {
    
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int A[12] = { 25, 10, 8, 15, 33, 4, 1, 9, 20, 12, 5, 2 };
    int k;

    cout << "Введіть ціле число k (1–9): ";
    cin >> k;

    if (k <= 0 || k > 9) {
        cout << "Помилка: k має бути від 1 до 9.\n";
        return 0;
    }
