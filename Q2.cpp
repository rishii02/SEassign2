#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x;
    int y;
};
typedef Point Point;

double area(Point A, Point B, Point C) {
    double s = 0.5 * (A.x*(B.y-C.y) + B.x*(C.y-A.y) + C.x*(A.y - B.y));
    return s;
}

double areaR(Point A, Point B, Point C, Point D) {
    double a = sqrt(pow((A.x-B.x), 2) + pow((A.y - B.y), 2));
    double b = sqrt(pow((B.x-C.x), 2) + pow((B.y - C.y), 2));
    return a*b;
}

int main() {
    Point A,B,C,D,P;
    cin >> A.x >> A.y;
    cin >> B.x >> B.y;
    cin >> C.x >> C.y;
    cin >> D.x >> D.y;
    cin >> P.x >> P.y;
    double areaF = abs(area(A,B,P)) + abs(area(B,C,P)) + abs(area(C,D,P) + abs(area(D,A,P)));
    if (abs(areaR(A,B,C,D)) == areaF) {
        cout << "P lies insde the rectangle";
    }
    else {
        cout << "P lies outside the rectangle";
    }
}