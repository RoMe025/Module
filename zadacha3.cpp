#include <iostream>
#include <memory>
#include <algorithm>
#include <limits>
int main();
static void smart_pointer_min_max_example() {
    setlocale(LC_ALL, "rus");
    using namespace std;
    const int size = 10;
    unique_ptr<int[]> data_array(new int[size]);

    cout << "Работа с указателем и массивом" <<endl;
    cout << "введите 10 целых чисел:" <<endl;
    for (int i = 0; i < size; ++i) 
    {
        cout<< "Элемент" << i + 1 << ": ";
    
        if (!(cin >> data_array[i])) {
            cerr << "Ошибка ввода,введите целое число." <<endl;
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max());
            i--;
        }
    }
    cout << "Введенные элементы массива: ";
    for (int i = 0; i < size; ++i) {
        cout << data_array[i] << " ";
    }
    cout <<endl;
    int* begin_ptr = data_array.get();
    int* end_ptr = data_array.get() + size;

    auto min_it = min_element(begin_ptr, end_ptr);
    auto max_it = max_element(begin_ptr, end_ptr);

    if (min_it != end_ptr && max_it != end_ptr)
    {
        cout << "Минимальное значение в массиве: " << *min_it <<endl;
        cout << "Максимальное значение в массиве: " << *max_it <<endl;
    }
    else {
        cout << "Не удалось найти мин/мах значение" <<endl;
    }
}
