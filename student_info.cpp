#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;
    double GPA;
    cout << "what is your name?";
    cin >> name;
    cout << endl << "what is your age?";
    cin >> age;
    cout << endl << "what is your GPA?";
    cin >> GPA;
    cout << endl << endl << "Student information";
    cout << endl << "name: " << name << endl;
    cout << endl << "age: " << age << endl;
    cout << endl << "GPA: " << GPA << endl;
    return 0;
}