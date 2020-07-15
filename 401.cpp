
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
	string s,s1;
	int i,j;
	while(cin>>s){
		int p=0,m=0,cnt=0;
		s1=s;
		if(s==string(s.rbegin(),s.rend())){
			p=1;
		}
		for(i=0;i<s.size();i++){
			if(s[i]=='E'){
				s[i]='3';cnt++;
			}
			else if(s[i]=='J'){
				s[i]='L';cnt++;
			}
			else if(s[i]=='L'){
				s[i]='J';cnt++;
			}
			else if(s[i]=='S'){
				s[i]='2';cnt++;
			}
			else if(s[i]=='Z'){
				s[i]='5';cnt++;
			}
			else if(s[i]=='2'){
				s[i]='S';cnt++;
			}
			else if(s[i]=='3'){
				s[i]='E';cnt++;
			}
			else if(s[i]=='5'){
				s[i]='Z';cnt++;
			}
			else if(s[i]=='A'||s[i]=='H'||s[i]=='I'||s[i]=='M'||s[i]=='O'||s[i]=='T'||s[i]=='U'||s[i]=='V'||s[i]=='W'||s[i]=='X'||s[i]=='Y'||s[i]=='8'||s[i]=='1'){
				cnt++;
			}
		}
		if(s1==string(s.rbegin(),s.rend())&&cnt==s.size()){
			m=1;
		}
		if(p&&m){
			cout<<s1<<" -- is a mirrored palindrome."<<"\n\n";
		}
		else if(p){
			cout<<s1<<" -- is a regular palindrome."<<"\n\n";
		}
		else if(m){
			cout<<s1<<" -- is a mirrored string."<<"\n\n";
		}
		else{
			cout<<s1<<" -- is not a palindrome."<<"\n\n";
		}
	}
	return 0;	
}
