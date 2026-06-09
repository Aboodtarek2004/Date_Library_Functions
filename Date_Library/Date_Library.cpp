#include <iostream>
#include "clsDate.h"

using namespace std;

int main()
{
    cout << "Date Class Project\n\n";

    clsDate Today;

    cout << "Today: ";
    Today.Print();

    cout << "Day Name: " << Today.DayShortName() << endl;
    cout << "Month Name: " << Today.MonthShortName() << endl;

    clsDate Date1(31, 12, 2024);

    cout << "\nDate1: ";
    Date1.Print();

    cout << "Is Valid? " << (Date1.IsValid() ? "Yes" : "No") << endl;
    cout << "Is Leap Year? " << (Date1.isLeapYear() ? "Yes" : "No") << endl;

    Date1.AddOneDay();

    cout << "After adding one day: ";
    Date1.Print();

    return 0;
}