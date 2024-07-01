#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n;
    int answer = 0;
    vector<int> pBoy;
    vector<int> mBoy;
    vector<int> pGirl;
    vector<int> mGirl;

    cin >> n;

    for (int i = 0, tmp; i < n; i++)
    {
        cin >> tmp;
        if (tmp < 0)
        {
            mBoy.push_back(abs(tmp));
        }
        else
        {
            pBoy.push_back(tmp);
        }
    }

    for (int i = 0, tmp; i < n; i++)
    {
        cin >> tmp;
        if (tmp < 0)
        {
            mGirl.push_back(abs(tmp));
        }
        else
        {
            pGirl.push_back(tmp);
        }
    }

    sort(mBoy.begin(), mBoy.end(), less<int>());
    sort(pBoy.begin(), pBoy.end(), less<int>());
    sort(mGirl.begin(), mGirl.end(), less<int>());
    sort(pGirl.begin(), pGirl.end(), less<int>());

    int i = 0, j = 0;

    while (i < mBoy.size() && j < pGirl.size())
    {
        // cout << mBoy.at(i) << ' ' << pGirl.at(j) << '\n';
        if (mBoy.at(i) > pGirl.at(j))
        {
            answer++;
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }

    i = 0;
    j = 0;

    while (i < pBoy.size() && j < mGirl.size())
    {
        if (pBoy.at(i) < mGirl.at(j))
        {
            answer++;
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
    cout << answer << '\n';
}

// less<int>로 정렬할 경우 minus 부분이 ++되어야 한다
// minus는 더 작은 사람을 찾고 싶기 때문에 상대의 index를 올리게 되면 키가 더 커지므로 찾을 수 없다 따라서 작은 키를 작고 싶은 성별이 index를 올려가면 찾아야한다
// greater<in>의 경우에는 plus 부분이 ++되어야 한다
// 키가 더 큰 사람을 찾고 싶은 것이기 때문에 내림차순으로 정렬되어 있어 minus를 움직일 경우 더 작은 수가 되므로 플러스 부분을 조정하여 더 작은 키를 찾는다.