/*
 •• E2.18
 Write a program that transforms numbers 1, 2, 3, …, 12 into the corresponding month names January, February, March, …, December. Hint: Make a very long string "January February March ...", in which you add spaces such that each month name has the same length. Then use substr to extract the month you want.
 */

#include <iostream>

using namespace std;

int main()
{
    string months = "January  February March    April    May      June     July     August   SeptemberOctober  November December ";
    
    cout << "Enter the month number: ";
    int number;
    cin >> number;
    
    cout << months.substr((number * 9) - 9, 9) << endl;
    
}
