//  Personnel information system using constructor, destructor, static member functions, friend class, this pointer, inline code and dynamic
// Construct the database with suitable member functions for initializing and destroying the data
// viz constructor, default constructor, copy, destructor, static member functions, friend class, this
// pointer, inline code and dynamic memory allocation operators-new and delete as well as
// exception handlin

#include <iostream>
using namespace std;

class information
{
public:
    char *name;
    int age;
    char *dob;
    int height;
    int weight;
    char *hobby;
    int mobile;
    static int id;

    information()
    {
        hobby = new char[10];
        dob = new char[10];
        name = new char[10];
    }

    ~information()
    {
        cout << "Memory Disallocated";
    }

    void getdata()
    {
        cout << "Enter Your Name : ";
        cin >> name;

        cout << "Enter Your Age : ";
        cin >> age;

        cout << "Enter Your date of birth : ";
        cin >> dob;

        cout << "Enter Your Height : ";
        cin >> height;

        cout << "Enter Your Weight : ";
        cin >> weight;

        cout << "Enter Your Hobby : ";
        cin >> hobby;

        cout << "Enter Your Mobile Number : ";
        cin >> mobile;
    }
};

class display : public information
{
public:
    information i;
    display()
    {
        cout << "Id is : " << id << endl;
        cout << "Name is  : " << name << endl;
        cout << "Age is : " << age << endl;
        cout << "Date of Birth : " << dob << endl;
        cout << "Height : " << height << endl;
        cout << "Weight : " << weight << endl;
        cout << "Hobby : " << hobby << endl;
        cout << "Mobile : " << mobile << endl;
    }
};

int information::id = 1;

int main()
{

    information i;
    i.getdata();
    display d;
    return 0;
}