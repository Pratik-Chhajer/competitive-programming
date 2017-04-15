#include <bits/stdc++.h>
using namespace std;

void seive(int n){
	bool Prime[n+1];
	memset(Prime,true,sizeof(Prime));
	Prime[0] = false;
	Prime[1] = false;
	for(int i=2;i*i<=n;i++){
		if(Prime[i]){
			for(int j=2;j*i<=n;j++){
				Prime[j*i] = false;
			}
		}
	}
	// Now Prime Contains all the prime as true
	// and non-prime as false
}

int main(){

	return 0;
}
