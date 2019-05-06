#include <iostream>
#include "Student.h"
#include "Complex.h"
#include "Car.h"

using namespace std;

student::student(string name, string sname, string group): name(name), group(group) {}

void student::input() {
    cout << "Имя" << endl;
    cin >> name;
    cout << "Группа" << endl;
    cin >> group;
}
ostream &operator<<(ostream &out, const student &student) {
    out << "Имя: " << student.name << endl << "Группа: " << student.group << endl;
    return out;
}

////////////////



Complex::Complex(double Re, double Im): Re(Re), Im(Im) {};
Complex::Complex(const Complex &alt): Re(alt.Re), Im(alt.Im) {};
ostream &operator<<(ostream &out, const Complex &rv){
    return out << rv.Re << " + (" << rv.Im <<")i";
};

istream &operator>>(istream &in, Complex &rv){
    cout << "Re" << endl;
    in >> rv.Re;
    cout << "Im" << endl;
    in >> rv.Im;
    return in;
};

////////////////////

void Car::inp() {
    cout << "Брэнд" << endl;
    cin >> brand;
}
void Car::outp() {
    cout << "Брэнд: " << brand << endl;
}

