#include<bits/stdc++.h>
#define pb push_back
#define mk make_pair
#define f first
#define s second
#define turbo(){	\
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL); \
}
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
int main() 
{ 
	turbo();
	map<char,char> mp;
	string key="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./",s;
	int i,j;
	for(i=1;i<key.size();i++){
		mp[key[i]]=key[i-1];
	}
	while(getline(cin,s)){
		int n=s.length();
		for(i=0;i<n;i++){
			if(s[i]==' '){
				cout<<' ';
			}
			else{
				cout<<mp[s[i]];
			}
		}
		cout<<"\n";
	}
	return 0;	
}
