
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
	int t,i,j,l,k,cs=1,notf=0;
	string s;
	while(1){
		string c[5],s1;
		getline(cin,s1);
		c[0]=s1;
		if(c[0][0]=='Z'){
			return 0;
		}
		if(notf){
			cout<<"\n";
		}
		for(i=0;i<5;i++){
			if(i){
				getline(cin,s1);
				c[i]=s1;
			}
			if(c[i][4]=='\0'){
				c[i][4]=' ';
			}
			if(c[0][0]=='Z'){
				return 0;
			}
			for(j=0;j<5;j++){
				if(c[i][j]==' '){
					l=i;
					k=j;
				}
			}
		}
		char s;
		int invalid=1;
		while(cin>>s){
			if(s=='0'){
				getline(cin,s1);
				break;
			}
			if(s=='A'){
				l--;
				if(l>=0&&invalid){
					swap(c[l][k],c[l+1][k]);
				}
				else{
					invalid=0;
				}
			}
			else if(s=='B'){
				l++;
				if(l<5&&invalid){
					swap(c[l][k],c[l-1][k]);
				}
				else{
					invalid=0;
				}
			}
			else if(s=='R'){
				k++;
				if(k<5&&invalid){
					swap(c[l][k],c[l][k-1]);
				}
				else{
					invalid=0;
					
				}
			}
			else if(s=='L'){
				k--;
				if(k>=0&&invalid){
					swap(c[l][k],c[l][k+1]);
				}
				else{
					invalid=0;
				
				}
			}
			else if(s>='A'&&s<='Z'){
				invalid=0;
			}
		}
		cout<<"Puzzle #"<<cs<<":\n";
		if(invalid==0){
			cout<<"This puzzle has no final configuration."<<"\n";
			notf=1;
		}
		else{
			for(i=0;i<5;i++){
				for(j=0;j<4;j++){
					cout<<c[i][j]<<" ";
				}
				cout<<c[i][j];
				cout<<"\n";
			}
			notf=1;
		}
		cs++;
	}
	return 0;	
}
