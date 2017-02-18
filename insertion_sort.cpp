#include<iostream>
using namespace std;

int main(){
	int j, i, n=5, c=1, tmp;
	int A[n]={40,30,20,50,10};
		for(i=1;i<n;i++){
			int tmp=A[i];
			for(j=i-1;j>=0 && tmp<A[j];j--){
				A[j+1]=A[j];
			}
			cout<<"swap: ";
			cout<<A[j]<<" "<<A[j+1]<<" ";
			A[j+1]=tmp;
			cout<<"pass "<<c++<<": ";
			for(int k=0;k<n;k++){
				cout<<A[k]<<" ";
			}
			cout<<endl;
		}
}
