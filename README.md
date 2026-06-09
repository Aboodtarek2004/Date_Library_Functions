# 📅 Date Library Functions

A simple C++ date utility library built around the `clsDate` class. 🚀

This project provides useful date operations such as validating dates, checking leap years, calculating date differences, adding or subtracting dates, printing calendars, and working with business days. 🧮

## 📌 Project Focus

The main focus of this project is the `clsDate` class. ⭐

The class represents a date using:

```cpp id="4vqqgm"
Day / Month / Year
```

Example:

```cpp id="c9hosy"
clsDate Date1(31, 12, 2024);
Date1.Print();
```

## ✨ Features

* 📆 Get the current system date
* 📝 Create dates manually
* 🔤 Convert dates to string format
* ✅ Validate dates
* 🐸 Check leap years
* 📅 Get day and month short names
* 🗓️ Print month calendars
* 📚 Print full year calendars
* ➕ Add days, weeks, months, years, decades, centuries, and millenniums
* ➖ Decrease dates by days, weeks, months, years, decades, centuries, and millenniums
* ⚖️ Compare two dates
* 🧮 Calculate the difference between two dates
* 🎂 Calculate age in days
* 🏖️ Check weekends and business days
* 💼 Calculate vacation/business days
* 🔙 Calculate vacation return date

## 🧱 Main Class

```cpp id="i28npo"
class clsDate
```

The class stores date values internally and provides both static and object-based methods. 🛠️

## 💻 Example Usage

```cpp id="fm8htq"
#include <iostream>
#include "clsDate.h"

using namespace std;

int main()
{
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
```

## 📂 Project Structure

```txt id="8ubwfq"
Date_Library_Functions/
│
├── Date_Library/
│   ├── Date_Library.cpp
│   ├── clsDate.h
│   └── other project files
│
└── Date_Library.slnx
```

## 🚀 How to Run

1. 📥 Clone the repository:

```bash id="bppqra"
git clone https://github.com/Aboodtarek2004/Date_Library_Functions.git
```

2. 🧑‍💻 Open the solution file in Visual Studio.

3. ▶️ Build and run the project.

## 📝 Notes

This project is mainly for practicing C++ classes, object-oriented programming, and date calculations. 🧠

The main documented class is `clsDate`. 📅

## 👨‍💻 Author

Created by Abood Omar. ✨
