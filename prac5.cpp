
#include <iostream>
#include <vector>
using namespace std;

template <class T>
class Sort
{
public:
    int size;
    vector<T> v;
    T val;

    Sort(int size)
    {
        this->size = size;
        cout << "Enter the elements of the vector: " << endl;

        for (int i = 0; i < size; i++)
        {
            cin >> val;
            v.push_back(val);
        }
    }

    void display()
    {
        cout << "Elements: ";
        for (int i = 0; i < size; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }

    void selectionSort()
    {
        for (int i = 0; i < size; i++)
        {
            int min = i;
            for (int j = i + 1; j < size; j++)
            {
                if (v[min] > v[j])
                {
                    min = j;
                }
            }
            T temp = v[i];
            v[i] = v[min];
            v[min] = temp;
        }
    }
};

int main()
{
    int n, ch;
    char ans;

    do
    {
        cout << "1: Integer array" << endl;
        cout << "2: Float array" << endl;
        cout << "3: Char array" << endl;
        cout << "Enter your choice: ";
        cin >> ch;

        cout << "Enter the size of vector: ";
        cin >> n;

        switch (ch)
        {
        case 1:
        {
            Sort<int> s(n);
            s.selectionSort();
            cout << "<----------------------------After Sorting------------------------------------------>" << endl;
            s.display();
            break;
        }
        case 2:
        {
            Sort<float> s(n);
            s.selectionSort();
            cout << "<----------------------------After Sorting------------------------------------------>" << endl;
            s.display();
            break;
        }
        case 3:
        {
            Sort<char> s(n);
            s.selectionSort();
            cout << "<----------------------------After Sorting------------------------------------------>" << endl;
            s.display();
            break;
        }
        default:
            cout << "Invalid choice" << endl;
            break;
        }

        cout << "Do you want to continue (y/n): ";
        cin >> ans;

    } while (ans == 'y' || ans == 'Y');

    return 0;
}
