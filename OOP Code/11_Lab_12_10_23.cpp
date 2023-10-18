// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

// #ifdef ONLINE_JUDGE
// #define debug(...) 42
// #define debug_array(x,y) 42
// #else
// #include "deBUG.h"
// #endif

// int32_t main() {

//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int n;
//     cin >> n;
//     vector<int>a(n);
//     vector<int>b(n);
//     for(int &i : a) cin >> i;
//     for(int &i : b) cin >> i;
//     swap(a,b);
//     for(auto x : a) cout << x << " ";
//     cout << '\n';
//     for(auto x : b) cout << x << " ";
//     cout << '\n';
//     sort(a.begin(),a.end());
//     sort(b.begin(),b.end());
//     reverse(b.begin(),b.end());
//     vector<int>c(a);
//     for(auto x : c) cout << x << " ";
//     cout << '\n';
//     b.insert(b.begin() + 1, 777);
//     for(auto x : b) cout << x << " ";
//     cout << '\n';
//     a.clear();
//     c.pop_back();
//     for(auto x : a) cout << x << " ";
//     cout << '\n';
//     for(auto x : b) cout << x << " ";
//     cout << '\n';
//     for(auto x : c) cout << x << " ";

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int fun(int a, int b) {
    return a - b;
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    /*
        Exception Handling
        1. arithmetic exception
        2. string index out of bound exception
        3. array index out of bound exception
        4. number format exception
        5. file not found exception
        6. class not found exception
        7. no such method
        try catch show
    */
   try{
    int p,x,y;
    cin >> p >> x >> y;
    int z =x-y;
    if(z != 0) {
        cout << p /z;
    }
    else throw (z);
   }
   catch(int x) {
    cout << "errrroooooorrrrr!!!!!!!";
   }
    try {
        throw 'a';
    }
    catch(int  x){
        cout <<"integer";
    }
    catch(...) {
        cout << "error";
    }
    try {
        int x = fun(10,10);
        if(x != 0) cout << x;
        else throw(x);

    }
    catch(int f) {
        cout << "errroorr!";
    }
    

    return 0;
}
// /*constructor array of obj func overloading overrding + operator too   inheritance stl template exception handling*/

// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

// #ifdef ONLINE_JUDGE
// #define debug(...) 42
// #define debug_array(x,y) 42
// #else
// #include "deBUG.h"
// #endif

// int32_t main() {

//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     cout << "1" << endl << "1" <<endl<<"3 2 1";
//     return 0;
// }


