#include <iostream>
using namespace std;

int main(){
    int num1, num2, num3;
    double average;
    cout << "Enter 3 scores";
    cin >> num1 >> num2 >> num3;
    cout << endl << num1 << " " << num2 << " " << num3;
    cout << endl << num1 +num2 +num3;
    average = (num1 + num2 + num3) / 3;
    cout << endl << average << endl;
    return 0;
}