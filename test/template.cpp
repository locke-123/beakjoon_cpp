#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> arr;

int main(){
    freopen("i.txt", "r", stdin);
    string s;
    int e = 0;
    getline(cin, s);
    for(int i=0; i<s.length(); i++){
        if(s[i] == '['){
            string selectedText = "";
            i+=2; // 첫 텍스트부터
            int firstIndex = i;
            vector<int> numberFirst;
            while (true)
            {
                selectedText += s[i];
                int refNum;
                if(s[i+2] == ']'){
                    auto it = find(arr.begin(), arr.end(), selectedText);
                    if(it == arr.end()){ //없음
                        arr.push_back(selectedText);
                        refNum = arr.size();
                    } else { //있음
                        refNum = it - arr.begin() + 1;
                    }
                    numberFirst.push_back(firstIndex);
                    s.replace(firstIndex, i-firstIndex+1, to_string(refNum));
                    e = i-firstIndex;
                    i -= e-2;
                    selectedText = "";
                    break;
                } else if(s[i+1] == ','){
                    auto it = find(arr.begin(), arr.end(), selectedText);
                    if(it == arr.end()){ //없음
                        arr.push_back(selectedText);
                        refNum = arr.size();
                    } else { //있음
                        refNum = it - arr.begin() + 1;
                    }
                    numberFirst.push_back(firstIndex);
                    s.replace(firstIndex, i-firstIndex+1, to_string(refNum));
                    selectedText = "";
                    i+=2;
                    e = i-firstIndex;
                    i -= e-2;
                    firstIndex = i+1;
                }
                i++;
            }
            vector<int> indexVal;
            for(int index: numberFirst){
                indexVal.push_back(s[index]-'0');
            }
            sort(indexVal.begin(), indexVal.end());
            for(int i=0; i<numberFirst.size(); i++){
                s.replace(numberFirst[i], 1, to_string(indexVal[i]));
            }
            numberFirst.clear();
        }
    }
    cout << s << endl;
    for(int i=0; i<arr.size(); i++){
        cout << "[ " << i+1 << " ] " << arr[i] << endl;
    }

    return 0;
}