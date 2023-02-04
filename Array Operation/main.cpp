#include <bits/stdc++.h>
using namespace std;
class Array
{
private:
    int *A;
    int size;
    int length;
    void swap(int *x, int *y);

public:
    Array()
    {
        size = 10;
        length = 0;
        A = new int[size];
    }
    Array(int sz)
    {
        size = sz;
        length = 0;
        A = new int[size];
    }
    ~Array()
    {
        delete[] A;
    }
    void display();
    void Insert(int index, int value);
    int LinearSearch(int value);
    void Delete(int index);
    int Sum();
};
void Array::display()
{
    cout << "Printing Elements : ";
    for (int i = 0; i < length; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}
void Array::swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void Array::Insert(int index, int value)
{
    if (index >= 0 && index <= length)
    {
        for (int i = length - 1; i >= index; i--)
        {
            A[i + 1] = A[i];
        }
        A[index] = value;
        length++;
    }
}
void Array::Delete(int index)
{
    int x = 0;
    x = A[index];
    if (index >= 0 && index < length)
    {
        for (int i = index; i < length; i++)
        {
            A[i] = A[i + 1];
        }
        length--;
    }
}
int Array::Sum()
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += A[i];
    }
    return sum;
}
int Array::LinearSearch(int value)
{
    for (int i = 0; i < length; i++)
    {
        if (A[i] == value)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int sz, x, index, value, len, found = 0;
    cout << "Enter The Array Size : ";
    cin >> sz;
    Array ar(sz);
    cout << endl;
    do
    {
        cout << "                ------Menu------" << endl;
        cout << "                  1. Insert" << endl;
        cout << "                  2. Delete" << endl;
        cout << "                  3. Sum" << endl;
        cout << "                  4. Search" << endl;
        cout << "                  5. Display" << endl;
        cout << "                  6. Exit " << endl;
        cout << endl;
        cout << "Enter your choice : ";
        cin >> x;

        switch (x)
        {
        case 1:
            cout << "Enter Index & value : ";
            cin >> index;
            cin >> value;
            ar.Insert(index, value);
            break;
        case 2:
            cout << "Enter Which Index you want to delete : ";
            cin >> index;
            ar.Delete(index);
            break;
        case 3:
            cout << "Sum of this Array : " << ar.Sum() << endl;
            break;
        case 4:
            cout << "Enter the value you want to Search : ";
            cin >> value;
            found = ar.LinearSearch(value);
            if (found > 0)
                cout
                    << "Value found at index : " << found << endl;
            else
                cout << "Value Not Found " << endl;
            break;
        case 5:
            ar.display();
            break;
        }
    } while (x < 6);
    cout << endl;
    cout << "                 Thank You" << endl;

    return 0;
}