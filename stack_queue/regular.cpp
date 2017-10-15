#include <iostream>
#include <vector>

using namespace std;

int main(){
	string s;
	cin >> s;
	vector<char> br;
	int cnt = 0;
	for(int i = 0; i<s.length(); i++){
		if(s[i] == '('){
			br.push_back(s[i]);
		}else if(!br.empty()){
			cnt++;
			br.pop_back();
		}
		
	}

	cout << 2*cnt;
}
