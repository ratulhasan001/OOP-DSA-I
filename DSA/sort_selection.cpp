#include <bits/stdc++.h>
using namespace std;

void selection_sort(int a[],int n) {
    for(int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for(int j = i + 1; j < n; j++) {
            if(a[j] < a[min_idx]) min_idx = j;
        }
        swap(a[min_idx], a[i]);
    }
}

int32_t main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    selection_sort(a, n);
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}