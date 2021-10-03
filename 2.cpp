#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Введите день и номер месяца через Enter" << endl;
    int a,b;
    cin >> a;
    cin >> b;
    if (b < 1 || b>12 || a < 1 || a>31 || (b == 2 && a > 28) || ((b == 4 || b == 6 || b == 9 || b == 11) && a > 30)){
        cout << "Ошибка";
    }
    else{
        int x1=31, x2=28, x3=31, x4=30,x5=31, x6 = 30, x7 = 31, x8 = 31, x9= 30, x10=31, x11=30, x12=31;
        int i=0;
        switch (b) {
            case 1: i=x1+x2+x3+x4+x5+x6+x7+x8+x9+x10+x11+x12;break;
            case 2: i=x1+x2+x3+x4+x5+x6+x7+x8+x9+x10+x11;break;
            case 3: i=x1+x2+x3+x4+x5+x6+x7+x8+x9+x10;break;
            case 4: i=x1+x2+x3+x4+x5+x6+x7+x8+x9;break;
            case 5: i=x1+x2+x3+x4+x5+x6+x7+x8;break;
            case 6: i=x1+x2+x3+x4+x5+x6+x7;break;
            case 7: i=x1+x2+x3+x4+x5+x6;break;
            case 8: i=x1+x2+x3+x4+x5;break;
            case 9: i=x1+x2+x3+x4;break;
            case 10: i=x1+x2+x3;break;
            case 11: i=x1+x2;break;
            case 12: i=x1;break;
        }
        i = i - a;
        cout << i;
        cout << " дней до нового года";
    }
   
    return 0;
}
