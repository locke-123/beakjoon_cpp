#include <iostream>

using namespace std;

int main(){
    //freopen("i.txt", "r", stdin);

    double amount = 0;
    double sum = 0;
    string s;
    double score;
    string grade;
    double gradeScore;

    for(int i=0; i<20; i++) {
        cin >> s;
        cin >> score;
        cin >> grade;

        if(grade == "P"){
            continue;
        } else {
            if(grade[0] == 'A') {
                gradeScore = 4;
            } else if(grade[0] == 'B') {
                gradeScore = 3;
            } else if(grade[0] == 'C') {
                gradeScore = 2;
            } else if(grade[0] == 'D') {
                gradeScore = 1;
            } else if(grade[0] == 'F') {
                gradeScore = 0;
            }

            if(grade[0] != 'F' && grade[1] == '+') {
                gradeScore += 0.5;
            }
        }
        sum += score*gradeScore;
        amount += score;
    }

    cout << fixed;
    cout.precision(6);
    cout << sum/amount;
    
    return 0;
}