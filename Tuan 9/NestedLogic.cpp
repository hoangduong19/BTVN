#include <iostream>
using namespace std;

int main() {
    int day_return, month_return, year_return;
    int day_due, month_due, year_due;
    cin >> day_return >> month_return >> year_return;
    cin >> day_due >> month_due >> year_due;

    int fine = 0;
    if (year_return > year_due)
        fine = 10000;
    else if (year_return == year_due && month_return > month_due)
        fine = (month_return - month_due) * 500;
    else if (year_return == year_due && month_return == month_due && day_return > day_due)
        fine = (day_return - day_due) * 15;

    cout << fine;
    return 0;
}
