#include<iostream>
using namespace std;

int main(){
	int j, i, n=5, c=1;
	int A[n]={30, 40, 20, 50, 10};

		for(int i=0;i<n-1;i++){
			int min=A[i], index=i;
			for(int j=i+1;j<n;j++){
				cout<<"swap: ";
				cout<<A[j]<<" "<<A[j+1]<<" "<<endl;
				if(A[j]<min){
					min=A[j];
					index=j;
				}
			}
			A[index]=A[i];
			A[i]=min;
			cout<<"pass "<<c++<<": ";
			for(int k=0;k<n;k++){
				cout<<A[k]<<" ";
			}
			cout<<endl;
		}
}
