#include <iostream>

using namespace std;

int main(){
    int n;
    int arr[1001];
    int dp[1001] = {0};

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    dp[0] = 1;
    for(int i = 1; i < n; i++){
        dp[i] = 1;
        for(int j = 0; j < i; j++){
            if(arr[i] > arr[j] && dp[i] < dp[j] + 1){
                dp[i] = dp[j] + 1;
            }
        }
    }

    int res = 0;
    for(int i = 0; i < n; i++)
        res = max(res, dp[i]);

    cout << res;

    return 0;
}