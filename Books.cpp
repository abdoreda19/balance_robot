#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <functional>

class Book
{
public:
    Book(std::string book_name) : name(book_name)
    {}
    void buy()
    {
        cout << "buy book: " << name << std::endl;
    }
    private:
    std::string name;
};

class Library
{
public:
    Library ()
    {
    
    }
  
    void addBook(Book b)
    {
     Books.push_back (b);
    }
    void removeBook()
    {
    cout << "Removed";
    }
    void Apply()
    {
        for(auto book : Books)
        {
            book.buy();
        }
    }
    private:
    vector <Book> Books;
};

int main ()
{
Book B("Design Patterns");
Book B2("Story");

Library lib ;
lib.addBook(B);
lib.addBook(B2);

lib.Apply();

}