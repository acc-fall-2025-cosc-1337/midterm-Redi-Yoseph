#include "question3.h"
#include <iostream>
#include <iomanip>

bool test_config()
{
    return true;
}
std::vector<double> get_cookie_ingredients(int cookies)
{
    // Base recipe for 48 cookies
    constexpr double sugar48  = 1.5;
    constexpr double butter48 = 1.0;
    constexpr double flour48  = 2.75;
    const double factor = cookies / 48.0;
    return { sugar48 * factor, butter48 * factor, flour48 * factor };
}

void prompt_user()
{
    using std::cout; using std::cin;
    int cookies = 0;
    char choice = 'y';

    do {
        cout << "Enter the number of cookies to bake: ";
        if (!(cin >> cookies)) return;
        const auto v = get_cookie_ingredients(cookies);
        cout << std::fixed << std::setprecision(3);
        cout << "Cups of Sugar:  " << v[0] << "\n";
        cout << "Cups of Butter: " << v[1] << "\n";
        cout << "Cups of Flour:  " << v[2] << "\n";

        cout << "Enter n to exit, y to continue: ";
        if (!(cin >> choice)) return;
    } while (choice == 'y' || choice == 'Y');
}
