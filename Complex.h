using namespace std;

class Complex {
private:
    double Re;
    double Im;
public:
    Complex(double Re = 0, double Im = 0);
    friend ostream &operator<<(ostream &out, Complex const &rv);
    friend istream &operator>>(istream &in, Complex &rv);
    Complex(const Complex &alt);
    ~Complex() {};
};