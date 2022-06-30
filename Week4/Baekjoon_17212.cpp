#include <iostream>
#include <vector>
using namespace std;

// 12 -> 2(7, 5) 21 ->3(777)
int main()
{
    vector<int> coin = {1, 2, 5, 7};
    int price;
    int count=0;
    int i = 3;
    cin >> price;
    int price1 = price;
    while (price && i > -1)
    {
        if(price >= coin[i])
        {
            count++;
            price-=coin[i];
        }
        else i--;
    }
    while (price1 && i>-1)
    {
        
    }
    cout << count;
}