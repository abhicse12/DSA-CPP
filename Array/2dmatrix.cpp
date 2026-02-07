#include <iostream>
using namespace std;

pair <int,int> linearSearch(int mat[][3],int rows,int cols, int key){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(mat[i][j]==key){
              
                return make_pair(i,j);
            }
        }
    }
    return make_pair(-1,-1);
}
int main(){
    int matrix[4][3]={ {1,2,3}, {4,5,6},{7,8,9},{10, 11, 12} };
    int rows=4;
    int cols=3;
    int key=5;
    pair <int,int> pos=linearSearch(matrix,rows,cols,key);
    if(pos.first!=-1 && pos.second != -1){
        cout<<"Target found at row  "<<pos.first<<" column  "<<pos.second<<endl;
    }else{
        cout<<"target not found";
    };
   
    
    return 0;

}