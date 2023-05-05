#include <bits/stdc++.h>

using namespace std;

string ROT13(string message) {
    string result = "";
    for (int i = 0; i < message.length(); i++) {
        if (isalpha(message[i])) {
            if (isupper(message[i])) {
                result += char((message[i] - 'A' + 13) % 26 + 'A');
            }
            else {
                result += char((message[i] - 'a' + 13) % 26 + 'a');
            }
        }
        else {
            result += message[i];
        }
    }
    return result;
}

void push(stack<int>& s, int i)
{
    s.push(i);
}

int main() {
    stack<int> s;
    for (int i = 5; i >= 0; i--)
        push(s, i);
    while (!empty(s))
    {
        cout << top(s) << " ";
        pop(s);
    }
}
