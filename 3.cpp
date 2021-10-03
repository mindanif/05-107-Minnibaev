#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int x;
    cin >> x;
    switch (x / 1000000){
        case 10: cout << "Десять миллионов "; break;
        case 9: cout << "Девять миллионов ";break;
        case 8: cout << "Восемь миллионов ";break;
        case 7: cout << "Семь миллионов ";break;
        case 6: cout << "Шесть миллионов ";break;
        case 5: cout << "Пять миллионов ";break;
        case 4: cout << "Четыре миллиона ";break;
        case 3: cout << "Три миллиона ";break;
        case 2: cout << "Два миллиона ";break;
        case 1: cout << "Один миллион ";break;
        case 0: cout << "";break;
    }
    x = x % 1000000;
    bool t = false;
    switch (x/100000) {
        case 9: cout << "девятьсот ";break;
        case 8: cout << "восемьсот ";break;
        case 7: cout << "семьсот ";break;
        case 6: cout << "шестьсот ";break;
        case 5: cout << "пятьсот ";break;
        case 4: cout << "четыреста ";break;
        case 3: cout << "триста ";break;
        case 2: cout << "двести ";break;
        case 1: cout << "сто ";break;
        case 0: cout << "";break;
    }
    if (x/1000 != 0) t = true;
    x = x % 100000;
    if (x/10000 != 1){
        switch (x/10000) {
            case 9: cout << "девяносто ";break;
            case 8: cout << "восемьдесят ";break;
            case 7: cout << "семьдесят ";break;
            case 6: cout << "шестьдесят ";break;
            case 5: cout << "пятьдесят ";break;
            case 4: cout << "сорок ";break;
            case 3: cout << "тридцать ";break;
            case 2: cout << "двадцать ";break;
            case 0: cout << "";break;
        }
        x = x % 10000;
        switch (x/1000) {
            case 9: cout << "девять ";break;
            case 8: cout << "восемь ";break;
            case 7: cout << "семь ";break;
            case 6: cout << "шесть ";break;
            case 5: cout << "пять ";break;
            case 4: cout << "четыре ";break;
            case 3: cout << "три ";break;
            case 2: cout << "два ";break;
            case 1: cout << "один ";break;
            case 0: cout << "";break;
        }
    }
    else {
        x = x % 10000;
        switch (x/1000) {
            case 9: cout << "девятнадцать ";break;
            case 8: cout << "восемнадцать ";break;
            case 7: cout << "семнадцать ";break;
            case 6: cout << "шестнадцать ";break;
            case 5: cout << "пятнадцать ";break;
            case 4: cout << "четырнадцать ";break;
            case 3: cout << "тринадцать ";break;
            case 2: cout << "двенадцать ";break;
            case 1: cout << "одиннадцать ";break;
            case 0: cout << "десять";break;
        }
    }
    x = x % 1000;
    if (t) cout << "тысяч (а/и) ";
    switch (x/100) {
        case 9: cout << "девятьсот ";break;
        case 8: cout << "восемьсот ";break;
        case 7: cout << "семьсот ";break;
        case 6: cout << "шестьсот ";break;
        case 5: cout << "пятьсот ";break;
        case 4: cout << "четыреста ";break;
        case 3: cout << "триста ";break;
        case 2: cout << "двести ";break;
        case 1: cout << "сто ";break;
        case 0: cout << "";break;
    }
    x = x % 100;
    if (x/10 != 1){
        switch (x/10) {
            case 9: cout << "девяносто ";break;
            case 8: cout << "восемьдесят ";break;
            case 7: cout << "семьдесят ";break;
            case 6: cout << "шестьдесят ";break;
            case 5: cout << "пятьдесят ";break;
            case 4: cout << "сорок ";break;
            case 3: cout << "тридцать ";break;
            case 2: cout << "двадцать ";break;
            case 0: cout << "";break;
        }
        x = x % 10;
        switch (x/1) {
            case 9: cout << "девять ";break;
            case 8: cout << "восемь ";break;
            case 7: cout << "семь ";break;
            case 6: cout << "шесть ";break;
            case 5: cout << "пять ";break;
            case 4: cout << "четыре ";break;
            case 3: cout << "три ";break;
            case 2: cout << "два ";break;
            case 1: cout << "один ";break;
            case 0: cout << "";break;
        }
    }
    else {
        x = x % 10;
        switch (x/1) {
            case 9: cout << "девятнадцать ";break;
            case 8: cout << "восемнадцать ";break;
            case 7: cout << "семнадцать ";break;
            case 6: cout << "шестнадцать ";break;
            case 5: cout << "пятнадцать ";break;
            case 4: cout << "четырнадцать ";break;
            case 3: cout << "тринадцать ";break;
            case 2: cout << "двенадцать ";break;
            case 1: cout << "одиннадцать ";break;
            case 0: cout << "десять";break;
        }
    }
    x = x % 1;

    return 0;
}
