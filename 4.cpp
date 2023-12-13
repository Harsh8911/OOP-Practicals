// Write a C++ program that creates an output file, writes information to it, closes the file, open it again as an input file and read the information from the file.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out("ganesh.txt");
    string name;
    cout << "Enter Your Name : (enter stop to stop!) : ";
    for (int i = 0; i < 10; i++)
    {
        cout << "\n";
        if (name == "stop")
        {
            break;
        }
        out << name << endl;
        getline(cin, name);
    }

    out.close();

    ifstream in("ganesh.txt");
    string str;
    while (getline(in, str) && str != name)
    {
        cout << str << endl;
    }

    in.close();

    return 0;
}