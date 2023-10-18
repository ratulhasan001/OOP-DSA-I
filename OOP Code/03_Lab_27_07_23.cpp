// // constructor
// #include <bits/stdc++.h>
// using namespace std;


// class Sum{
//     public:
//     int x,y;

//     Sum(int a,int b) ;


// };
// Sum::Sum(int a,int b) {
//     x=a;
//     y=b;
// }
// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     Sum sm=Sum(10,10);


//     return 0;
// }





// 2nd program

// #include <bits/stdc++.h>
// using namespace std;

// class Rectangle{
//     public:
//     int len=0,bre=0;
//     // havaing 2 parameters
//     Rectangle(int a, int b) {
//         len=a;
//         bre=b;
//     }

//     // having 1 parameter
//     Rectangle(int ar) {
//         len=ar;
//         bre=ar;
//     }
//     Rectangle(){
//         len=0;
//         bre=0;
//     }

//     int area(){
//         return len*bre;
//     }
//     void display() {
//         cout<<area()<<endl;
//     }
// };
// int32_t main() {


//     // 2 parameters
//     int x,y;
//     cin >> x>> y;
//     Rectangle area_2_para= Rectangle(x,y);

//     area_2_para.display();

//     //1 parameter
//     Rectangle area_1_para = Rectangle(x);
//     area_1_para.display();

//     // No parameter
//     Rectangle area_zero_para=Rectangle();

//     area_zero_para.display();


//     return 0;
// }





//3rd program


// #include <bits/stdc++.h>
// using namespace std;

// class AddAmount{
//     public:
//     int amount=50;
//     AddAmount(){};
//     AddAmount(int add) {
//         amount+=add;
//     }
//     void display() {
//         cout<<"amount: "<<amount<<endl;
//     }

// };
// int32_t main() {

//     cout<<"Enter the amount : ";
//     int x; cin >> x;
//     AddAmount add=AddAmount();
//     AddAmount add2=AddAmount(x);

//     add.display();
//     add2.display();


//     return 0;
// }

// 4th program




#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
const char nl= '\n';
#define all(x) x.begin(),x.end()
#define minimum(x) *min_element(x.begin(),x.end())
#define maximum(x) *max_element(x.begin(),x.end())

class find_large{

    int a,b;
    public:
    void input() {
        cin >> a >> b;
    }
    int find_it() {
        return max(a,b);
    }
    void display() {
        cout<<find_it()<<nl;
    }

};
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    find_large fd;
    fd.input();
    fd.display();
    return 0;
} // friend fucntion
