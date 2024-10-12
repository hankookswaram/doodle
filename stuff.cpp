#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int inputs[n+1];
    int dp[1001];

    for (int i=0; i<n; i++) {
        cin >> inputs[i];
    }

    int answer = 0;
    for (int i=0; i<n; i++) {
        dp[i] = 1;
        for (int j=0; j<i; j++) {
            if (inputs[i] > inputs[j]) {
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
        answer = max(answer, dp[i]);
    }
    cout << answer << endl;

    return 0;
}
