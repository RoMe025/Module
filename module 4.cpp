#include <iostream>
int main()
{
    setlocale(LC_ALL, "rus");
    using namespace std;
    int number;
    cout << "Введите целое число: ";
    cin >> number;
    int result = (number % 2 == 0 && number > 0) ? (number << 2) : (number >> 2);
    cout <<  number << std::endl;
    cout  << result << std::endl;
    return 0;
}