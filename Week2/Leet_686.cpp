// 아직 잘 모르겠음
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string a = "abcd";
    string b = "cdabcdab";
    vector<int> com;
    int count=0;
    string s="";
        while(s.size()<b.size())
        {
            s+=a;
            count++;
            cout << "s:" << s << endl;
            cout << "count: " <<count << endl;
        }
        if(s.find(b)!=string::npos){
            cout << "s2 : " <<s << endl;
        cout << "count2 :" << count << endl;
        }
            // return count;
        s+=a;
        count++;
        cout << "s1 : " <<s << endl;
        cout << "count1 :" << count << endl;
        if(s.find(b)!=string::npos){
            cout << "s3 : " <<s << endl;
            cout << "count3 :" << count << endl;
        }
        
    return 0;
}
