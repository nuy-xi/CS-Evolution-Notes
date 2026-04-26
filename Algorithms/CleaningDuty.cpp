​题目背景 (Problem Background):
有 N 名选手参加一场单败淘汰赛。比赛规则很特别：每一轮，所有剩余选手的序号会从小到大排列，然后所有奇数位的选手会被淘汰。比赛一直进行到只剩下最后一名选手为止。
There are N contestants in an elimination tournament. In each round, all remaining contestants are sorted by their IDs, and all those in odd-numbered positions are eliminated. The game continues until only one winner remains.
​约束条件 (Constraints):
​N 的范围非常大，达到了 10^{18}。
​The input N can be as large as 10^{18}, requiring a high-efficiency solution.
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    ll ans = 1;
    // 不断乘以2，直到再乘一次就超过n为止
    while (ans * 2 <= n) {
        ans *= 2;
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t; 
    while (t--) {
        solve();
    }
    return 0;
}
