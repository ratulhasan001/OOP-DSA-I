#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void merge(int a[], int l, int m, int r) {

}

void merge_sort(int a[], int l, int r) {
    if(l < r) {
        int mid = (l + r) / 2;
        merge_sort(a, l, mid);
        merge_sort(a, mid + 1, r);
        merge(a, l, mid, r);

    }
}
int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    // merge_sort(a, n);
    for(int i = 0; i < n; i++) cout << a[i] << " ";

    return 0;
} 