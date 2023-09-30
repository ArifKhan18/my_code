#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double calculate_original_price(int discount_percentage, double price_after_discount)
{
    double original_price = price_after_discount / (1 - discount_percentage / 100.0);
    return original_price;
}

int main()
{
    int discount_percentage;
    double price_after_discount;

    // Read input
    cin >> discount_percentage >> price_after_discount;

    // Calculate original price
    double original_price = calculate_original_price(discount_percentage, price_after_discount);

    // Round up to two decimal places
    double rounded_original_price = round(original_price * 100) / 100;

    // Print the result
    cout << fixed << setprecision(2) << rounded_original_price << endl;

    return 0;
}
