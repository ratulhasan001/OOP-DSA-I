#include <bits/stdc++.h>
using namespace std;

list<int>l;
const int MAX = 5;
class Stack {
    public:
    void Push(int value) {
        if(l.size() == MAX) {
            cout << "Overflow!" << '\n';
            return;
        }
        l.push_back(value);
    }
    void Pop() {
        if(l.size() == 0) {
            cout << "Underflow!" << '\n';
            return;
        }
        l.pop_back();
    }
    int Top() {
        return l.front();
    }
    void display() {
        list<int> :: reverse_iterator it;
        for(it = l.rbegin(); it != l.rend(); ++it) {
            cout << *it << " ";
        }
        cout << '\n';
    }

};

int main() {

    Stack s;
    int method, flag = 1;
    while(flag) {
        cin >> method;
        switch(method) {
            case 1:
                int value;
                cin >> value;
                s.Push(value);
                break;
            case 2:
                s.Pop();
                break;
            case 3:
                s.display();
                break;
            case 4:
                cout << s.Top();
                break;
            case 5:
                flag = 0;
                break;
            default:
                break;
        }
    }
    return 0;
}