 #include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main(){
	string s;
	int cnt = 0;
	int n = 0;
	cin >> s;
	 for(int i = s.size()-1; i >= 0; i--){
	 	if(s[i] - 48 == 4){
	 		s[i] = 1;
	 	}
	 	if(s[i] - 48 == 7){
	 		s[i] = 2;
	 	}
	 		cnt += (int)s[i]*(1<<n);
	 		
		
		n++;
	 }

	 cout << cnt << endl;
	 return 0;
}
