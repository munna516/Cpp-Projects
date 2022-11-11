#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    int n = 1, count = 0;
    std::srand(std::time(0));
    cout << "*********************************" << endl;
    cout << "Kids Mathematics Game" << endl;
    cout << "*********************************" << endl;

    while (n != 11)
    {
        int x;
        char c;
        int rand_num1 = rand() % 11;

        int rand_num2 = rand() % 11;

        int rand_num3 = rand() % 3;
        cout << "Q" << n << " : ";

        switch (rand_num3)
        {
        case 0:
            cout << rand_num1 << " + " << rand_num2 << " : ";
            cin >> x;
            if (rand_num1 + rand_num2 == x)
            {
                count++;
                cout << "Right! " << endl;
            }
            else
                cout << "Wrong! The ans is : " << rand_num1 + rand_num2 << endl;
            break;
        case 1:
            cout << rand_num1 << " - " << rand_num2 << " : ";
            cin >> x;
            if (rand_num1 - rand_num2 == x)
            {
                count++;
                cout << " Right !" << endl;
            }
            else
                cout << "Wrong! The ans is  : " << rand_num1 - rand_num2 << endl;
            break;
        case 2:
            cout << rand_num1 << " x " << rand_num2 << " : ";
            cin >> x;
            if (rand_num1 * rand_num2 == x)
            {
                count++;
                cout << "Right !" << endl;
            }
            else
                cout << "Wrong! The ans is : " << rand_num1 * rand_num2 << endl;
            break;
            /*
        case 3:
            cout << rand_num1 << " / " << rand_num2 << " : ";
            cin >> x;
            if (rand_num1 / rand_num2 == x)
            {
                count++;
                cout << "Right !" << endl;
            }
            else
                cout << "Wrong! The ans is : " << rand_num1 / rand_num2 << endl;
            break;
            */
        }
        ++n;
        cout << endl;
    }
    cout << "The total score is : " << count << endl;
    return 0;
}