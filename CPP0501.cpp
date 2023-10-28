#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

struct Point
{
    double x{};
    double y{};
};

void input(Point& a)
{
    cin >> a.x >> a.y;
} 

double distance(const Point& a, const Point& b)
{
    return sqrt( (b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y) );
}

int main()
{
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}