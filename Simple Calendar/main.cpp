/*              It is a simple Calendar of One year .      */
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout<<endl;
    int year, first_day;
    cout << "Enter a Year : ";
    cin >> year;

    cout << "Enter the first day of the year [1: Monday, .... , 7: Sunday] : ";
    cin >> first_day;

    cout << endl;
    cout << "Calendar for " << year << endl;
    int days_on_a_month{0};
    int starting_point{first_day};
    int day_counter{0};
    for (int i = 1; i <= 12; i++)
    {
        switch (i)
        {
        case 1:
            days_on_a_month = 31;
            cout << "--- January " << year << " ---" << endl;
            break;
        case 2:
            // leap year check
            if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
                days_on_a_month = 29;
            else
                days_on_a_month = 28;
            cout << "--- February " << year << " ---" << endl;
            break;
        case 3:
            days_on_a_month = 31;
            cout << "--- March " << year << " ---" << endl;
            break;
        case 4:
            days_on_a_month = 30;
            cout << "--- April " << year << " ---" << endl;
            break;

        case 5:
            days_on_a_month = 31;
            cout << "--- May " << year << " ---" << endl;
            break;
        case 6:
            days_on_a_month = 30;
            cout << "--- June " << year << " ---" << endl;
            break;
        case 7:
            days_on_a_month = 31;
            cout << "--- July " << year << " ---" << endl;
            break;
        case 8:
            days_on_a_month = 31;
            cout << "--- August " << year << " ---" << endl;
            break;
        case 9:
            days_on_a_month = 30;
            cout << "--- September " << year << " ---" << endl;
            break;
        case 10:
            days_on_a_month = 31;
            cout << "--- October " << year << " ---" << endl;
            break;
        case 11:
            days_on_a_month = 30;
            cout << "--- November " << year << " ---" << endl;
            break;
        case 12:
            days_on_a_month = 31;
            cout << "--- December " << year << " ---" << endl;
            break;
        }

        int col_width{9};
        cout << std::right;
        cout << std::setw(col_width) << "Mon" << std::setw(col_width) << "Tues" << std::setw(col_width) << "Wed" << std::setw(col_width) << "Thur" << std::setw(col_width) << "Fri" << std::setw(col_width) << "Sat" << std::setw(col_width) << "Sun" << endl;

        /*Printing the emty slot infront the starting pooint */

        for (int j = 1; j < starting_point; j++)
        {
            cout << std::setw(col_width) << "";
            ++day_counter;
            if (day_counter == 7)
                cout << endl;
        }

        /* Printing the days on the month*/

        for (int i = 1; i <= days_on_a_month; i++)
        {
            cout << std::setw(col_width) << i << std::setw(col_width);
            ++day_counter;
            if (day_counter == 7)
            {
                cout << endl;
                day_counter = 0;
            }
        }

        // Set up for next month
        starting_point = day_counter + 1;
        day_counter = 0;
        cout << endl
             << endl;
    }

    return 0;
}