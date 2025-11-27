#include <iostream>
int main();
static void task2() {
    setlocale(LC_ALL, "rus");
    using namespace std;
    cout << "Динамический массив" <<endl;
    const int ROWS = 3;
    const int COLS = 3;
    int** arr = new int* [ROWS];
    for (int i = 0; i < ROWS; ++i)
    {
        arr[i] = new int[COLS];
    }
    cout << "Массив (i * j):" <<endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            arr[i][j] = i * j;
        }
    }
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << arr[i][j] << " ";
        }
        cout <<endl;
    }
    for (int i = 0; i < ROWS; ++i) {
        delete[] arr[i];
    }
    delete[] arr;
    arr = nullptr; 
}
