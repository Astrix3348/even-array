#include<iostream>
#include<vector>
using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	int even=0;
	int odd=0;
	int fine=0;
	for(int i=0; i<n; i++){
		if(i%2==0){
			if(a[i]%2==0){
				fine++;
			}
			else{
				even++;
			}
		}
		else{
			if(i%2==1){
				if(a[i]%2==1){
					fine++;
				}
				else{
					odd++;
				}
			}
		}
	}
	if(fine==n){
		cout << '0';
	}
	else if(odd==even){
		cout << odd;
	}
	else{
		cout << "-1";
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
		cout << endl;
	}


	return 0;
}