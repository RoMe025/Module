#include <iostream>
#include <string>
#include <limits>

using namespace std;
namespace Shapes

{
    enum Shape 
    {
        CIRCLE,
        SQUARE,
        TRIANGLE,
        UNKNOWN
    };

    void printShape(Shape currentShape)
    {
        setlocale(LC_ALL, "rus");
        switch (currentShape) {
        case CIRCLE:
            cout << "Выбрана фигура: CIRCLE" <<endl;
            break;
        case SQUARE:
            cout << "Выбрана фигура: SQUARE" <<endl;
            break;
        case TRIANGLE:
            cout << "Выбрана фигура: TRIANGLE" <<endl;
            break;
        case UNKNOWN:
        default:
            cout << "Неизвестная фигура " <<endl;
            break;
        }
    }

    Shape stringToShape(const string& shapeName)
    {
       
        if (shapeName == "circle") {
            return CIRCLE;
        }
        else if (shapeName == "square") {
            return SQUARE;
        }
        else if (shapeName == "triangle") {
            return TRIANGLE;
        }
        else {
            return UNKNOWN;
        }
    } 

} 


int main() 
{
    setlocale(LC_ALL, "rus");
    cout << "Демонстрация1:Прямая инициализация-" <<endl;
    Shapes::Shape myShape = Shapes::SQUARE;
    Shapes::printShape(myShape);
    cout << endl;

    cout << "Демонстрация2: Ввод пользователя-" <<endl;
    string userInput;
    cout << "Введите название фигуры (circle, square или triangle):";
    cin >> userInput;
    Shapes::Shape userShape = Shapes::stringToShape(userInput);
    Shapes::printShape(userShape);

    return 0;
}