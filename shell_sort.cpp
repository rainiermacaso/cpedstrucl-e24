#include<iostream>
using namespace std;

void shell_sort(int *a, int n){
	int h, i, j, k, c=1;
	for(h=n;h/=2;){
		for(i=h;i<n;i++){
			k=a[i];
			for(j=i;j>=h && k<a[j-h];j-=h){
				a[j]=a[j-h];
			}
			cout<<"swap: ";
			cout<<a[j]<<" "<<a[j+1]<<" ";
			a[j]=k;
			cout<<"pass "<<c++<<": ";
			for(int k=0;k<n;k++){
				cout<<a[k]<<" ";
			}
			cout<<endl;
		}
	}
}

	int main(int ac, char**av){
		int a[]={4,65,2,-31,0,99,2,83,782,1};
		int n=sizeof a/sizeof a[0];
		shell_sort(a,n);
		
		return 0;
	}

	
