#include <bits/stdc++.h>
using namespace std;

int evaluate(string str) {
    stack<int>s;
    for(int i = 0; i < (int)str.size(); i++) {
        if(isdigit(str[i])) s.push(str[i] - '0');
        else {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            switch(str[i]) {
                case '+':
                    s.push(b + a);
                    break;
                case '-':
                    s.push(b - a);
                    break;
                case '/':
                    s.push(b / a);
                    break;
                case '*':
                    s.push(b * a);
                    break;
            }
        }
    }
    return s.top();
}

int main() {
    string s;
    cin >> s;
    cout << evaluate(s) << '\n';
    return 0;
    // 231*+9-     -4
}