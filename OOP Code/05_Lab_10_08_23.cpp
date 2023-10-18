// #include <bits/stdc++.h>
// using namespace std;

// class student_information {
//     public:
//     string name;
//     int batch, id;
//     void info_taker() {
//         cout<<"Input your name, batch and id: "<<endl;
//         cin>> name>> batch >> id;
//     }  
//     void put_info() {
//         cout<<"Name : "<<name<<endl;
//         cout<<"Batch : "<<batch<<endl;
//         cout<<"ID : "<<id<<endl;
//     }
// };

// int32_t main() {
//     ios_base::sync_with_stdio(false); 
//     cin.tie(nullptr); 
    
//     student_information S1,S2,S3;
//     S1.info_taker();
//     S1.put_info();

//     S2.info_taker();
//     S2.put_info();

//     S3.info_taker();
//     S3.put_info();
    
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// class student_information {
//     public:
//     string name;
//     int batch, id;
//     void info_taker() {
//         cout<<"Input your name, batch and id: "<<endl;
//         cin>> name>> batch >> id;
//     }  
//     void put_info() {
//         cout<<"Name : "<<name<<endl;
//         cout<<"Batch : "<<batch<<endl;
//         cout<<"ID : "<<id<<endl;
//     }
// };

// int main() {
    
//     int n;
//     cout<<"Input total number of students: ";
//     cin >> n;

//     student_information s[n];
//     for(int i=0; i<n; i++) {
//         s[i].info_taker();
//     }
//     cout<<endl;

//     for(int i=0; i<n; i++) {
//         cout<<"Student "<<i+1<<" Information : "<<endl;
//         s[i].put_info();
//         cout<<endl;
//     }

    
//     return 0;
// }

// user input hours minutes ... 

// #include <bits/stdc++.h>
// using namespace std;

// class calculate{
//     public:
//     int hours,minutes,seconds;
//     int hours2,minutes2,seconds2;
//     void go_get_the_time() {
//         hours=10;
//         cout<<"Input 1st hours, minutes and seconds accordingly: ";   /// 25 55 53   10 6 40  93%60 == 1 // 93-1*60  
//         cin >> hours >> minutes >> seconds;                             // 33 sec 2 mint 36
//         cout<<"Input 2nd hours, minutes and seconds accordingly: ";
//         cin >> hours2 >> minutes2 >> seconds2;
//     }
//     void mathCal() {
//         int sec=0,mint=0,hr=0;
//         if(seconds+seconds2>60) {
//             int secMod= (seconds+seconds2)/60; // mintue ber hbe mod diye
//             sec= (seconds2+seconds) - secMod*60; // sec calcula
//             mint+=secMod; // mint calc
//         }
//         else sec=seconds+seconds2;
//         if(minutes+minutes2>60) {
//             int minMod= (minutes+minutes2) / 60;
//             mint= mint+ (minutes+minutes2)- minMod*60;
//             hr+=minMod;
//         }
//         else mint=minutes+minutes2;
//         hr=hr+hours+hours2;
//         cout<<"Total calculated time: "<<hr<<" hours "<<mint<<" minutes "<<sec<<" seconds "<<endl;
//     }

    
// };

// int32_t main() {
//     cin.tie(0)->sync_with_stdio(0);
//     cin.exceptions(cin.failbit);
    
//     calculate c;
//     c.go_get_the_time();
//     c.mathCal();
    
//     return 0;
// }



// inheritance

// #include <bits/stdc++.h>
// using namespace std;

// class Rectangle{
//     public:
//     int length,height;
//     void getRec() {
//         cout<<"Get len and hei : ";
//         cin >> length >> height;
//     }
//     int reCarea() {
//         return length*height;
//     }
//     void dataRec(){
//         cout<<"Length: "<<length<<endl<<"Height: "<<height<<endl;
//         cout<<"area: "<<reCarea()<<endl;
//     }
// };

// class Block:public Rectangle {
//     public:
//     int depth;
//     void getBlock() {
//         cout<<"Get depth and height and length : ";
//         cin >> depth >> height >> length;
//     }
//     int BlockArea() {
//         return depth*height*length;
//     }
//     void dataBlock() {
//         cout<<"Depth: "<<depth<<endl<<"Height :"<<height<<endl<<"Length: "<<length<<endl;
//         cout<<"area: "<<BlockArea()<<endl; 
//     }
// };

// int main() {
//     Rectangle r; // 
//     Block b;

//     r.getRec();
//     r.dataRec();

//     b.getBlock();
//     b.dataBlock();


//     return 0;
// }
// // 4 ta total 
#include <bits/stdc++.h>
using namespace std;

class calculate{

    int hours,minutes,seconds;
    int hours2,minutes2,seconds2;
        public:
    void go_get_the_time() {
        // cout<<"Input 1st hours, minutes and seconds accordingly: ";   /// 25 55 53   10 6 40  93%60 == 1 // 93-1*60  
        cin >> hours >> minutes >> seconds;                             // 33 sec 2 mint 36
        // cout<<"Input 2nd hours, minutes and seconds accordingly: ";
        cin >> hours2 >> minutes2 >> seconds2;
    }
    friend void mathCal(calculate c);
    
};
    void mathCal(calculate c) {
                int sec=0,mint=0,hr=0;
        if(c.seconds+c.seconds2>60) {
            int secMod= (c.seconds+c.seconds2)/60; // mintue ber hbe mod diye
            sec= (c.seconds2+c.seconds) - secMod*60; // sec calcula
            mint+=secMod; // mint calc
        }
        else sec=c.seconds+c.seconds2;
        if(c.minutes+c.minutes2>60) {
            int minMod= (c.minutes+c.minutes2) / 60;
            mint= mint+ (c.minutes+c.minutes2)- minMod*60;
            hr+=minMod;
        }
        else mint=c.minutes+c.minutes2;
        hr=hr+c.hours+c.hours2;
        cout<<"Total calculated time: "<<hr<<" hours "<<mint<<" minutes "<<sec<<" seconds "<<endl;
    }

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    
    calculate x;
    x.go_get_the_time();
    mathCal(x);
  
    return 0;
}

