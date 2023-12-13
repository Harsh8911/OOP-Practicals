/*Implement a class Complex which represents the Complex Number data type. Implement 
the following
1. Constructor (including a default constructor which creates the complex number 0+0i).
2. Overloaded operator+ to add two complex numbers.
3. Overloaded operator* to multiply two complex numbers.
4. Overloaded << and >> to 
print and read Complex Numbers*/

#include<iostream>
using namespace std;
class Complex{
  private:
    int x,y;
  public:
    Complex()
    {
      x=0;
      y=0;
    }
    Complex(int a , int b)
    {
      x=a;
      y=b;
    }
    void display()
    {
      cout << x << "+" << y << "i" <<endl;
    }
    Complex operator+ (Complex &p)
    {
      Complex temp;
      temp.x=this->x + p.x;
      temp.y = this->y + p.y;
      return temp;
    }
    Complex operator* (Complex &p)
    {
      Complex temp;
      temp.x = this->x * p.x - this->y * p.y;
      temp.y = this->x * p.y + this->y * p.x;
      return temp;
    }
    friend ostream& operator<<(ostream& os, const Complex& c) {
        os << c.x << "+" << c.y << "i";
        return os;
    }

    friend istream& operator>>(istream& is, Complex& c) {
        cout << "Enter real part: ";
        is >> c.x;
        cout << "Enter imaginary part: ";
        is >> c.y;
        return is;
    }
};
int main()
{
  Complex c1(3,4);
  Complex c2(4,5);
  Complex c3;
  
  c1.display();
  c2.display();
  c3.display();
  
  c3=c1+c2;
  cout << "Sum is :" ;
  c3.display();
  
  c3=c1*c2;
  cout << "Product is :";
  c3.display();
  return 0;
}
