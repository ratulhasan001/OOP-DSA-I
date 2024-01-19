#include <bits/stdc++.h>
using namespace std;

void tower_of_hanoi(int disk, char b, char e, char ax) {
    if(disk == 0) return;
    tower_of_hanoi(disk - 1, b, ax, e);
    cout << "Move disk " <<disk << " from " << b << " to " << e << '\n';
    tower_of_hanoi(disk - 1, ax, b, e);

}

int32_t main() {

    int n = 3;
    tower_of_hanoi(n, 'A', 'C', 'B');

    return 0;
}