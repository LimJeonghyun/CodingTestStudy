#include <iostream>

using namespace std;

pair<int, int> node[26];

void preorder(char cur)
{
    if (cur == '.')
    {
        return;
    }

    cout << cur;
    preorder(node[cur - 'A'].first);
    preorder(node[cur - 'A'].second);
}

void inorder(char cur)
{
    if (cur == '.')
    {
        return;
    }

    inorder(node[cur - 'A'].first);
    cout << cur;
    inorder(node[cur - 'A'].second);
}

void postorder(char cur)
{
    if (cur == '.')
    {
        return;
    }
    postorder(node[cur - 'A'].first);
    postorder(node[cur - 'A'].second);
    cout << cur;
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int N;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        char parent, left, right;

        cin >> parent >> left >> right;

        node[parent - 'A'].first = left;
        node[parent - 'A'].second = right;
    }

    preorder('A');
    cout << '\n';
    inorder('A');
    cout << '\n';
    postorder('A');
}