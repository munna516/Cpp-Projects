#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    std::srand(std::time(0));
    cout << "Welcome On the greatest Calculator on The Earth" << endl;
    while (true)
    {
        int x;
        char c;
        int rand_num1 = rand() % 200;

        int rand_num2 = rand() % 200;

        int rand_num3 = rand() % 4;
        cout << "What is the result of ";
        switch (rand_num3)
        {
        case 0:
            cout << rand_num1 << " + " << rand_num2 << " : ";
            cin >> x;
            if (rand_num1 + rand_num2 == x)
                cout << "Congratulation ! You got the result " << x << " right" << endl;
            else
                cout << "No !! The correact resutl is : " << rand_num1 + rand_num2 << endl;
            break;
        case 1:
            cout << rand_num1 << " - " << rand_num2 << " : ";
            cin >> x;
            if (rand_num1 - rand_num2 == x)
                cout << "Congratulation ! You got the result " << x << " right" << endl;
            else
                cout << "No !! The correact resutl is : " << rand_num1 - rand_num2 << endl;
            break;
        case 2:
            cout << rand_num1 << " * " << rand_num2 << " : ";
            cin >> x;
            if (rand_num1 * rand_num2 == x)
                cout << "Congratulation ! You got the result" << x << " right" << endl;
            else
                cout << "No !! The correact resutl is : " << rand_num1 * rand_num2 << endl;
            break;
        case 3:
            cout << rand_num1 << " / " << rand_num2 << " : ";
            cin >> x;
            if (rand_num1 / rand_num2 == x)
                cout << "Congratulation ! You got the result" << x << " right" << endl;
            else
                cout << "No !! The correact resutl is : " << rand_num1 / rand_num2 << endl;
            break;
        }
        cout << endl;
        cout << "Do You want to try again (Y/N) : ";
        cin >> c;
        if (c == 'y' || c == 'Y')
            continue;
        else
            break;
    }
    cout << "See You later !!" << endl;

    return 0;
}