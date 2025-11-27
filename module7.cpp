#include <iostream>
#include <memory>

void printArray(const int* arr, size_t size) 
{
    setlocale(LC_ALL, "rus");
    using namespace std;
    cout << "Массив:";
    for (size_t i = 0; i < size; ++i)
    {
        cout << arr[i] << ' ';
    }
    cout << std::endl;
}
int main() 
{
    setlocale(LC_ALL, "rus");
    using namespace std;
    auto ptr = make_unique<int[]>(10);
    cout << "Введите 10 чисел:";
    for (int i = 0; i < 10; ++i) 
    {
        cin >> ptr[i];
    }
    printArray(ptr.get(), 10);
    return 0;
}