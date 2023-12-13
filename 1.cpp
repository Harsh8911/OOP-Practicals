// Implement a class Complex which represents the Complex Number data type.
// Implement the following operations:
// 1. Constructor (including a default constructor which creates the complex number 0+0i).
// 2. Overloaded operator+ to add two complex numbers.
// 3. Overloaded operator* to multiply two complex numbers.
// 4. Overloaded << and >> to print and read Complex Numbers

#include <iostream>

using namespace std;

class Complex
{
public:
    int n1;
    int n2;
    Complex()
    {
        cout << 0 << " + " << 0 << " i " << endl;
    }

    Complex(int m, int n)
    {
        n1 = m;
        n2 = n;
    }

    Complex operator+(Complex &a)
    {
        Complex temp;
        temp.n1 = this->n1 + a.n1;
        temp.n2 = this->n2 + a.n2;

        return temp;
    }

    Complex operator*(Complex &b)
    {
        Complex temp;
        temp.n1 = this->n1 * b.n1 - this->n2 * b.n2;
        temp.n2 = this->n1 * b.n2 + this->n2 * b.n1;

        return temp;
    }

    friend ostream &operator<<(ostream &os, Complex &b)
    {
        os << "Complex Number ( " << b.n1 << " , " << b.n2 << " ) ";
        return os;
    }

    friend istream &operator>>(istream &in, Complex &a)
    {
        cout << "Real : ";
        in >> a.n1;
        cout << "Img : ";
        in >> a.n2;

        return in;
    }
    void displayAdd()
    {

        cout << "Addition of Complex Numbers is : " << endl;
        cout << n1 << " + " << n2 << " i ";
    }

    void displayMulti()
    {

        cout << "Multiplication of Complex Numbers is : " << endl;
        cout << n1 << " * " << n2 << " i ";
    }
};

int main()
{

    int m, n;
    cout << "Enter the Real Part : ";
    cin >> m;
    cout << "Enter the Imaginary Part : ";
    cin >> n;

    int a, b;
    cout << "Enter the Real Part : ";
    cin >> a;
    cout << "Enter the Imaginary Part : ";
    cin >> b;

    Complex n1(m, n);
    Complex n2(a, b);

    Complex n3 = n1 + n2;
    n3.displayAdd();
    n3 = n1 * n2;
    n3.displayMulti();

    return 0;
}