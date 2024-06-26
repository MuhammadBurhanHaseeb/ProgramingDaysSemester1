#include <iostream>
#include <cmath>
using namespace std;
bool isleap(int year);
int countLeapYear(int start, int end);
main()
{
    int start, end, result;
    cout << "enter the start  year";
    cin >> start;
    cout << "enter the end  year";
    cin >> end;
    result = countLeapYear(start, end);
    cout << result;
}
bool isleap(int year)
{
    if (year % 4 == 0 && year % 100 == 0 && year % 400 == 0)
    {
        return 1;
    }
    if (year % 4 == 0 && year % 100 != 0)
    {
        return 1;
    }
    if (year % 4 != 0)
    {
        return 0;
    }
    if (year % 4 == 0 && year % 100 == 0 && year % 400 != 0)
    {
        return 0;
    }
}
int countLeapYear(int start, int end)
{
    int count = 0;
    if (end - start == 10)
    {

        if (isleap(start))
        {
            count = count + 1;
        }
        if (isleap(start + 1))
        {
            count = count + 1;
        }
        if (isleap(start + 2))
        {
            count = count + 1;
        }
        if (isleap(start + 3))
        {
            count = count + 1;
        }
        if (isleap(start + 4))
        {
            count = count + 1;
        }
        if (isleap(start + 5))
        {
            count = count + 1;
        }
        if (isleap(start + 6))
        {
            count = count + 1;
        }
        if (isleap(start + 7))
        {
            count = count + 1;
        }
        if (isleap(start + 8))
        {
            count = count + 1;
        }
        if (isleap(start + 9))
        {
            count = count + 1;
        }

        return count;
    }
    else
    {
        return -1;
    }
}
