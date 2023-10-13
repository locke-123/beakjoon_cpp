#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Profile{
    int age;
    int num;
    string s;
};

vector<Profile> arr;

bool comp(Profile a, Profile b){
    if(a.age == b.age){
        return a.num < b.num;
    } else {
        return a.age < b.age;
    }
}

int main(){
    //freopen("i.txt", "r", stdin);

    int N;
    cin >> N;
    for(int i=0; i<N; i++){
        int age;
        string s;
        cin >> age >> s;
        Profile prof;
        prof.age = age;
        prof.num = i;
        prof.s = s;
        arr.push_back(prof);
    }
    sort(arr.begin(),arr.end(), comp);

    for(int i=0; i<N; i++){
        cout << arr[i].age << " " << arr[i].s << '\n';
    }

    return 0;
}