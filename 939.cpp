  /*  HARD WORK FOREVER PAYS  */
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
typedef pair<string,string> PII;
map<string,pair<int,PII>> mp;

void postorder(string s){
	if(mp[s].f==0){
		postorder(mp[s].s.f);
		postorder(mp[s].s.s);
	}
	if(mp[s].f==0){
		if((mp[mp[s].s.f].f+mp[mp[s].s.s].f)==5){
			mp[s].f=3;
		}
		else{
			mp[s].f=(mp[mp[s].s.f].f+mp[mp[s].s.s].f)/2;
		}
	}
}

int main() 
{ 
	turbo();
	int n;
	cin>>n;
	string s,s1,s3[4];
	s3[3]="dominant";
	s3[2]="recessive";
	s3[1]="non-existent";
	while(n--){
		cin>>s>>s1;
		if(s1=="dominant"||s1=="recessive"||s1=="non-existent"){
			if(s1=="dominant"){
				mp[s].f=3;
			}
			else if(s1=="recessive"){
				mp[s].f=2;
			}
			else{
				mp[s].f=1;
			}

		}
		else{
			
			if(mp[s1].s.f.size()==0){
				mp[s1].s.f=s;
				
			}
			else{
				mp[s1].s.s=s;
			}
		}
	}
	for(auto &u:mp){
		if(u.s.f==0){
			postorder(u.f);
		}
	}
	for(auto u:mp){
		cout<<u.f<<" "<<s3[u.s.f]<<"\n";
	}
    return 0; 
} 
