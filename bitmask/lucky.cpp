#include <iostream>

using namespace std;
int p = 0;
int ans = -1;
int n;
void rec( int v, int sz){
	int cnt_4 = 0;
	int cnt_7 = 0;
	if(ans > 0){
		return;
	}
	if(v == sz){
		if(cnt_4 == cnt_7 && p>= n){
			ans = p;
		}
	}
	p = p*10 + 4;
	cnt_4++;
	rec(v + 1, sz);
	p = p/10;
	cnt_4--;
	p = p*10 + 7;
	cnt_7--;
	p = p/10;
	cnt_7--;
	
}

int main(){
	
	cin >> n;
	for(int i = 2; i<=10; i+=2){
		rec(0,i);
	}

	cout << ans;
	
}
