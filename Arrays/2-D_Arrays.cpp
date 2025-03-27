#include <iostream>
using namespace std;

int findMinValue(int arr[3][3], int rowSize, int colSize){
    int min = INT_MAX;
    for(int i = 0;i<rowSize;i++){
        for(int j = 0;j<colSize;j++){
            if(arr[i][j] < min){
                min = arr[i][j];
            }
        }
    }
    return min;
}

int findMaxValue(int arr[3][3], int rowSize, int colSize){
    int maxA = INT_MIN;
    for(int i = 0;i<rowSize;i++){
        for(int j = 0;j<colSize;j++){

            //One Way
            // if(arr[i][j] > max){
            //     max = arr[i][j];
            // }

            // Another Way
            maxA = max(arr[i][j],maxA);
        }
    }
    return maxA;
}

void printRowSum(int arr[][4], int rowSize, int colSize) {
    for(int i=0; i<rowSize; i++) {
        int sum = 0;
        //hr row k liye sum starting me 0 hai
        for(int j=0; j<colSize; j++) {
            sum = sum + arr[i][j];
        }
        //jab saare column k element add krliye hai
        //toh fer print krdo
        cout << sum << endl;
    }
    
}

void printColumnSum(int arr[][4], int rowSize, int colSize) {
    for(int col=0; col<colSize; col++) {
        //hr column k liye mere pass sum = 0 hona chahiye 
        int sum = 0;
        for(int row=0; row<rowSize; row++) {
            sum = sum + arr[row][col];
        }
        cout << sum << endl;
    }

}

void printDiagnolSum(int arr[][3], int rowSize, int colSize) {
    int sum = 0;
    for(int i=0; i<rowSize; i++) {
        sum = sum + arr[i][i];
    }
    cout << "Sum: " << sum << endl;

    //Another way: but TC = O(n^2)
    // int sum = 0;
    // for(int i=0; i<rowSize; i++) {
    //     for(int j=0; j<colSize; j++) {
    //         if(i == j) {
    //             sum = sum + arr[i][j];
    //         }
    //     }
    // }
    // cout << "sum " << sum <<endl;
}

void transposeMatrix(int arr[][3], int rowSize, int colSize) {
    //same array me hi transpose karo
    for(int i=0; i<rowSize; i++) {
        for(int j=i; j<colSize; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }
    //printing
    cout << "printint the transpose" << endl;
    for(int i=0; i<rowSize; i++) {
        for(int j=0; j<colSize; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    //Another way: if saving in different array
    // int ans[100][100] = {0};
    // for(int i=0; i<rowSize; i++) {
    //     for(int j=0; j<colSize; j++) {
    //         ans[i][j] = arr[j][i];
    //     }
    // }
    // for(int i=0; i<rowSize; i++) {
    //     for(int j=0; j<colSize; j++) {
    //         cout << ans[i][j] << " ";
    //     }cout << endl;
    // }
}

int main(){
    //initializing a 2-D array
    // int arr[3][2]= {
    //     {1,2},
    //     {3,4},
    //     {5,6}
    // };
    //int arr[3][2] = {1,2,3,4,5,6};

    //Fill method in 2-D array
    // int arr[3][2];
    // fill(arr[0], arr[0]+6, 23);

    // int arr[4][4]= {
    //     {1,2,3},
    //     {4,5,6},
    //     {7,8,9}
    // };

    //Printing the 2-D array row wise
    // for(int i = 0;i<3;i++){
    //     for(int j = 0;j<2;j++){
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    //Printing the 2-D array column wise        
    // for(int col = 0;col<2;col++){
    //     for(int row = 0;row<3;row++){
    //         cout << arr[row][col] << " ";
    //     }
    //     cout << endl;
    // }

    //Printing the squrare matrix   
    //  for(int row = 0;row<3;row++){
    //     for(int col = 0;col<3;col++){
    //         cout << arr[col][row] << " ";
    //     }
    //     cout << endl;
    // }

    //Printing the diagonal elements
    // int size=4;
    //  for(int row = 0;row<size;row++){
    //     cout << arr[row][row] << " ";
    // }

    // //Printing the diagonal elements frm right
    // int size=4;
    //  for(int row = 0;row<size;row++){
    //     cout << arr[row][size-1-row] << " ";
    // }

    //Taking the input of 2-D array row wise
    // int rowSize = 2;
    // int colSize = 3;
    // int arr[rowSize][colSize];
    // for(int i = 0;i<rowSize;i++){
    //     for(int j = 0;j<colSize;j++){
    //         cout << "Enter the value of arr[" << i << "][" << j << "]: ";
    //         cin >> arr[i][j];
    //     }
    // }
    // for(int i = 0;i<rowSize;i++){
    //     for(int j = 0;j<colSize;j++){
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    //Taking the input of 2-D array column wise
//     int rowSize = 2;
//     int colSize = 3;
//     int arr[rowSize][colSize];
//     for(int j = 0;j<colSize;j++){
//         for(int i = 0;i<rowSize;i++){
//             cout << "Enter the value of arr[" << i << "][" << j << "]: ";
//             cin >> arr[i][j];
//         }
//     }
//    for(int i = 0;i<rowSize;i++){
//         for(int j = 0;j<colSize;j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//    }

//Question: Find min value in 2-D array
// int arr[3][3] = {{4,2,3},{4,-9,6},{7,1,9}};  
// int min = findMinValue(arr,3,3);
// cout << "The min value is: " << min << endl;

//Question: Find max value in 2-D array
// int arr[3][3] = {{4,2,3000},{4,-9,600},{7,1,9}};  
// int max = findMaxValue(arr,3,3);
// cout << "The max value is: " << max << endl;

int arr[3][3] = {
                    {10,11,12},
                    {20,21,22},
                    {30,31,32}
                    };
    int rowSize = 3;
    int colSize = 3;

//Question: Transpose of a matrix
    transposeMatrix(arr,rowSize, colSize);

//Question: Print the diagonal sum
    //printDiagnolSum(arr,rowSize,colSize);
    
//Question: Print the column sum
    //printColumnSum(arr,rowSize,colSize);

//Question: Print the row sum
    //printRowSum(arr,rowSize,colSize);

}


