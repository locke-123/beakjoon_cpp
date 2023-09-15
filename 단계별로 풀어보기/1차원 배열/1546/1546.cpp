#include <iostream>

using namespace std;

int main(){
    // freopen("i.txt", "r", stdin);
    int N;
    cin >> N;

    double arr[N];
    int max = 0;
    for(int i=0; i<N; i++){
        int num;
        cin >> num;
        arr[i] = num;
        if(arr[i] > max){
            max = arr[i];
        }
    }

    double sum = 0;
    for(int i=0; i<N; i++){
        arr[i] = (arr[i]/max)*100;
        sum = sum + arr[i];
    }


    printf("%.14f", sum/N);

    return 0;
}