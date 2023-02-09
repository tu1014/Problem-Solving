
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <stack>
#include <vector>
#include <list>
#include <functional>
#include <algorithm>
#include <utility>
#include <queue>
#include <tuple>
#include <sstream>
using namespace std;

vector<string> split(string str, char delimeter) {
    istringstream iss(str);
    string buffer;

    vector<string> res;

    while(getline(iss, buffer, delimeter))
        res.push_back(buffer);

    return res;
}

int question() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);

    string start, end;

    int start_hour, start_minute;
    int end_hour, end_minute;

    int ans = 0;

    for(int i=0; i<5; i++) {

        cin >> start >> end;

        vector<string> start_split = split(start, ':');
        vector<string> end_split = split(end, ':');

        start_hour = stoi(start_split[0]);
        start_minute = stoi(start_split[1]);

        end_hour = stoi(end_split[0]);
        end_minute = stoi(end_split[1]);

        if (end_minute < start_minute) {
            end_hour--;
            end_minute += 60;
        }

        ans += (end_minute - start_minute);
        ans += 60 * (end_hour - start_hour);

    }

    cout << ans << "\n";
    
    
    return 0;
}