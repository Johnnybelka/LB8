#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include "Student.h"
#include "Complex.h"
#include "Car.h"

using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");

    std::vector <student> v1;
    student s;
    int j;
    cout << "Количество" << endl;
    cin >> j;
    for(int i = 0; i < j; i++) {
        s.input();
        v1.push_back(s);// добавление полседнего элемента
    }
    for(int i = 0; i < j; i++)
        cout << v1[i] << endl;
//////////////////////////
    list <Complex> list1;
    Complex c1;
    int k;
    cout << "Количество" << endl;
    cin >> k;
    for(int i = 0; i < k; i++) {
        cin >> c1;
        list1.push_back(c1);// добавление полседнего элемента
    }
    for (auto i = list1.begin(); i != list1.end(); i++){
        cout << *i << endl;
    }
////////////////////////////
    queue <Car> q1;
    Car costumer;
    cout << "Количество" << endl;
    cin >> k;
    for(int i = 0; i < k; i++) {
        costumer.inp();
        q1.push(costumer);
    }
    while (!q1.empty()){//пока очередь непустая
        q1.front().outp();//вывести 1 элемент вектора
        cout << " Отчистить " << endl;
        q1.pop();//удалить 1 эл
    }
    return 0;
}
