#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N,K;
    int count=0;
    cin >> N >> K;

    vector <int> money(N,0);
    for(int i=0; i<N; i++){
        cin >> money[i];
    }

    sort(money.begin(), money.end(), greater<int>());
   for(int i=0; i<money.size(); i++){
       while(K-money[i]>=0){
           count++;
           K-=money[i];
       }
   }
    cout << count << endl;
}