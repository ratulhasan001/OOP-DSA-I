#include <bits/stdc++.h>
using namespace std;

int partition(int a[], int start, int end) {
    int pivot = a[end];
    int i = start - 1;
    for(int j = start; j <= end - 1; j++) {
        if(a[j] < pivot) {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[end]);
    return i + 1;
}

void quick(int a[], int start, int end) {
    if(start < end) {
        int p = partition(a, start, end);
        quick(a, start, p - 1);
        quick(a, p + 1, end);
    }
}
int32_t main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    quick(a, 0, n - 1);
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}