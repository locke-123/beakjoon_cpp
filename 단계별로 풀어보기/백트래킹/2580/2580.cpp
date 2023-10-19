#include <iostream>
#include <vector>
using namespace std;
vector<int> listX;
vector<int> listY;
int arr[9][9];
bool isFinished = false;

bool promise(int n, int i){
    //가로 첵
    for(int x=0; x<9; x++){
        if(arr[listY[n]][x] == i){
            return false;
        }
    }
    //세로 첵
    for(int y=0; y<9; y++){
        if(arr[y][listX[n]] == i){
            return false;
        }
    }
    //3x3 첵
    int newX = (listX[n]/3)*3;
    int newY = (listY[n]/3)*3;
    for(int y=newY; y<=newY+2; y++){
        for(int x=newX; x<=newX+2; x++){
            if(arr[y][x] == i){
                return false;
            }
        }
    }
    
    return true;
}

void bt(int n){
    if(n >= listX.size()){
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                cout << arr[i][j] << ' ';
            } cout << '\n';
        }
        isFinished = true;
        return;
    }
    for(int i=1; i<=9; i++){
        if(promise(n, i)){
            arr[listY[n]][listX[n]] = i;
            bt(n+1);
            if(isFinished) return;
            arr[listY[n]][listX[n]] = 0;
        }
    }
}

int main(){
    //freopen("i.txt", "r", stdin);
    int num;
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cin >> num;
            if(num == 0){
                listY.push_back(i);
                listX.push_back(j);
            }
            arr[i][j] = num;
        }
    }
    bt(0);
    return 0;
}