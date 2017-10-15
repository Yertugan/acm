#include <iostream>

using namespace std;


int main(){
	int n, m ,k;
	long long c[21][21];
	long long dp[1000000][21];
	cin >> n >> m >>k;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}

	int x, y, z;
	for(int i = 0; i<k; i++){
		cin >> x >> y >> z;
		c[x-1][y-1] = z;
	}

	for(int i = 0; i < n; i++){
		dp[1<<i][i] = a[i];
	}

	for(int mask = 1; mask<(1<<n); mask++){
		for(x = 0; x < n; x++){
			if((mask&(1<<x))>0){
				for(y=0; y<n; y++){
					if((mask&(1<<y))==0){
						dp[mask+(1<<y)][y] = max(dp[mask+(1<<y)][y],dp[mask][x]+a[y]+c[x][y]);
					}
				}
			}
		}
	}

	long long ans = 0;
	for(int i = 0; i < (1<<n); i++){
		int cnt = 0;
		for(int j = 0; j < n; j++){
			if((i&(i<<j))>0){
				cnt++;
			}
		}
		if(cnt == m){
			for(int j = 0; j<n; j++){
				if((i&(1<<j))>0){
					ans = max(ans,dp[i][j]);
				}
			}
		}
	}
	cout << ans;

}
