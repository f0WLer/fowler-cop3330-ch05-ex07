#include <iostream>
#include <cmath>
#include "ch05ex07.h"

using namespace ch05ex07;

int main()
{
    Print("Input (a b c): ");
    //  Get input.
    double a = Scanner::GetDouble();
    double b = Scanner::GetDouble();
    double c = Scanner::GetDouble();
    //  Print the roots.
    PrintRoots(a, b, c);

    return 0;
}

double ch05ex07::Scanner::GetDouble()
{
    double d;
    cin >> d;
    return d;
};

void ch05ex07::Print(string s)
{
    cout << s;
}

void ch05ex07::PrintDouble(double d)
{
    cout << d << endl;
}

void ch05ex07::PrintRoots(double a, double b, double c)
{
    double inner = (b * b) - 4 * (a * c);
    double pos = (-b + sqrt(inner)) / (2 * a);
    double neg = (-b - sqrt(inner)) / (2 * a);
    //  Print the roots.
    if (!isnan(pos))
        PrintDouble(pos);
    if (!isnan(neg))
        PrintDouble(neg);
}