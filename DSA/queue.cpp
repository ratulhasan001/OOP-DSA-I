#include <bits/stdc++.h>
using namespace std;

list<int>l;
const int MAX = 5;
class Queue {
    public:
    void Enq(int value) {
        if(l.size() == MAX) {
            cout << "Overflow!" << '\n';
            return;
        }
        l.push_back(value);
    }
    void Deq() {
        if(l.size() == 0) {
            cout << "Underflow!" << '\n';
            return;
        }
        l.pop_front();
    }
    void display() {
        list<int> :: iterator it;
        for(it = l.begin(); it != l.end(); ++it) {
            cout << *it << " ";
        }
        cout << '\n';
    }

};

int main() {

    Queue q;
    int method, flag = 1;
    while(flag) {
        cin >> method;
        switch(method) {
            case 1:
                int value;
                cin >> value;
                q.Enq(value);
                break;
            case 2:
                q.Deq();
                break;
            case 3:
                q.display();
                break;
            case 4:
                flag = 0;
                break;
            default:
                break;
        }
    }
    return 0;
}