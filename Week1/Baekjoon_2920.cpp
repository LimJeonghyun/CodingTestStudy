#include <iostream>
#include <string>

// 첫째 줄에 8개 숫자가 주어진다. 이 숫자는 문제 설명에서 설명한 음이며, 1부터 8까지 숫자가 한 번씩 등장한다.
 
using namespace std;
 
int main() {
    string an = "1 2 3 4 5 6 7 8";
    string de = "8 7 6 5 4 3 2 1";
    string numL = "";

    getline(cin, numL); // 한번에 문자열 받기 geline(cin, ???)

    if(an == numL) cout << "ascending";
    else if(de == numL) cout << "descending";
    else cout << "mixed";
    return 0;

}