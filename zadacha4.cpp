#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <limits>
int main();
static void vector_and_sort_example()
{
    setlocale(LC_ALL, "rus");
    using namespace std;
    srand(static_cast<unsigned int>(time(0)));
    vector<int> numbers(10);
    for (int i = 0; i < 10; ++i) 
    {
        numbers[i] = (rand() % 100) + 1;
    }
    cout << "Работа с вектором" <<endl;
    cout << "Вектор до сортировки:";
    for (int num : numbers)
    {
        cout << num << " ";
    }
    cout <<endl;
    sort(numbers.begin(), numbers.end());
    cout << "Вектор после сортировки:";
    for (int num : numbers) 
    {
        cout << num << " ";
    }
    cout <<endl;
}
