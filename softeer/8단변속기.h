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

    int arr[8];

    bool isAsending = false;
    bool isDescending = false;

    cin >> arr[0];

    for(int i=1; i<8; i++) {
        cin >> arr[i];

        if(arr[i-1] < arr[i]) isAsending = true;
        else isDescending = true;
    }

    if(isAsending && isDescending) cout << "mixed";
    else if(isAsending) cout << "ascending";
    else cout << "descending";
    
    return 0;
}