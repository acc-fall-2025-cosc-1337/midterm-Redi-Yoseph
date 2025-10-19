#include "question2.h"
#include <iostream>


bool test_config()
{
    return true;
}
long long get_factorial_sequence(int num)
{
    if (num < 0) return 0;
    if (num == 0) return 1;
    long long acc = 1;
    for (int i = 1; i <= num; ++i) acc *= i;
    return acc;
}

void prompt_user()
{
    using std::cout; using std::cin;
    int num = 0;
    char choice = 'y';

    cout << "Factorial Sequence (1–10). Enter 0 to quit.\n";
    do {
        do {
            cout << "Enter n (1–10, 0 to quit): ";
            if (!(cin >> num)) return;
            if (num == 0) return;
        } while (num < 1 || num > 10);

        auto result = get_factorial_sequence(num);
        cout << "1";
        for (int i = 2; i <= num; ++i) cout << 'x' << i;
        cout << '=' << result << "\n";

        cout << "Enter n to exit, y to continue: ";
        if (!(cin >> choice)) return;
    } while (choice == 'y' || choice == 'Y');
}
