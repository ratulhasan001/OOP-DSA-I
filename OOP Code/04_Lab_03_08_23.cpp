// #include <bits/stdc++.h>
// using namespace std;

// class Complex {
//     int a,b;
//     public:
//     void setData(int x,int y) {
//         a=x;
//         b=y;
//     }
//     void printNumber() {
//         cout<<a<<"+"<<b<<"i"<<endl;
//     }
//     friend Complex Sumcomplex(Complex O1, Complex O2);
// };
// Complex Sumcomplex (Complex O1, Complex O2) {
//     Complex O3;
//     O3.setData((O1.a+O2.a),(O1.b+O2.b));
//     return O3;

// }
// int main() {

//     Complex c1,c2,sum;
//     c1.setData(5,6);
//     c1.printNumber();
//     c2.setData(5,8);
//     c2.printNumber();

//     sum=Sumcomplex(c1,c2);
//     sum.printNumber();
    
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// class Sample {
//     int a,b;
//     public:
//     void setValue() {
//         a=25,b=40;
//     }
//     friend float mean(Sample S);
// };
// float mean(Sample S) {
//     return float(S.a+S.b)/2.0;
// }

// int main() {

//     Sample X;
//     X.setValue();
//     cout<<"Mean value = "<<mean(X)<<endl;

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// class student {
//     int a,b;
//     public:
//     void setData(int x,int y) {
//         a=x;
//         b=y;
//     }
//     friend int find_min (student s1);
// };
// int find_min (student s1) {
//     return min(s1.a,s1.b);
// }
// int main() {
//     student x1;
//     int a,b; cin >> a >> b;
//     x1.setData(a,b);

//     cout<<find_min(x1)<<endl;
    
//     return 0;
// }

