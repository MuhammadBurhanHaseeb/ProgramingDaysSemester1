#include <iostream>
using namespace std;
main()
{
    int h, x, y;
    cout << "Enter value of h: ";
    cin >> h;
    cout << "Enter cordinates of x: ";
    cin >> x;
    cout << "Enter cordinates of y: ";
    cin >> y;

    if ((x >= 0 && x <= 3 * h) && y == 0)
    {
        cout << "Point is on the border";
    }
    else if (x == 0 && (y >= 0 && y <= h))
    {
        cout << "Point is on the border";
    }
    else if (x == 3 * h && (y >= 0 && y <= h))
    {
        cout << "Point is on the border";
    }
    else if ((x >= 0 && x <= h) && (y == h))
    {
        cout << "Point is on the border";
    }
    else if ((x >= 2 * h && x <= 3 * h) && (y == h))
    {
        cout << "Point is on the border";
    }
    else if (x == h && (y >= 0 && y <= 4 * h))
    {
        cout << "Point is on the border";
    }
    else if (x == 2 * h && (y >= 0 && y <= 4 * h))
    {
        cout << "Point is on the border";
    }
    else if ((x >= h && x <= 2 * h) && (y == h))
    {
        cout << "Point is on the border";
    }
    else if ((x >= h && x <= 2 * h) && (y == 2 * h))
    {
        cout << "Point is on the border";
    }
    else if ((x >= h && x <= 2 * h) && (y == 3 * h))
    {
        cout << "Point is on the border";
    }
    else if ((x >= h && x <= 2 * h) && (y == 4 * h))
    {
        cout << "Point is on the border";
    }
    else if ((x > 0 && x < 3 * h) && (y > 0 && y < h))
    {
        cout << "Point is inside the figure";
    }
    else if ((x > h && x < 2 * h) && (y > h && y < 4 * h))
    {
        cout << "Point is inside the figure";
    }
    else
    {
        cout << "Point is outside the figure";
    }
}