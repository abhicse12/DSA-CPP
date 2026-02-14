#include <iostream>
#include<vector>

using namespace std;
bool isSafe(vector<string>&Board,int row,int col,int n){
    // horixontal
    for(int j=0;j<n;j++){
        if(Board[row][j]=='Q'){
            return false;
        }
    }
    // vertical
    for(int i=0;i<n;i++){
        if(Board[i][col]=='Q'){
            return false;
        }
    }
    //left diagonal
    for(int i=row,j=col;i>=0 && j>=0 ; i--,j--){
        if(Board[i][j]=='Q'){
            return false;
        }
    }
    // right diagonal
    for(int i=row,j=col;i>=0 && j<n;i--,j++){
        if(Board[i][j]=='Q'){
            return false;
        }
    }
    return true;
}
void nQueen(vector<string>& Board,int row,int n,vector<vector<string>>&ans){
    if(row==n){
        ans.push_back(Board);
        return;
    }
    for(int j=0;j<n;j++){
        if(isSafe(Board,row,j,n)){
            Board[row][j]='Q';
            nQueen(Board,row+1,n,ans);
            Board[row][j]='.';

        }
    }
}

vector<vector<string>>solveNQueen(int n){
    vector<string>Board(n,string(n,'.'));
    vector<vector<string>>ans;
    nQueen(Board,0,n,ans);
    return ans;
}
int main(){
    int n=4;
    auto ans=solveNQueen(n);
    for(auto &board:ans){
        for(auto &row:board){
            cout<<row<<endl;
        }
        cout<<endl;
    }
    
    
    return 0;

}