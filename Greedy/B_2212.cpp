#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int k;
    vector<int> sensor;
    vector<int> sensorDistance;

    cin >> n >> k;

    for (int i = 0, tmp; i < n; i++)
    {
        cin >> tmp;
        sensor.push_back(tmp);
    }

    sort(sensor.begin(), sensor.end());

    for (int i = 0; i < n - 1; i++)
        sensorDistance.push_back(sensor[i + 1] - sensor[i]);

    sort(sensorDistance.begin(), sensorDistance.end(), greater<int>());

    int count = 0;
    for (int i = k - 1; i < n; i++)
        count += sensorDistance[i];

    cout << count << '\n';
}