// Imagine a publishing company which does marketing for book and
// audio cassette versions.Create a class publication that stores the title (a string) and price (type float)
// of publications. From this class derive two classes: book which addsa page count (type int) and tape
// which adds a playing time in minutes (type float). Write a program that instantiates the book and tape
// class, allows user to enter data and displays the data members. If an exception is caught, replace all
// the data member values with zero values.

#include <iostream>
using namespace std;

class publication
{
public:
    string title;
    float price;
    void getdata()
    {
        cout << "Enter the title : ";
        cin >> title;

        cout << "Enter the price : ";
        cin >> price;
    }

    void display()
    {
        cout << "The title is : " << title << endl;
        cout << "The price is : " << price << endl;
    }
};

class book : public publication
{
public:
    int page;
    void getbook()
    {
        try
        {
            getdata();
            cout << "Enter the page : ";
            cin >> page;
        }
        catch (...)
        {
            cout << "Cannot get the data";
        }
    }

    void displayBook()
    {
        display();
        cout << "The page is : " << page << endl;
    }
};

class tape : public publication
{
public:
    float minutes;
    void gettape()
    {
        getdata();
        cout << "Enter the play time in minutes : ";
        cin >> minutes;
    }

    void displayTape()
    {
        display();
        cout << "The play time of the tape is : " << minutes << endl;
    }
};

int main()
{
    book b;
    b.getbook();
    b.displayBook();

    tape t;
    t.gettape();
    t.displayTape();

    return 0;
}