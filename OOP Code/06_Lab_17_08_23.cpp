// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;
// using ull = unsigned long long;
// const char nl= '\n';


// class Code {
//     int id;
//     public:
//     Code() {};
//     Code(int a) {
//         id=a;
//     }
//     Code(Code &x) {
//         id=x.id;
//     }
//     void display() {
//         cout<<id<<nl;
//     }

// };

// int32_t main() {
//     ios_base::sync_with_stdio(false); 
//     cin.tie(nullptr); 
    
//     Code A(100);
//     Code B(A);
//     Code C=A;
//     Code D;
//     D=A;

//     A.display();
//     B.display();
//     C.display();
//     D.display();


//     return 0;
// }


// /*  Problem 1
// Create a class called "Rectangle" that represents a rectangle with its width and height as private data memebers . Implement a default constructor that initializes both width and height to 1, and another constructor that allows the user to specify values for width and height. Provide member functions to calculate and return the area and parameter of the rectangle. Finally, write a program that demonstrates the usage of the "Rectangle" class by  creating instances of the class and displaying their properties
// */

// // #include <bits/stdc++.h>
// // using namespace std;

// // const char nl= '\n';


// // class Rectangle {
// //     int height,width;
// //     public:
// //     Rectangle() {
// //         height=1;
// //         width=1;
// //     }
// //     Rectangle(int a,int b) {
// //         height=a;
// //         width=b;
// //     }
// //     int area() {
// //         return height*width;
// //     }
// //     int para() {
// //         return 2*(height+width);
// //     }
// //     void display() {
// //         cout<<height<<" "<<width<<nl;
// //         cout<<area()<<" "<<para()<<nl;

// //     }

// // };

// // int32_t main() {
// //     ios_base::sync_with_stdio(false); 
// //     cin.tie(nullptr); 

// //     Rectangle r;
// //     r.display();

// //     int a,b;
// //     cin >> a >> b;

// //     Rectangle r2(a,b);
// //     r2.display();

// //     return 0;
// // }



// #include <bits/stdc++.h>
// using namespace std;

// const char nl= '\n';

// const int N= 100;
// int identification[N];
// int cnt;

// class Library {

//     string title,author, libName;
//     public:
//     Library(string a) {
//         libName=a;
//         cout<<"Library Name : "<<libName<<nl;
//     }
//     Library(){}
//     void add() {
//         cin >> author >> title;
//     }
//     void displayLibName() {
//         cout<<"Library Name : "<<libName<<nl;
//     }
//     void displayBook() {

//         cout<<"Author: "<<author<<nl;
//         cout<<"Title: "<<title<<nl<<nl;;
//     }
        
// };

// int32_t main() {
//     ios_base::sync_with_stdio(false); 
//     cin.tie(nullptr); 

//     string name;  
//     cin >> name;
    
//     Library l(name);

//     int n; cin >> n;

//     Library lb[n];
//     for(int i=0; i<n; i++) {
//         lb[i].add();
//         identification[i] = ++cnt;
//     }
//     for(int i=0; i<n; i++) {
//         cout<<"Book No "<<identification[i]<<" :"<<nl;

//         lb[i].displayBook();
//     }

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

const char nl= '\n';


class BankAccount {
    int accountNumber;
    string name;
    float balance=0;
    public:
    
    BankAccount(){}
    BankAccount(string n, int num, float b) {
        name=n;
        accountNumber= num;
        balance= b;
    }
    void display() {
        cout<<"Name: "<<name<<nl;
        cout<<"Account Number: "<<accountNumber<<nl;
        cout<<"Balance : "<<balance<<nl;
    }
    float deposit(float dep) {
        return balance+=dep;
    }
    float withdraw(float wd) {
        return (balance>wd)? balance-=wd:-1;
    }


};

int32_t main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); 

    string n;
    int x;
    float f;
    cin >> n >> x >> f;
    BankAccount b(n,x,f);
    BankAccount cop(b);
    b.display();
    cop.display();

    int give,take;
    cin >> give >> take;

    cout<<b.deposit(give)<<nl;

    (b.withdraw(take)==-1)? cout<<"Not enough money":cout<<b.withdraw(take)<<nl;


    return 0;
}


