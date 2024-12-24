#include <bits/stdc++.h>
using namespace std;

map<string, vector<int>> M;
vector<string> ans;

bool is_safe(vector<int> V, int k) {
	for(int i=0; i<V.size(); i++)
		if(V[i]<=k && k<V[i]+3)
			return false;
	return true;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N, F;
	string s;
	cin >> N >> F >> s;
	for(int i=0; i<N-2; i++) {
		if(s[i]!=s[i+1] && s[i+1]==s[i+2]) {
			string sub = s.substr(i, 3);
			if(M[sub].size()<F) {
				M[sub].push_back(i);
				if(M[sub].size()==F)
					ans.push_back(sub);
			}
		}
	}
	for(int i=0; i<N; i++) {
		for(char j='a'; j<='z'; j++) {
			char t = s[i];
			s[i] = j;
			if(i<N-2) {
				string sub = s.substr(i, 3);
				if((s[i]!=s[i+1] && s[i+1]==s[i+2]) && M[sub].size()==F-1) {
					if(is_safe(M[sub], i)) {
						M[sub].push_back(i);
						ans.push_back(sub);
					}
				}
			}
			if(2<=i) {
				string sub = s.substr(i-2, 3);
				if((s[i-2]!=s[i-1] && s[i-1]==s[i]) && M[sub].size()==F-1) {
					if(is_safe(M[sub], i)) {
						M[sub].push_back(i-2);
						ans.push_back(sub);
					}
				}
			}
			if(1<=i && i<N-1) {
				string sub = s.substr(i-1, 3);
				if((s[i-1]!=s[i] && s[i]==s[i+1]) && M[sub].size()==F-1) {
					if(is_safe(M[sub], i)) {
						M[sub].push_back(i-1);
						ans.push_back(sub);
					}
				}
			}
			s[i] = t;
		}
	}
	sort(ans.begin(), ans.end());
	cout << ans.size() << "\n";
	for(int i=0; i<ans.size(); i++)
		cout << ans[i] << "\n";

	return 0;
}
