#include <iostream>
using namespace std;
int getmaxsum(int mat[][3],int rows, int cols){
    int maxsum=INT32_MIN;
    for(int i=0; i<rows;i++){
        int rowmaxsum=0;
        for(int j=0;j<cols;j++){
            rowmaxsum+=mat[i][j];

        }
        maxsum=max(maxsum,rowmaxsum);
    };
    return maxsum;
};
int main(){
    int matrix[3][3]={ {1,2,30},{4,5,6},{7,8,9}};
    int rows=3;
    int cols=3;
    cout<<getmaxsum(matrix,rows,cols)<<endl;
    
    return 0;

}