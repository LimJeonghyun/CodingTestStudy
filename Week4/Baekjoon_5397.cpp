#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main()
{
    int n;
    string pass;
    cin >> n;
    vector<char> right, left;

    while(n--)
    {
        cin >> pass;
        for (int i = 0; i<pass.length(); i++)
        {
            if (pass[i] == '<' && !left.empty()) right.push_back(left.back()), left.pop_back();
            if (pass[i] == '>' && !right.empty()) left.push_back(right.back()), right.pop_back();
            if (pass[i] == '-' && !left.empty()) left.pop_back();
            if ((pass[i]>='a' && pass[i]<='z')||(pass[i]>='A' && pass[i]<='Z')||(pass[i]>='0' && pass[i]<='9')) left.push_back(pass[i]);
        }
        while(!left.empty())
        {
            right.push_back(left.back());
            left.pop_back();
        }
        while(!right.empty())
        {
            cout << right.back();
            right.pop_back();
        }
        cout << "\n";
    }
    return 0;
}