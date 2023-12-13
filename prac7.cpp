/*Write a program in C++ to use map associative container.
The keys will be the names of states and the values will be the populations of the states
When the program runs, the user is prompted to type the name of a state.
The program then looks in the map, using the state name as an index and returns
the population of the state.*/

#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> myMap;
    int ch, ch2;
    string name;
    int popu;

    do
    {
        cout << "\n<------------------------------------------------------------------------------->" << endl;
        cout << "1: insert into map" << endl;
        cout << "2: check the pouplation of state: " << endl;
        cout << "3: Exit" << endl;
        cout << "Enter your choice: "
             << " ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            do
            {
                cout << "Enter the state name:"
                     << " ";
                cin >> name;
                cout << "Enter the population: "
                     << " ";
                cin >> popu;
                myMap.insert({name, popu});

                cout << "<---------------------------------------------------------------------------->\nDo you want to continue: " << endl
                     << "1: yes\n2: No" << endl;
                cin >> ch2;
            } while (ch2 == 1);
            break;
        case 2:
            cout << "Enter the state name whose population you want to check: "
                 << " ";
            cin >> name;
            int value = myMap.at(name);
            cout << "Population of given state: " << value;
            break;
        }

    } while (true);
    return 0;
}