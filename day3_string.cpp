// QUESTION -->  string palindrome....................

// #include<iostream>
// #include<string>
// #include<algorithm>

// using namespace std;
// int main(){
//     string str,rev;
//     cout << "enter string:";
//     cin >> str;

//     rev=str;
//     reverse(rev.begin(),rev.end());
//     if(str==rev){
//         cout<<str<<"this is palindrome string";
//     }
//     else{
//         cout<<str<<"this is not a palindrome string";
//     }
// }

// ====> ANOTHER APPROACH........................................
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str;
//     cout<<"enter string";
//     cin >> str;

//     int start=0;
//     int end=str.length()-1;

//     bool palindrome=true;

//     while(start<end){
//         if(str[start]!=str[end]){
//             palindrome=false;
//             break;
//         }
//         start++;
//         end--;
//     }
//     if(palindrome){
//         cout << str<<"this is a palindrome";
//         }

//         else{
//             cout<<str<<"this is not a palindrome";
//         }
//         return 0;
// }


// QUESTION==> REMOVE VOWELS.....................................
// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string str,res="";
//     cout<<"enter string:";
//     getline(cin,str);

    
//     for(int i=0;i<str.length();i++){

//         char ch=toupper(str[i]);

//          if(ch !='A' && ch !='E' && ch !='I' && ch !='O' && ch !='U' ){
//             res=res+str[i];
//          }
//     }
//     cout<<res;

// }

// QUESTION==> REMOVE DUPLICATES FROM STRING................................

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str, result="";
//     cout << "enter string :";
//     cin >> str;

//     for(int i=0;i<str.length();i++){
//         bool duplicate=false;
//         for(int j=0;j<str.length();j++){
//             if(str[i]==result[j]){
//                 duplicate=true;
//                 break;
//             }
//         }
//         if(!duplicate){
//             result=result+str[i];
//         }
//     }
//     cout << result;
//     return 0;
// }


// QUESTION==> FIND FIRST NON REPEATING CHARATER IN STRING.................

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str;
//     cout << "enter string:";
//     cin >> str;
        
//     int freq[256]={0};

//     for(int i=0;i<str.length();i++){
//          freq[str[i]]++;
//     }
//     for(int i=0;i<str.length();i++){
//         if(freq[str[i]]==1){
//             cout<<"first non repeating character :"<<str[i];
//             return 0;
//         }
//     }
//     cout<<"no non repeating";
//     return 0;
// }


// QUESTION==>CHECK IF TWO STRING ARE ANAGRM OR NOT...........................................

// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
//     string str,str1;
//     cout<<"enter two string"<<endl;
//     cin>>str;
//     cin>>str1;

//     if(str.length()!=str1.length()){
//         cout<<"these strings are not anagram";
//         return 0;
//     }

//     sort(str.begin(),str.end());
//     sort(str1.begin(),str1.end());

//       if(str==str1){
//         cout <<"theses string are anagram";
//       }

//       else{
//         cout<<"not anagram";
//       }

//       return 0;

// }


// QUESTION ==>LONGEST COMMON PREFIX......................................

// #include<iostream>
// #include<vector>
// #include<algorithm>
//  using namespace std;

//  int main(){
//     int n;
//     cout<<"enter number of string:";
//     cin >>n;

//     vector<string> str(n);

//     for(int i=0;i<n;i++){
//         cin >> str[i];
//     }
     
//     sort(str.begin(),str.end());
//     string first=str[0];
//     string last=str[n-1];

//     string ans=" ";

//     for(int i=0;i<first.length();i++){
//         if(first[i]==last[i]){
//             ans=ans+first[i];
//         }
//         else{
//             break;
//         }
//     }

//     cout<<"longest common prefix: " << ans;
//     return 0;

//  }

// QUESTION==>longest common subsequence..............................
// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
//     string s1, s2;

//     cout << "Enter first string: ";
//     cin >> s1;

//     cout << "Enter second string: ";
//     cin >> s2;

//     int n = s1.length();
//     int m = s2.length();

//     vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= m; j++) {
//             if(s1[i - 1] == s2[j - 1]) {

//                 dp[i][j] = 1 + dp[i - 1][j - 1];
//             }
//             else {
//                 dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//             }
//         }
//     }
//     cout << "Length of Longest Common Subsequence: " << dp[n][m];
//     return 0;
// }

// QUESTION==> STRING COMPRESSION...............................
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str;
//     cout<<"enter string";
//     cin>>str;
    
//     int count=1;
//     for(int i=0;i<str.length();i++){
//         while(i<str.length()-1 && str[i]==str[i+1]){
//             count++;
//             i++;
//         }
//         cout<<str[i] <<count;
//         count=1;
//     }
//     return 0;
// }



// QUESTION==>valid parenthesis.......................................
#include<iostream>
#include<stack>
using namespace std;
int main() {
    string str;

    cout << "Enter parentheses string: ";
    cin >> str;

    stack<char> st;

    for(int i = 0; i < str.length(); i++) {
        char ch = str[i];
        if(ch == '(' || ch == '{' || ch == '[') {

            st.push(ch);
        }
          else {
            if(st.empty()) {

                cout << "Invalid";
                return 0;
            } 

            if((ch == ')' && st.top() == '(') ||
               (ch == '}' && st.top() == '{') ||
               (ch == ']' && st.top() == '[')) {

                st.pop();
            }
            else {

                cout << "Invalid";
                return 0;
            }
        }
    }

    if(st.empty()) {
        cout << "Valid";
    }
    else {
        cout << "Invalid";
    }

    return 0;
}







