#include<iostream>
#include<string>

using namespace std;

int main(int argc, char** argv)
{
    long long answer = 0;
    string start, end;
    
    for(int i = 0; i < 5; i++)
        {
            cin >> start >> end;

            int startHour = stoi(start.substr(0, 2));
            int startMin = stoi(start.substr(3, 2));

            int endHour = stoi(end.substr(0, 2));
            int endMin = stoi(end.substr(3, 2));

            if (endMin < startMin)
                {
                    endHour--;
                    endMin+=60;   
                }
            answer += (endMin - startMin);
            answer += (endHour - startHour) * 60;
        }

    cout << answer << '\n';
    
   return 0;
}