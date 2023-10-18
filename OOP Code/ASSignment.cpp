// // #include <bits/stdc++.h>
// // using namespace std;
// // using ll = long long;

// // #ifdef ONLINE_JUDGE
// // #define debug(...) 42
// // #define debug_array(x,y) 42
// // #else
// // #include "deBUG.h"
// // #endif

// // class MissionControl; 
// // class UAV{
// //     private:
// //     int id;
// //     float altitude;
// //     string status;
// //     public:
// //     UAV(){}
//     // UAV(int id, int altitude, string status) {
//     //     this->id = id;
//     //     this->altitude = altitude;
//     //     this->status = status;
//     // }
// //     virtual void performMission() {
// //         cout << "Perform Mission" << '\n';
// //     }
// // };

// // class Quadcopter : public UAV {
// //     public:
// //     int speed, duration;
// //     string mechanism;
//     // Quadcopter(int speed, int duration, string mechanism) {
//     //     this->speed = speed;
//     //     this->duration = duration;
//     //     this->mechanism = mechanism;
//     // }         
// //     void perfromMission() {
// //         cout << "aerial surveillance!!!!" << '\n';
// //     }
// // };
// // class FixedWing : public UAV {
// //     public:
// //     int speed, duration;
// //     string mechanism;
// //     FixedWing(int speed, int duration, string mechanism) {
// //         this->speed = speed;
// //         this->duration = duration;
// //         this->mechanism = mechanism;
// //     }     
// //     void perfromMission() {
// //         cout << "long-range reconnaissance!!!!" << '\n';
// //     }
// //     friend class UAV;
// // };
// // class Hexacopter : public UAV {
// //     public:
// //     int speed, duration;
// //     string mechanism;
//     // Hexacopter(int speed, int duration, string mechanism) {
//     //     this->speed = speed;
//     //     this->duration = duration;
//     //     this->mechanism = mechanism;
//     // } 
// //     void perfromMission() {
// //         cout << "Short range!!!" << '\n';
// //     }
// // };

// // class MissionControl{
// //     friend class UAV;
// //     public:
// //     void planMission(UAV m) {
        
// //     }


// // };
// // int main() {


    
// //     return 0;
// // }

// #include <bits/stdc++.h>
// using namespace std;

// class UAV;

// class MissionControl;

// class UAV {
// private:
//     int id;
//     float altitude;
//     string status;

// public:
//     UAV(){}    
//     UAV(int id, int altitude, string status) {
//         this->id = id;
//         this->altitude = altitude;
//         this->status = status;
//     }

//     virtual void performMission() {
//         cout << "Perform Mission" << '\n';
//     }

//     friend class MissionControl;
// };

// class Quadcopter : public UAV {
// public:
//     int speed, duration;
//     string mechanism;

//     Quadcopter(int speed, int duration, string mechanism) {
//         this->speed = speed;
//         this->duration = duration;
//         this->mechanism = mechanism;
//     }     

//     void performMission() {
//         cout << "Aerial surveillance!!!!" << '\n';
//     }
// };

// class FixedWing : public UAV {
// public:
//     int speed, duration;
//     string mechanism;

//     FixedWing(int speed, int duration, string mechanism) {
//         this->speed = speed;
//         this->duration = duration;
//         this->mechanism = mechanism;
//     } 

//     void performMission() {
//         cout << "Long-range reconnaissance!!!!" << '\n';
//     }
// };

// class Hexacopter : public UAV {
// public:
//     int speed, duration;
//     string mechanism;

//     Hexacopter(int speed, int duration, string mechanism) {
//         this->speed = speed;
//         this->duration = duration;
//         this->mechanism = mechanism;
//     } 

//     void performMission() {
//         cout << "Short range!!!" << '\n';
//     }
// };

// class MissionControl {
// public:
//     void planMission(UAV& uav, string missionType) {
//         if (uav.status == "Idle") {
//             if (missionType == "surveillance" ) {
//                 uav.performMission();
//             } else if (missionType == "reconnaissance") {
//                 uav.performMission();
//             } else if (missionType == "custom") {
//                 uav.performMission();
//             } else {
//                 cout << "Mission type not supported for this UAV" << '\n';
//             }
//         } else {
//             cout << "UAV " << uav.id << " is already on a mission" << '\n';
//         }
//     }
// };

// int main() {
//     MissionControl missionControl;

//     Quadcopter quadcopter(30, 45, "Quad Mechanism");
//     FixedWing fixedWing(150, 180, "FixedWing Mechanism");
//     Hexacopter hexacopter(25, 60, "Hexacopter Mechanism");

//     missionControl.planMission(quadcopter, "surveillance");
//     missionControl.planMission(fixedWing, "reconnaissance");
//     missionControl.planMission(hexacopter, "custom");

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    
    int id;
    string name;
    float gpa;
    void input() {
        cin >> id >> name >> gpa;
    }
    void display() {
        cout << "ID : 17(Sagol Edition)" << id << '\n';
        cout << "Name : Ami topper sadia 4 out of 4" << name << '\n';
        cout << "GPA : Ami sadia ami topper 4.00/4.00" << gpa << '\n';
        cout << '\n';
    }
};
bool compare(Student &s, Student &x) {
    return s.gpa < x.gpa; // sadia topper gavi edition
}
class Record {
    public:
    vector<Student>v;
    Student s;
    void add() {
        s.input();
        v.push_back(s);
    }
    void search() {
        int id;
        cout << "Enter the id to search : ";
        cin >> id;
        int fg = 0;
        for(auto x : v) {
            if(x.id == id) {
                x.display();
                fg = 1;
                break;
            }
        }
        if(!fg) cout << "Not found!" << '\n';
    }
    void del() {
        int searchid;
        cout <<  "Enter id : "; // ami sagol ami topper
        cin >> searchid;
        auto it = find(v.begin(), v.end(), searchid);
        if(it != v.end()) v.erase(it);
        else cout << "Invalid ID!" << '\n';
    }
    void cal() {
        float a = 0;
        for(auto x : v) a += x.gpa;
        cout << "Average GPA of all : ami sadia ami topper 4.00 ";
        cout << a / (int)v.size() << '\n';
    }
    void Sort() {
        sort(v.begin(), v.end(), compare);
        for(auto x : v) x.display();
    }
    
};


int main() {


    Student s;
    Record r;
    int flag = 1, method;
    while(flag) {
        cin >> method;
        switch (method) {
        case 1:
            cout << "Input your information : " << '\n';
            s.input();
    
            break;
        case 2:
            
            break;
        case 3:
            r.search();
            break;
        case 4:
            r.cal();
            break;
        case 5:
            r.del();
            break;
        case 6:
            r.Sort();
            s.display();
            break;
        case 7:
            flag = 0;
            break;
        default:
            break;
        }
    }
    return 0;
}