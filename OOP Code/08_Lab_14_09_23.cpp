// #include <bits/stdc++.h>
// using namespace std;

// class Cents{
//     private:
//     int m_nCents;
//     public:
//     Cents(int nCents) {
//         m_nCents=  nCents;
//     }
//     friend Cents operator+(const Cents &c1, const Cents &c2);
//     int GetCents() {
//         return m_nCents;
//     }
// };
// Cents operator+(const Cents &c1, const Cents &c2) {
//     return Cents(c1.m_nCents + c2.m_nCents);
// }
// int32_t main() {
//     ios_base::sync_with_stdio(false); 
//     cin.tie(nullptr); 
    
//     Cents cCents1(10);
//     Cents cCents2(10);
//     Cents cCentsSum = cCents1 + cCents2;

//     cout <<cCentsSum.GetCents();
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;

// class Cents{
//     private:
//     int m_nCents;
//     public:
//     Cents(int nCents) {
//         m_nCents=  nCents;
//     }
//     Cents operator+(int nCents);
//     int GetCents() {
//         return m_nCents;
//     }
// };
// Cents Cents:: operator+(int nCents) {
//     return Cents(m_nCents + nCents);
// }
// int32_t main() {
//     ios_base::sync_with_stdio(false); 
//     cin.tie(nullptr); 
    
//     Cents cCents1(6);
//     Cents cCents2(10);
    
//     cout<<cCents1.GetCents() + cCents2.GetCents();
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// class Complex{
//     float x,y;
//     public:

//     Complex(float real, float img) {
//         x=  real;
//         y = img;
//     }
//     Complex operator+(float real);
//     Complex operator-(float img);

//     float getReal() {
//         return x;
//     }
//     float getImg() {
//         return y;
//     }

// };
// Complex Complex:: operator+(float real) {
//     return Complex(x + real, y);
// }
// Complex Complex:: operator-(float img) {
//     return Complex(x,y - img);
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false); 
//     cin.tie(nullptr); 
    
//     Complex c1(10,20);
//     Complex c2(1,2);
//     cout<<c1.getReal()+c2.getReal()<<endl;
//     cout<<c1.getImg()-c2.getImg()<<endl;
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

class Complex{
    private:
    float x,y;
    public:
    Complex(float real, float img) {
        x=  real;
        y= img;
    }
    friend Complex operator+(const Complex &c1, const Complex &c2);
    friend Complex operator-(const Complex &c1, const Complex &c2);
    float GetReal() {
        return x;
    }
    float getImg() {
        return y;
    }

};
Complex operator+(const Complex &c1, const Complex &c2) {
    return Complex(c1.x + c2.x,c2.y);
}
Complex operator-(const Complex &c1, const Complex &c2) {
    return Complex(c1.x,c1.y-c2.y);
}
int32_t main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); 
    
    Complex c1(6,6);
    Complex c2(8,8);
    Complex sum = c1 + c2;
    Complex sum2 = c1 - c2;

    cout <<sum.GetReal()<<endl<<sum2.getImg();
    return 0;
}
