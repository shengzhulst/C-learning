#include <iostream>
using namespace std;
int q(int n){
	if (n==1)
		return 1;
	if (n==2)
		return 1;
	else
		return(q(n-1)+q(n-2));
}
int main(){
	int n;
	cin>>n;
	cout<<q(n)<<endl;
	return 0;
}
