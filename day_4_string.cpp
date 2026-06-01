// QUESTION--> NON REPEATING CHARACTER...................................
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str;
//     cin >> str;

//     int freq[256]={0};
//     for(int i=0;i<str.length();i++){
//         freq[str[i]]++;
//     }
//     for(int i=0;i<str.length();i++){
//         if(freq[str[i]]==1){
//             cout<<str[i];
//             return 0;
//         }
//     }
//     cout << "-1";
//     return 0;


// }



// QUESTION-->left rotation or right rotation....................................
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str;
//     int n;

//     cout << "Enter string: ";
//     cin >> str;

//     cout << "Enter rotation value: ";
//     cin >> n;

//     int len = str.length();
//     n = n % len;

//     // LEFT ROTATION
//     string leftRotate = str.substr(n) + str.substr(0, n);

//     for (int i = 0; i < n; i++) {
//         leftRotate[len - n + i] = toupper(leftRotate[len - n + i]);
//     }

//     cout << "Left Rotation Output: " << leftRotate << endl;

//     // RIGHT ROTATION
//     string rightRotate = str.substr(len - n) + str.substr(0, len - n);

//     for (int i = 0; i < n; i++) {
//         rightRotate[i] = toupper(rightRotate[i]);
//     }

//     cout << "Right Rotation Output: " << rightRotate << endl;

//     return 0;
// }



// QUESTION--> STRING DECODE............................................
#include <iostream>
#include <stack>
using namespace std;

int main() {

    string s;
    cin >> s;

    stack<int> numStack;
    stack<string> strStack;

    string currentString = "";
    int currentNum = 0;

    for (char ch : s) {

        if (isdigit(ch)) {
            currentNum = currentNum * 10 + (ch - '0');
        }

        else if (ch == '[') {

            numStack.push(currentNum);
            strStack.push(currentString);

            currentNum = 0;
            currentString = "";
        }

        else if (ch == ']') {

            int repeat = numStack.top();
            numStack.pop();

            string temp = currentString;

            currentString = strStack.top();
            strStack.pop();

            for (int i = 0; i < repeat; i++) {
                currentString += temp;
            }
        }
        else {
            currentString += ch;
        }
    }

    cout << currentString;

    return 0;
}