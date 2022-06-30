#include <iostream>
using namespace std;

int check(char button)
{
    if (button == 1) return 0;
    return 1;

}
int main()
{
    int N;
    int result=0;
    cin >> N;
    int answer[N];
    for(int i=0; i<N; i++)
    {
       cin >> answer[i];
    }

    for(int i=0; i<N; i++)
    {
        if(answer[i] == 1){
            result++;
            answer[i] = check(answer[i]);
            answer[i+1] = check(answer[i+1]);
            answer[i+2] = check(answer[i+2]);
        }
    }
    cout << result;
    return 0;
}
