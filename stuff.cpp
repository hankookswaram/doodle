#include <iostream>
#include <string>

using namespace std;

int main() {
    int dp[5001];
    int input;
    cin >> input;

    dp[1] = dp[2] = dp[4] = 9999;
    dp[3] = dp[5] = 1;

    for (int i=6; i<=input; i++) {
        dp[i] = min(dp[i-3], dp[i-5]) + 1;
    }

    cout << ((dp[input] == 0 || dp[input] >= 9999) ? -1 : dp[input]);

    return 0;
}