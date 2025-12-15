#include <iostream>
#include <Windows.h>
using namespace std;


int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int A[12] = { 25, 10, 8, 15, 33, 4, 1, 9, 20, 12, 5, 2 };
    int k;

    cout << "Ââåä³òü ö³ëå ÷èñëî k (1–9): ";
    cin >> k;

    if (k <= 0 || k > 9) {
        cout << "Ïîìèëêà: k ìàº áóòè â³ä 1 äî 9.\n";
        return 0;
    }

  for (int i = 0; i < 12; i++) {
        C[i] = A[i] % k;
        if (C[i] != 0) {
            product *= C[i];
        }
    }

    cout << "\nМасив A:\n";
    for (int i = 0; i < 12; i++) {
        cout << A[i] << " ";
    }
