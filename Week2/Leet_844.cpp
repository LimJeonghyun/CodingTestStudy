// c++ : 0ms, python : 24ms
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// O(n) solution : 
//          stack <int> s1,s2;
//          string str1,str2; 
            
//          for(int i = 0; i < s.size(); i++){
//                  if(s[i] == '#' && !s1.empty())  -> #이고 stack안에 비워있지 않은 경우 뒤에서부터 pop()
//                          s1.pop();         
//                  else if(s[i] != '#')
//                          s1.push(s[i]); -> #이 아닌 경우 stack에 저장
//          }
         
//          for(int i = 0; i < t.size(); i++){     
//                  if(t[i] == '#' && !s2.empty())
//                          s2.pop();
//                  else if(t[i] != '#')
//                          s2.push(t[i]);
//          }
            
//          while(!s1.empty()){
//                  str1.push_back(s1.top());
//                  s1.pop();
//          }
//          while(!s2.empty()){
//                  str2.push_back(s2.top());
//                  s2.pop();
//          }      
    
//          return str1 == str2;   
//     }
// };
int main(){
    string s="";
    string t="";
    int j = 0;
    cin >> s >> t;

    // abc###
    if(s.find('#') != string::npos){
        for(int i = 0; i<s.size(); i++){
            if(s[i]=='#' && i!=0){
                if(s[i-1] == '#'){
                    j=2;
                    while(i-j >=0){
                        if(i-j<0) break;
                        if(s[i-j]!='#'){
                            s[i-j] = '#';
                            break;
                        }
                         j++;
                    } 
                }
                else s[i-1]='#';
            }
            // cout << s << endl;
        }
    }
    if(t.find('#') != string::npos){
        for(int i = 0; i<t.size(); i++){
            if(t[i]=='#' && i!=0){
                if(t[i-1] == '#'){
                    j=2;
                    while(i-j >=0){
                        if(t[i-j]!='#'){
                            t[i-j] = '#';
                            break;
                        }
                         j++;
                    } 
                }
                else t[i-1]='#';
            }
            // cout << s << endl;
        }
    }
    cout << s << ":" <<t;
    s.erase(remove(s.begin(), s.end(), '#'), s.end());
    // s.erase(remove(s.begin(), s.end(), ' '), s.end());
    t.erase(remove(t.begin(), t.end(), '#'), t.end());
    if(s == t) return true;
    else return false; // 4ms
    return s==t; // 0ms
    return 0;
}