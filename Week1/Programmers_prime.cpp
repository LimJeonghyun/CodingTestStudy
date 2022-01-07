#include <iostream>
#include <vector>
using namespace std;

int main(){
    int answer = 0;
    vector<int> nums = {1, 2, 7, 6, 4};
    int count = 0;
    int result = 0;
    //{1, 2, 3, 4}
    // {1, 2, 7, 6, 4};
    for(int i = 0; i<nums.size()-2; i++){
        for(int j = i+1; j<nums.size()-1; j++){
            for(int k = j+1; k<nums.size(); k++){
                result += nums[i] + nums[j] + nums[k];
                for(int n=2; n*n<=result; n++){
                    if(result%n== 0) count++;
                }
                if(count == 0) answer++;
                result = 0;
                count = 0;
            }
        }
    }
    cout << answer;
    return 0;
}