// //find vowels in string and count and show.......................


// #include<iostream>
// using namespace std;

// int main(){
//     string str;
//     int count=0;

//     cout << "enter a string:";
//     getline(cin,str);

//     cout << "vowel are:";

//     for(int i=0;i<str.length();i++){
//         char ch=tolower(str[i]);
//         if(ch=='a' || ch=='e'|| ch=='i' || ch=='o' || ch=='u'){
//             cout << ch << " ";
//             count++;
//         }
//     }
//     cout << "\ntotal vowels=" << count ;
//     return 0;
// }




// find consonants cound and show.....................................

// #include<iostream>
// using namespace std;
// int main(){
//     string str;
//     int count=0;
//     cout<< "enter string:";
//     getline(cin,str);

//     cout << "consonants are:";
//     for(int i=0;i<str.length();i++){
//         char ch=tolower(str[i]);
//         if((ch >='a' && ch <='z') && !(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')){
//             cout << ch << " ";
//             count++;
//         }
//     }
//     cout << "\ntotal consonants= " << count;
//     return 0;
// }


//find largest and smallest element in array.....................................

// #include<iostream>
// using namespace std;
// int main(){
//     int n;

//     cout << "enter size:";
//     cin >> n;

//     int arr[n];
//     cout << "enter element:";

//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int largest =arr[0];
//     int smallest =arr[0];
//     for(int i=1;i<n;i++){
//         if(arr[i]>largest){
//             largest=arr[i];
//         }
//         if(arr[i]<smallest){
//             smallest=arr[i];
//         }
//     }
//     cout << "largest element" << largest << " ";
//     cout << "smallest element" << smallest;
//     return 0;
// }

//reverse each row in matrix.....................

// #include <iostream>
// using namespace std;

// int main() {
//     int rows, cols;

//     cout << "Enter rows: ";
//     cin >> rows;

//     cout << "Enter columns: ";
//     cin >> cols;

//     int matrix[rows][cols];
//     cout << "Enter matrix elements:\n";

//     for(int i = 0; i < rows; i++) {
//         for(int j = 0; j < cols; j++) {

//             cin >> matrix[i][j];
//         }
//     }

    
//     for(int i = 0; i < rows; i++) {

//         int start = 0;
//         int end = cols - 1;

//         while(start < end) {

//             int temp = matrix[i][start];
//             matrix[i][start] = matrix[i][end];
//             matrix[i][end] = temp;

//             start++;
//             end--;
//         }
//     }

    
//     cout << "\nMatrix after reversing rows:\n";

//     for(int i = 0; i < rows; i++) {
//         for(int j = 0; j < cols; j++) {

//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


//sum of boundry elementin matrix................

// #include <iostream>
// using namespace std;

// int main() {

//     int rows, cols;

//     cout << "Enter rows: ";
//     cin >> rows;

//     cout << "Enter cols: ";
//     cin >> cols;

//     int matrix[rows][cols];
//     cout << "Enter matrix elements:\n";
//     for(int i = 0; i < rows; i++) {

//         for(int j = 0; j < cols; j++) {
//             cin >> matrix[i][j];
//         }
//     }

//     int sum = 0;  
//     for(int i = 0; i < rows; i++) {
//         for(int j = 0; j < cols; j++) {    
//             if(i == 0 || i == rows-1 || j == 0 || j == cols-1) {

//                 sum = sum + matrix[i][j];
//             }
//         }
//     }

//     cout << "Boundary sum = " << sum;
//     return 0;
// }


//delete smallest element in array...............
#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    int smallest = arr[0];
    int index = 0;

    for(int i = 1; i < n; i++) {

        if(arr[i] < smallest) {
            smallest = arr[i];
            index = i;
        }
    }

    
    for(int i = index; i < n-1; i++) {

        arr[i] = arr[i+1];
    }

    
    n--;

    
    cout << "Array after deleting smallest element:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}