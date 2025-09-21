#include <iostream>
#include <cmath>  // for abs()
using namespace std;

int closest_person(int x, int y, int z) {
    int distx = abs(z - x);
    int disty = abs(z - y);

    if (distx < disty) return 1;   // x is closer
    if (distx > disty) return 2;   // y is closer
    return 0;                      // both are equally close
}

int main() {
    int x, y, z;
    cout << "Enter x, y, z: ";
    cin >> x >> y >> z;

    int result = closest_person(x, y, z);

    if (result == 1)
        cout << "x is closer to z\n";
    else if (result == 2)
        cout << "y is closer to z\n";
    else
        cout << "Both are equally close to z\n";

    return 0;
}
