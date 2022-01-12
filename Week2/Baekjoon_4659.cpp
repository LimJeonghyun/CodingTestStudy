//문제 잘못읽고 거의 1시간동안 헤멘거 실환가...
//ee랑 oo만 허용인데 ee랑 aa인줄알고 계속 빡쳐있었음... 휴... 

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// 모음있는지 확인
// 연속되는 같은 글자 확인 (2번) -> ee, oo패스
// 연속되는 자음 및 모음 확인 (3번 이상 금지)
int main(){
    // string password;
    vector<string> password;
    string tmp;
    int vo_cnt;
    int co_cnt;
    vector<string> vowel={"a", "e", "i", "o", "u"};
    int count=0;
    bool result;
    char tmp2;
    
    while(1){
        cin >> tmp;
        if(tmp == "end") break;
        password.push_back(tmp);
    }

    for(int i = 0; i<password.size(); i++){
        // cout << password[i] << "\t";
        // vowel 포함 체크
        result = true;
        count = 0;
        for(int k = 0; k<vowel.size(); k++){
            if(password[i].find(vowel[k])!=string::npos) count++;
        }
        if(count ==0) {
            result = false;
        }
        if(result){
            for(int j = 1; j<password[i].size()-1; j++){
                vo_cnt=0; 
                co_cnt=0;
                if(password[i][j-1] == 'a' || password[i][j-1] == 'e' || password[i][j-1] == 'i' || password[i][j-1] == 'o' || password[i][j-1] == 'u') vo_cnt++;
			    else co_cnt++;
			
			    if(password[i][j] == 'a' || password[i][j] == 'e' || password[i][j] == 'i' || password[i][j] == 'o' || password[i][j] == 'u') vo_cnt++;
                else co_cnt++;
                    
                if(password[i][j+1] == 'a' || password[i][j+1] == 'e' || password[i][j+1] == 'i' || password[i][j+1] == 'o' || password[i][j+1] == 'u') vo_cnt++;
                else co_cnt++;

                if(vo_cnt == 3 || co_cnt == 3) {
                    result = false; 
                    break;
                }
            }
        }
        if(result){
            for(int j = 0; j<password[i].size()-1; j++){
                if(password[i][j]==password[i][j+1]){
                    if((password[i][j]=='e' || password[i][j]=='o')) result = true;
                    else if((password[i][j]!='e' || password[i][j] !='o')) {
                        result = false;
                        break;
                    }
                } 
            }
        }
        cout << "<" << password[i] << ">";
        if(result == false) cout << " is not acceptable." << endl;
        else cout << " is acceptable." << endl;
    }

 return 0;
}

// #include <iostream>
// #include <string>
// #include <vector>
// #include <algorithm>
// using namespace std;

// // 모음있는지 확인
// // 연속되는 같은 글자 확인 (2번) -> ee, oo패스
// // 연속되는 자음 및 모음 확인 (3번 이상 금지)
// int main(){
//     string password;
//     int vo_cnt=0;
//     int co_cnt=0;
//     vector<string> vowel={"a", "e", "i", "o", "u"};
//     int count=0;
//     bool result;
//     char tmp2;
    
//     while(1){
//         cin >> password;
//         if(password == "end") break;
//         // vowel 포함 체크
//         result = true;
//         count = 0;
//         if(password.find("a")==string::npos 
// 			&& password.find("e")==string::npos && password.find("i")==string::npos
// 			&& password.find("o")==string::npos && password.find("u")==string::npos) result = false;

//         if(result){
//             for(int j = 1; j<password.size()-1; j++){
//                 vo_cnt=0; 
//                 co_cnt=0;
//                 if(password[j-1] == 'a' || password[j-1] == 'e' || password[j-1] == 'i' || password[j-1] == 'o' || password[j-1] == 'u') vo_cnt++;
// 			    else co_cnt++;
			
// 			    if(password[j] == 'a' || password[j] == 'e' || password[j] == 'i' || password[j] == 'o' || password[j] == 'u') vo_cnt++;
//                 else co_cnt++;
                    
//                 if(password[j+1] == 'a' || password[j+1] == 'e' || password[j+1] == 'i' || password[j+1] == 'o' || password[j+1] == 'u') vo_cnt++;
//                 else co_cnt++;
                
//                 if(vo_cnt == 3 || co_cnt == 3) {
//                     result = false; 
//                     break;
//                 }
//             }
//         }
//         if(result){
//             for(int j = 0; j<password.size()-1; j++){
//                 if(password[j]==password[j+1]){
//                     if((password[j]=='e' || password[j]=='o')) result = true;
//                     else if((password[j]!='e' || password[j] !='o')) {
//                         result = false;
//                         break;
//                     }
//                 } 
//             }
//         }
//         cout << "<" << password << ">";
//         if(result == false) cout << " is not acceptable." << endl;
//         else if(result == true) cout << " is acceptable." << endl;
//     }

//  return 0;
// }