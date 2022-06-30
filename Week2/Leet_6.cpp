// 모르겄다.... 답은 같은데 왜 안돌아가는지 모르겄어....ㅠㅠㅠㅠㅠㅠㅠㅠ
// 아니 이런식으로 할거면 왜 풀으라고 한거임?? 
// 이미지보고 이해했는데 완전 다른 문제였음 ㅅㅂ
// 이럴 거면 제대로 해주던가 빡치네...!!!!!!!!!!!!!

// vector <string> temp(numRows, "");
//         int row = 0, direction = 1;
//         string ans = "";
        
//         if(numRows == 1)
//             return s;
        
//         for(int i = 0; i < s.size(); i++)
//         {
//             temp[row] += s[i];
            
//             if(row == numRows - 1)
//                 direction = -1;
//             if(row == 0)
//                 direction = 1;
            
//             row += direction;
            
//         }     
        
//         for(int i = 0; i < numRows; i++)
//         {
//             ans += temp[i];
//         }
        
//         return ans;




#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;

// PAHNAPLISH
int main(){
    string s = "ABCD";
    int numRows = 2;
    vector< vector <char> > words(s.size(), vector<char>(s.size()));
    int j = 0;
    int count = 0;
    int k = 1;
    int tmp = 0;
    string result="";
     
    for(int i = 0; i<s.size(); i++){
        if(numRows%2 != 0){
            if(i == numRows || i == numRows+k*4 ){
                words[j][numRows/2] = s[i];
                j++;
                if(i>numRows) k++;
            }
            else {
                words[j][tmp] = s[i];
                tmp++;
            }
            if(tmp == numRows) {
                j++;
                tmp=0;
            }
        }
        else if(numRows%2 == 0){

            if((numRows==2) && (i == numRows || i == numRows+k*5+1)){
                words[j][numRows/2-1] = s[i];
                cout << words[j][numRows/2] << "+\n" << endl;
                j++;
            }
            else if(numRows==2) && (i == numRows+1 || i==numRows+k*5+2)){
                words[j][numRows/2] = s[i];
                cout << words[j][numRows/2-1] << "*\n" << endl;
                j++;
                if(i>numRows+1) k++;
            }
            
            else if((numRows!=2) && (i == numRows || i == numRows+k*5+1)){
                words[j][numRows/2] = s[i];
                cout << words[j][numRows/2] << "+\n" << endl;
                j++;
            }
            else if(numRows!=2) && (i == numRows+1 || i==numRows+k*5+2)){
                words[j][numRows/2-1] = s[i];
                cout << words[j][numRows/2-1] << "*\n" << endl;
                j++;
                if(i>numRows+1) k++;
            }
            else {
                words[j][tmp] = s[i];
                cout << words[j][tmp] << endl;
                tmp++;
            }
            if(tmp == numRows) {
                j++;
                tmp=0;
            }
        }
    }

    for(int i = 0; i<numRows; i++){
        for(int l = 0; l<words.size(); l++){
            if(words[l][i]!=0) result+=words[l][i];
        }
    }

    cout << result;

    return 0;
}