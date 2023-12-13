/*Write C++ program using STL for sorting and searching user defined
 records such as Item records (Item code, name, cost, quantity etc)
  using vector container.*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <class t>
void input(vector<t> &v, int size)
{

    for (int i = 0; i < size; i++)
    {
        cin >> v[i];
    }
}
template <class t>
void searchV(vector<t> &v, int size)
{
    t val;
    cout << "Enter the value to search: "
         << " ";
    cin >> val;

    auto it = find(v.begin(), v.end(), val);
    if (it != v.end())
    {
        cout << "Found " << val << " at index: " << distance(v.begin(), it) << std::endl;
    }
    else
    {
        cout << "6 not found in the vector." << endl;
    }
}
template <class t>
void sortV(vector<t> &v, int size)
{
    sort(v.begin(), v.end());

    for (t num : v)
    {
        cout << num << " ";
    }
    cout << endl;
}

int main()
{

    int ch, size;
    cout << "Enter the no of item: "
         << " ";
    cin >> size;
    vector<int> vQ(size);
    vector<int> vI(size);
    vector<string> vN(size);
    vector<float> vC(size);
    do
    {
        cout << "<----------------------------------------------------------------------------->" << endl;
        cout << "1: Input data" << endl;
        cout << "2: search " << endl;
        cout << "3: sort" << endl;
        cout << "4: Exit" << endl;
        cout << "Enter your choice: " << endl;
        cin >> ch;

        switch (ch)
        {
        case 1:
            int ch1;
            for (int i = 0; i < 4; i++)
            {
                cout << "1: For item code: " << endl;
                cout << "2: For name: " << endl;
                cout << "3: cost: " << endl;
                cout << "4: quantity" << endl;
                cout << "Enter your choice :"
                     << " ";
                cin >> ch1;
                switch (ch1)
                {
                case 1:
                    cout << "Enter tge item code: " << endl;
                    input(vI, size);
                    break;
                case 2:
                    cout << "Enter ht e item name: " << endl;
                    input(vN, size);
                    break;
                case 3:
                    cout << "Enter ht e item cost: " << endl;
                    input(vC, size);
                    break;
                case 4:
                    cout << "Enter ht e item quantity: " << endl;
                    input(vQ, size);
                    break;
                }
            }
            break;

        case 2:
            int ch2;
            cout << "1: For item code: " << endl;
            cout << "2: For name: " << endl;
            cout << "3: cost: " << endl;
            cout << "4: quantity" << endl;
            cout << "Enter your choice :"
                 << " ";
            cin >> ch2;
            switch (ch2)
            {
            case 1:
                searchV(vI, size);
                break;
            case 2:
                searchV(vN, size);
                break;
            case 3:
                searchV(vC, size);
                break;
            case 4:
                searchV(vQ, size);
                break;
            }
            break;
        case 3:
            int ch3;
            cout << "1: For item code: " << endl;
            cout << "2: For name: " << endl;
            cout << "3: cost: " << endl;
            cout << "4: quantity" << endl;
            cout << "Enter your choice :"
                 << " ";
            cin >> ch3;
            switch (ch3)
            {
            case 1:
                sortV(vI, size);
                break;
            case 2:
                sortV(vN, size);
                break;
            case 3:
                sortV(vC, size);
                break;
            case 4:
                sortV(vQ, size);
                break;
            }
            break;
        case 4:
            cout << "End of program" << endl;
            exit(0);
            break;

        default:
            cout << "Wrong choice: ";
            break;
        }
    } while (true);

    return 0;
}
