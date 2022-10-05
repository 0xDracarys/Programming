#include<iostream>
using namespace std;

class book {
    public: 
    string title;
    string  author;
    int price;
    
};


int main()
{
    book myBook;
    cout << "Enter the book name : ";
    cin >> myBook.title;
    myBook.title;
    cout << "Enter the author name : ";
    cin >> myBook.author;
    myBook.author;
    cout << "Enter the price : ";
    cin >> myBook.price;
    myBook.price;

    cout << myBook.title << endl;
    cout << myBook.author << endl;
    cout << myBook.price << endl;



 return 0;
}