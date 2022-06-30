#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    cin.tie(NULL);
	ios_base::sync_with_stdio(0);
    int N, M;
    int An[N], Bn[M];
    cin >> N >> M;
    vector <int> result(N+M,0);
    
    for(int i=0; i<N+M; i++){
        cin >> result[i];
    }
    
    sort(result.begin(), result.end());
    for(int i=0; i<result.size(); i++){
        cout << result[i] << " ";
    }
}