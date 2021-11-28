#include <iostream>
#include <string.h>
#include <string>
#include <cstdio>
#include "windows.h"
using namespace std;

int main() {
    //setlocale(LC_ALL, "Russian");
    system("chcp 65001");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //Задание 1
    /*
    char pal[256];
    gets_s(pal);
    int a =  strlen(pal);
    bool t = true;
    for (int i = 0; i < a/2; i++){
        if (pal[i] != pal[a - i - 1]){
            t = false;
            break;
        }
    }
    if (t) cout << "Palindrom";
    else cout << "Not Palindrom";
     */
    //Задание 2
    /*
    char sum[256];
    gets_s(sum);
    int b = 0;
    string h;
    for (int i = 0; i < strlen(sum); i++){
        if (sum[i] != '+'){
            h += sum[i];
        }
        else{
            b += stoi(h);
            h = "";
        }
    }
    b += stoi(h);
    cout << b;
     */
    //Задание 3
    /*
    char FIO[256];
    gets_s(FIO);
    //cin.getline(FIO);
    int len = strlen(FIO);
    char Family[256];
    int i = 0;
    while (FIO[i] != ' '){
        Family[i] = FIO[i];
        i++;
    }
    Family[i] = '\0';
    for (i; i < len; i++){
        FIO[i];
        if (FIO[i] == ' '){
            cout << FIO[i+1] << '.';
        }
    }
    cout << ' ';
    cout << Family;
     */
    //Задание 4
    /*
    char file[256];
    char l[6] = ".imim";
    gets_s(file);
    int Len = strlen(file);
    int i = Len - 1;
    while (file[i] != '.'){
        i--;
    }
    for (int j = 0; j < 6; j++){
        file[i] = l[j];
        i++;
    }
    cout << file;
     */
    //Задание 5
    /*
    char string[256];
    char word[32];
    gets_s(string);
    gets_s(word);
    int lenSTR = strlen(string);
    int lenWRD = strlen(word);
    int c = 0;
    for (int i = 0; i < lenSTR - lenWRD + 1; i++){
        bool t = true;
        for (int j = 0; j < lenWRD; j++){
            if (string[i+j] != word[j]) t = false;
        }
        if (t) c++;
    }
    cout << c;
     */
    return 0;
}
