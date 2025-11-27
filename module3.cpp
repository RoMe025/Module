#include <iostream>
#include <iomanip>

using namespace std;
int main();
void multiplicationTableFor(int num) 
{
    cout << num  << endl;
    
    for (int i = 1; i <= 10; i++) 
    {
        cout << num  << setw(2) << i << setw(3) << num * i << endl;
    }
}
static void multiplicationTableWhile(int num)
{
    cout << num << endl;
    int i = 1;
    while (i <= 10) 
    {
        cout << num  << setw(2) << i << setw(3) << num * i << endl;
        i++; 
    }
}
void multiplicationTableDoWhile(int num) 
{
    cout  << num <<  endl;
    int i = 1; 
    do 
    {
        cout << num  << setw(2) << i  << setw(3) << num * i << endl;
        i++; 
    } while (i <= 10); 
}
int main() {
    int number = 5;
    multiplicationTableFor(number);
    cout << endl;
    multiplicationTableWhile(number);
    cout << endl;
    multiplicationTableDoWhile(number);

    return 0;
}