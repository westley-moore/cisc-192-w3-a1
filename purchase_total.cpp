#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double price, total_price, final_price, tax_rate, tax_amount;
    int amount;
    tax_rate = 0.0775;
    cout << "price:";
    cin >> price;
    cout << endl << "amount purchased:";
    cin >> amount;
    total_price = price * amount;
    tax_amount = total_price * tax_rate;
    final_price = total_price + tax_amount;
    cout << endl << "subtotal:" << fixed << setprecision(2) << total_price << endl;
    cout << endl << "tax:" << fixed << setprecision(2) << tax_amount << endl;
    cout << endl << "total:" << fixed << setprecision(2) << final_price << endl;
    return 0;
}