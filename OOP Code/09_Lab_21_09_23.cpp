#include <bits/stdc++.h>
using namespace std;
// single data type
template<typename T>   
T sum(T a, T b) { 
    return a+b;
}
template<typename T> 
T MAX(T a, T b, T c) {
    return max({a,b,c});
}


// 3 ta data type
template<typename A, typename B, typename C>
A sumA(A a, B b, C c) {
    return a+b+c;
}
template<typename A, typename B, typename C>
B sumB(A a, B b, C c) {
    return a+b+c;
}
template<typename A, typename B, typename C>
C sumC(A a, B b, C c) {
    return a+b+c;
}

int32_t main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); 
    
    // int x = sum<int>(1,2);
    // float y = sum<float>(1.9,24.4);
    // double z = sum<double>(1.4,2.5);
    // float y = sum<float>(1.4,2.4,3.3);

    int x = sumA<int,float,char>(1,2,'A');
    float y = sumA<float,int,char>(4.554,3,'B');
    char z = sumA<char,int,float>('B',5,5.65553);

    cout<<x<<'\n'<<y<<"\n"<<z;

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// class weight{
//     int kg = 30;
//     public:
//     void printWeight() {cout<<kg<<endl;}
//     void operator++() {
//         ++kg;
//     }
//     void operator++(int) {
//         kg++;
//     }

// };

// int32_t main() {
//     ios_base::sync_with_stdio(false); 
//     cin.tie(nullptr); 
    
//     weight w;
//     w.printWeight();
//     ++w;
//     w.printWeight();
//     w++;
//     w.printWeight();
//     return 0;
// }