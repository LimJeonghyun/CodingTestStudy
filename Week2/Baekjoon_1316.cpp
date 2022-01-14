#include <iostream>
#include <vector>
using namespace std;

// 첫줄에 그룹 단어의 개수 출력
// 같은 글자에 반복이 있어야함
// ex) aab (O) aba (x)

// 갯수만큼 단어받기
// 단어 내에 글자수 찾기
// 

int main(){
    int size;
    cin >> size;
    int count = 0;

    string words;
    vector<char> word;
    int tmp;
    int tmpc;
    bool result = true;
    string tmpw="";

    // happy h a pp y
    for(int i=0; i<size; i++){
        cin >> words;
        if(words.size() != 1){
            int pos = 0;
            int k = 0;
            for(int j=0; j<words.length(); j++){
                if(find(word.begin(), word.end(), words[j]) !=  word.end()) continue; // 같은 글자 없는거
                word.push_back(words[j]);
                tmp = 0;
                tmpc = 0;
                while(words.find(words[j], pos) != string::npos){
                    cout << pos << words[j];
                    tmpw += words[j];
                    if(words.find(tmpw) == string::npos){
                        result = false;
                        break;
                    }
                    cout << "a: " <<tmpw << endl;
                    tmp = pos;
                    pos= words.find(words[j], pos)+1;
                    if(pos >= words.size()) break;
                    tmpc++;
                }
                if(result == false) break;
            }
            if(result == true) count++;
            else cout << false;
        }
        else count++;
        words = "";
    }
    cout << "\n" << count;

    return 0;
}