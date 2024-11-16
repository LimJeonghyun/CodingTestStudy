#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int idx;

bool cmp(string a, string b)
{
    if (a[idx] < b[idx])
    {
        return true;
    }
    return false;
}

vector<string> solution(vector<string> strings, int n)
{
    vector<string> answer;

    stable_sort(strings.begin(), strings.end());

    idx = n;
    stable_sort(strings.begin(), strings.end(), cmp);

    for (int i = 0; i < strings.size(); i++)
    {
        answer.push_back(strings[i]);
    }

    return answer;
}