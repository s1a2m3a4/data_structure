//In an array, a leader is an element that is greater than or equal to all the elements to its right side. The rightmost element is always a leader
//QUESTION->find leaders in an array.........................

// #include<iostream>
// #include<vector>
// using namespace std;

// void findleaders(vector<int>&arr){
//     int n=arr.size();
//     int max=arr[n-1];
//     cout << max << " ";

//     for(int i=n-2;i>=0;i--){
//         if(arr[i]>=max){
//             max=arr[i];
//             cout<< max<<" ";
//         }
//     }
// }
// int main(){
//     vector<int> arr={16,17,4,3,5,2};
//     cout << "leaders are:";
//     findleaders(arr);
//     return 0;
// }

// QUESTION->  Spiral Traversal of Matrix

// #include<iostream>
// #include<vector>

// using namespace std;
// int main(){
//     int r,c;
//     cout<< "enter size:"<<" ";
//     cin >> r >> c;

//     vector<vector<int>> arr(r,vector<int>(c));
//     cout << "enter matrix elements:\n";

//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             cin >> arr[i][j];
//         }
//     }
    
//     int top=0;
//     int bottom=r-1;

//     int left=0;
//     int right=c-1;

//     cout << "spiral traversal:";

//     while(top <= bottom && left <= right){
//        for(int i=left;i<=right;i++){
//         cout << arr[top][i]<< " ";
//        }
//        top++;

//         for(int i=top;i<=bottom;i++){
//         cout << arr[i][right]<< " ";
        
//        }
//        right--;

//          if(top <= bottom) {
//             for(int i = right; i >= left; i--) {
//                 cout << arr[bottom][i] << " ";
//             }
//             bottom--;
//         }


//         if(left <= right) {
//             for(int i = bottom; i >= top; i--) {
//                 cout << arr[i][left] << " ";
//             }
//             left++;
//         }
//     }

//     return 0;
//     }
     

    
// QUESTION-> diagonal matrix difference................................

// #include <iostream>
// #include <vector>

// using namespace std;
// int main() {

//     int n;

//     cout << "Enter size of square matrix: ";
//     cin >> n;

//     vector<vector<int>> arr(n, vector<int>(n));

//     cout << "Enter matrix elements:\n";

//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < n; j++) {
//             cin >> arr[i][j];
//         }
//     }

//     int primarySum = 0;
//     int secondarySum = 0;

//     for(int i = 0; i < n; i++) {

//         primarySum = primarySum + arr[i][i];
//         secondarySum = secondarySum + arr[i][n - 1 - i];
//     }

//     int difference = primarySum - secondarySum;

//     if(difference < 0) {
//         difference = -difference;
//     }

//     cout << "Diagonal Difference = " << difference;
//     return 0;
// }



// QUESTION-> ROTATE MATRIX BY 180 DEGREE.............................
// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {

//     int rows, cols;

//     cout << "Enter rows: ";
//     cin >> rows;

//     cout << "Enter cols: ";
//     cin >> cols;

//     vector<vector<int>> arr(rows, vector<int>(cols));
//     cout << "Enter matrix elements:\n";

//     for(int i = 0; i < rows; i++) {
//         for(int j = 0; j < cols; j++) {
//             cin >> arr[i][j];
//         }
//     }

//     cout << "\nRotated Matrix by 180 Degree:\n";

//     for(int i = rows - 1; i >= 0; i--) {
//         for(int j = cols - 1; j >= 0; j--) {
//             cout << arr[i][j] << " ";
//         }

//         cout << endl;
//     }

//     return 0;
// } 


// QUESTION-> sort 0s,1s,2s.......................................

// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {

//     vector<int> arr = {2, 0, 2, 1, 1, 0};

//     int low = 0;
//     int mid = 0;
//     int high = arr.size() - 1;

//     while(mid <= high) {
//         if(arr[mid] == 0) {
//            swap(arr[low], arr[mid]);

//             low++;
//             mid++;
//         }
//         else if(arr[mid] == 1) {
//             mid++;
//         }
//         else {

//             swap(arr[mid], arr[high]);
//             high--;
//         }
//     }

//     cout << "final Array:\n";

//     for(int i = 0; i < arr.size(); i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


// transpose of a matrix..................................
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){

//     int rows,cols;
//     cout<< "enter rows";
//     cin >>rows;
//     cout <<"enter cols:";
//     cin>> cols;

//    vector<vector<int>> arr(rows,vector<int>(cols));

//    cout << "enter elements of a matrix:\n";
//    for(int i=0;i<rows;i++){
//     for(int j=0;j<cols;j++){
//          cin >> arr[i][j];
//     }
//    }

//    cout << "transpose of a matrix:\n";
//    for(int i=0;i<cols;i++){
//     for(int j=0;j<rows;j++){
//         cout << arr[j][i] << " ";
//     }
//     cout << endl;
//    }
//    return 0;
// }