/* 
 * File:   main.cpp
 * Author: Matt Koosa
 *
 * Created on September 19, 2016, 2:39 PM
 */
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

const float YEN_PER_DOLLAR = 98.93/1 , EUROS_PER_DOLLAR = .74/1;

float conversionEuro(float);
float conversionYen(float);
/* Converting dollars to Euro/Yen
 */

int main(int argc, char** argv) {
    float cash = 0;
    float Euro;
    float Yen;
    
    cout << "Please enter the dollar amount you want converted to Euro/Yen" << endl;
    cin >> cash;
    
    cout << setprecision(2) << fixed << showpoint;
    
    Euro = conversionEuro(cash);
    Yen = conversionYen(cash);
    
    
    cout << "Dollar amount: " << cash << endl;
    cout << "Euro conversion: " << Euro << endl;
    cout << "Yen conversion: " << Yen << endl;
    return 0;
}

float conversionEuro(float E)
{
    E *= EUROS_PER_DOLLAR;
    return E;
}

float conversionYen(float Y)
{
    Y *= YEN_PER_DOLLAR;
    return Y;
}