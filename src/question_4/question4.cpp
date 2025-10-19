#include "question4.h"
#include <iostream>

using std::cout;
using std::cin;

bool test_config()
{
    return true;
}

void prompt_user()
{
    char choice = 'y';
    double mass = 0.0;
    double velocity = 0.0;

    do
    {
        cout << "Enter the mass of the object in kilograms: ";
        if (!(cin >> mass)) return;
        cout << "Enter the velocity of the object in meters per second: ";
        if (!(cin >> velocity)) return;

        get_kinetic_energy(mass, velocity);

        cout << "Enter n to exit, y to continue: ";
        if (!(cin >> choice)) return;

    } while (choice == 'y' || choice == 'Y');
}

void get_kinetic_energy(double mass, double velocity)
{
    double ke = 0.5 * mass * velocity * velocity;
    cout << "Kinetic energy: " << ke << " Joules\n";
}

double get_kinetic_energy_do(double mass, double velocity)
{
    return 0.5 * mass * velocity * velocity;
}
