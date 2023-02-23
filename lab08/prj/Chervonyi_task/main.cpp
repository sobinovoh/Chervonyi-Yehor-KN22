#include <iostream>
#include <windows.h>
#include "ModulesChervonyi.h"

using namespace std;

string developer(){
    string anotation = "Червоний Єгор ©";
    return anotation;
}
int logical_expression(char a, char b){
    if (a+10>=b){
        return 1;
    }
    else{
        return 0;
    }
}

string x_y_z_dec_hex_s(float x, float y, float z){
    cout << "Десяткова система числення" << endl
    << "x: " << x << endl
    << "y: " << y << endl
    << "z: " << z << endl;
    cout << "Шістнадцяткова система числення" << endl
    << "x: " << hex << (int)x << endl
    << "y: " << hex << (int)y << endl
    << "z: " << hex << (int)z << endl;
    if (x>y){
        cout << "S= " << s_calculation(x, y, z) <<endl;
    }
    else{
        cout << "Значення х має бути більше значення у" << endl;
    }
    return "";
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    float x, y, z;
    char a, b;
    cout << "Введіть значення x: ";
    cin >> x;
    cout << "Введіть значення y: ";
    cin >> y;
    cout << "Введіть значення z: ";
    cin >> z;
    cout << "Введіть символ a: ";
    cin >> a;
    cout << "Введіть символ b: ";
    cin >> b;
    cout << developer() << endl;
    cout << logical_expression(a, b) << endl;
    cout << x_y_z_dec_hex_s(x, y, z) << endl;
    system("pause");
    return 0;
}
