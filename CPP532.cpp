#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct point
{
    double x, y;
};

double S(point a, point b, point c)
{
    return 0.5 * fabs((a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x * (a.y - b.y)));
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        point a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].x >> a[i].y;
        }
        double s = 0;
        for (int i = 1; i < n - 1; i++)
        {
            s += S(a[0], a[i], a[i + 1]);
        }
        cout << fixed << setprecision(3) << s << endl;
    }
    return 0;
}
