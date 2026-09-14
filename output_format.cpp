#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    int integer;
    float floating;
    bool boolean;
    std::cin >> integer;
    std::cin >> floating;
    std::cin >> boolean;
    cout << std::showpos << integer << std::noshowpos << endl;
    cout << std::hex << integer << std::dec << endl;
    cout << fixed << setprecision(2) << floating << endl;
    cout << std::boolalpha << boolean << endl;
}
