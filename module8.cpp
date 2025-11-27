#include <iostream>
#include <cstring> 
#include <string>

class Book 
{
private:
    std::string title;
    std::string author;
    int year;
    char* isbn;
public:
    Book(const std::string& t, const std::string& a, int y, const char* is)
        : title(t), author(a), year(y)
    {
        setlocale(LC_ALL, "rus");
        this->isbn = new char[std::strlen(is) + 1];
        std::strcpy(this->isbn, is);

        std::cout << title;
    }

    Book(const Book& other)
        : title(other.title), author(other.author), year(other.year) {
        this->isbn = new char[std::strlen(other.isbn) + 1];
        std::strcpy(this->isbn, other.isbn);

        std::cout << title;
    }
    ~Book()
    {
        std::cout << "Деструктор вызван для книги" << title;
        delete[] this->isbn;
        this->isbn = nullptr;
    }
    std::string getTitle() const { return title; }
    std::string getAuthor() const { return author; }
    int getYear() const { return year; }
    const char* getIsbn() const { return isbn; }
    void printInfo() const {

        std::cout << "Информация о книге";
        std::cout << "Название: " << title;
        std::cout << "Автор: " << author;
        std::cout << "Год издания: " << year;
        std::cout << "ISBN: " << isbn;
    }
};
void displayBookByValue(Book b)
{
    std::cout << "(передача по значению)";
    b.printInfo();
    std::cout << "Выход из функции";
}
int main() 
{
    std::cout << "(Book 1)";
    Book book1("1984", "Джордж Оруэлл", 1949, "978-0451524935");
    book1.printInfo();
    std::cout << "Использование геттеров";
    std::cout << "Название: " << book1.getTitle();
    std::cout << "Автор: " << book1.getAuthor();
    std::cout << "ISBN: " << book1.getIsbn(); 
    std::cout << "Создание второй книги (Book 2)";
    Book book2 = book1;
    book2.printInfo();
    std::cout << "Вызов функции displayBookByValue(book1)";
    displayBookByValue(book1);
    std::cout << "Возврат в main()";
    std::cout << "Завершение main()";
    return 0;
}
