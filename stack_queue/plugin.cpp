#include <iostream>
#include <vector>

using namespace std;

int main(){
	string s;
	cin >> s;
	vector<char> vec;

	for(int i = 0; i<s.length(); i++){
		if(vec.empty() || *(vec.end()-1) != s[i]){
			vec.push_back(s[i]);
			continue;
		}if(!vec.empty()){
			vec.pop_back();
		}
		
	}

	for(vector<char>::iterator it = vec.begin(); it!=vec.end(); it++){
		cout<<*it;
	}
}
