
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
using namespace std;

int question() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);

    int count;
    cin >> count;

    for(int i = 1; i<=count; i++) {
        int a, b;
        cin >> a >> b;

        cout << "Case #" << i << ": " << a+b << "\n";
    }
    
    
    return 0;
}