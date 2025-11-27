#include <iostream>
#include <cstring>
#include <algorithm>
int main();
static void reverseString(char* str)
{
    using namespace std;
    int n=strlen(str); 
    for (int i = 0; i < n / 2; i++) {
        swap(str[i], str[n - i - 1]);
    }
}
static void task1() {
    using namespace std;
    setlocale(LC_ALL, "rus");
    cout << "Переворот строки" <<endl;
    char str[100];
    cout << "Введите строку:";
  
    cin.getline(str, 100);

    if (cin.fail()) {
        cerr << "Ошибка ввода" <<endl;
        return;
    }
    reverseString(str);
    cout << "Перевернутая строка: " << str <<endl;
}
int main() 
{
    task1();
    return 0;
}
