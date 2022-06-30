#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    string word;
    vector <int> v(26, -1);
    int tmp;
    cin >> word;

    for(int i=0; i<word.length(); i++)
{
    tmp = word[i]-'a';
    if(v[tmp]==-1) v[tmp]=i;
    
}

    for(int i=0; i<26; i++){
        cout << v[i] << " ";
    }
}