// // assign and print the roll number, phone number and address adn two students having names "Sam" and "John" respectively by creating two objects of the class 'Student' 
#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    int roll,phone;
    string name,address;
    void input() {
        cin >>name>> roll >> phone >> address;
    }
    void data_print() {
        cout<<"Name: "<<name<<'\n';
        cout<<"Roll: "<<roll<<'\n';
        cout<<"Phone Number: "<<phone<<'\n';
        cout<<"Adress: "<<address<<'\n';
    }
};

int main() {

    Student Sam;
    Student John;
    Sam.input();
    John.input();
    Sam.data_print();
    cout<<endl;
    John.data_print();
    return 0;
}



// write a program by creating an 'Employee' class having the following fucntions and print the final salary.
// 1- getInfo() which takes the salary, number of hours of work per day of employee as parameters
//2-  AddSal() which adds 10$ to the salary of the employee if it is less than 500$
// 3- AddWork() which adds 5$ to the salary of the employee if the number of hours of work per day is more than 6 hours

#include <bits/stdc++.h>
using namespace std;

class Employee{
    public:
    int salary, hours;

    void getInfo(int wages, int working_hours) {
        salary=wages;
        hours=working_hours;
    }
    int AddSal() {
        int total= salary*hours;
        if(total<500) {
            salary+=10;
        }
        total=salary*hours;
        return total;
    }
    int addWork() {
        int total_sal=AddSal();
        if(hours>6) {
            total_sal+=5*hours;
        }
        return total_sal;
    }
    void print() {
        cout<<"Total salary: "<<addWork()<<" $";
    }
};

int main() {

    Employee e;
    int x,y;
    cout<<"Input salary per hour: ";
    cin >> x;
    cout<<"Input total working hour: ";
    cin >> y;

    e.getInfo(x,y);
    e.print();

    return 0;
}