// multilevel inheritance


// #include<bits/stdc++.h>
// using namespace std;

// class class1 {
//     public:
//     void display1() {
//         cout<<"Hello"<<endl;
//     }
//     string s="World"; // currently in class 1
// };
// class class2:public class1 {
//     public: 
//     void display2() {
//         cout<<s<<endl; // from class 1
//     }
//     string s2= "nothing";
    
    
// };
// class class3:public class2 {
//     public:
//     void display3() {
//         cout<<s2<<endl; // from class 2
        
//     }
//     string callings3="class3";
// };

// int32_t main() {

    
//     class1 c1;
//     class2 c2;
//     class3 c3;
    
//     c1.display1();
//     c2.display1();
//     c2.display2();
//     c3.display1();
//     c3.display2();
//     c3.display3();
    
    
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// class class1 {

//     public:
//     void display1() {
//         cout<<"Hello"<<endl;
//     }
//     string s="World"; 
// };
// class class2:public class1 {

//     public:
    
// };
// class class3:public class1 {
//     public:

// };

// int32_t main() {

    
//     class1 c1;
//     class2 c2;
//     class3 c3;
    
//     c1.display1();
//     c2.display1();
//     c3.display1();
//     cout<<c1.s<<endl;
//     cout<<c2.s<<endl;
//     cout<<c3.s<<endl;
    
//     return 0;
// }





// #include <bits/stdc++.h>
// using namespace std;

// class shape {
//     public:
//     int len,bre;
//     void input() {
//         cin >> len >> bre;
//     }
// };

// class rectangle: public shape {
//     public:

//     int rec_area(int x,int y) {
//         x=len;
//         y=bre;
//         return len*bre;
//     }
// };

// class triangle: public shape {
//     public:
//     int tri_area(int x,int y) {
//         x=len;
//         y=bre;
//         return 0.5*len*bre;

//     }
// };

// int32_t main() {
//     ios_base::sync_with_stdio(false); 
//     cin.tie(nullptr); 
    
//     shape s;
//     rectangle r;
//     triangle t;

//     r.input();
//     int v,d;
//     cout<<r.rec_area(v,d)<<'\n';

//     t.input();
//     int m,n;
//     cout<<t.tri_area(m,n)<<'\n';
    
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// class Book {
//     public:
//     string title,author;
//     void input(string a, string b) {
//         a= title, b=author;
//         cin >> title >> author;
//     }
//     void display(string a,string b) {
//         a= title, b=author;
//         cout<<"title: "<<title<<'\n';
//         cout<<"author: "<<author<<'\n';
//     }
// };
// class fiction: public Book {
//     public:
//     int grading_lev;
//     void set_gradingLevel() {
//         cin >> grading_lev;
//     }
//     void displayFiction() {
//         cout<<"grading level: "<<grading_lev<<'\n';
//     }
// };

// class NonFiction: public Book {
//     public:
//     int numberOfpages;
//     void setPage() {
//         cin >> numberOfpages;
//     }
//     void getPage() {
//         cout<<"Pages total: "<<numberOfpages<<'\n';
//     }
// };

// int32_t main() {

    
//     Book b;
//     fiction f;
//     NonFiction nf;

//     string x,y;

//     f.input(x,y);
//     f.set_gradingLevel();
//     f.display(x,y);
//     f.displayFiction();

//     nf.input(x,y);
//     nf.display(x,y);
//     nf.setPage();
//     nf.getPage();
    
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// class a{
//     public:
//     void display(){
//         cout<<"hello"<<'\n';
//     }
// };
// class b{
//     public:
//     void display2(){
//         cout<<"hello"<<'\n';
//     }

// };
// class c: public a , public b{
//     public:
// };


// int32_t main() {

//      c cc;
//      cc.display();
//      cc.display2();

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

class Mammals{
    public:
    void display(){
        cout<<"mammal"<<'\n';
    }
};
class MarineAnimanls{
    public:
    void display2(){
        cout<<"marine animal"<<'\n';
    }

};
class BlueWhale: public Mammals , public MarineAnimanls{
    public:
    void display3(){
        cout<<"both "<<'\n';
    }
};


int32_t main() {
    Mammals m;
    MarineAnimanls mar;
    BlueWhale b;
    
    m.display();
    mar.display2();
    b.display3();

    b.display();
    b.display2();

    return 0;
}

