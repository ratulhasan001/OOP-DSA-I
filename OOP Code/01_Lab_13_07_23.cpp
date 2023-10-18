// ex 01 date 13 07 23
// classes and objects in object oriented programming
// function inside class
// function outside class
// find max between two or array the helll
#include <bits/stdc++.h>
using namespace std;
class item {

    int number;
    float cost;
    public: 
        void getdata(int a,float b) {
            number =a;
            cost =b;
        }
        void putdata() {
            cout<<"Number : "<<number<<'\n';
            cout<<"Cost: "<<cost<<'\n';
        }
};
int main() {  
    item x; 
    cout<<'\n'<<"Object x "<<'\n';
    x.getdata(100,299.95);
    x.putdata();
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

class find_mx_min {
    public:
        int a,b;
        void getdata();
        int find_max();
        int find_min();
        void putdata();
};
void find_mx_min :: getdata() {
    cin >> a >> b;
}
int find_mx_min:: find_max() {
    return max(a,b);
}
int find_mx_min:: find_min() {
    return min(a,b);
}
void find_mx_min:: putdata() {
    cout<<"max value : "<<find_max()<<'\n';
    cout<<"min value: "<<find_min();
}
int main() {
    find_mx_min fx;
    fx.getdata();
    fx.putdata();
    return 0;
}