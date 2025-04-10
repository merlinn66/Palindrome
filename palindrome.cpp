#include <iostream>
#include <cctype>
#include <string>
#include <stack>
#include <queue>
#include <cassert>

using namespace std;

int main () {
    queue<char> q;
    stack<char> s;
    char letter;
    queue<char>::size_type failed_match = 0;

    cout << "Enter a line to check if it is a palindrome: ";

    while (cin.peek() != '\n') {
        cin >> letter;

        if (isalpha(letter)) {

            q.push(toupper(letter));
            s.push(toupper(letter));
        }
    }

    while ((!q.empty()) && (!q.empty())) {
        if (q.front() != s.top()) 
        failed_match++;

        q.pop();
        s.pop();

    }
    if (failed_match == 0) 
        cout << "Palindrome found!" << endl;

    else 
        cout << "Phrase is not a palindrome!" << endl;

    
    return 0;
}
