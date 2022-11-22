//volumetrangle.cpp
#include <iostream>
using namespace std;

int main()
{
    float v;
    float rad;
    float h;
    const float PI = 3.14159F;
    cout << "Введите высоту цилиндра: ";
    cin >> h;
    cout << "Введите радиус цилиндра: ";
    cin >> rad;
    v = PI * (rad * rad) * h;
    cout << "Объём цилиндра равен: "  << v << endl;
    return 0;
}
