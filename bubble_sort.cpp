#include<iostream>
using namespace std;

int main(){
	int n=5, j, i, c=1;
	int A[n]={35, 10, 55, 20, 5};
	
	cout<<"as is: ";
	for(int l=0;l<n;l++){
	
	cout<<A[l]<<" ";
	}
	cout<<endl;
		for(int i=n;i>1;i--)
		
			for(int j=0;j<i-1;j++)
				
				if(A[j]>A[j+1])
				{
					cout<<"swap: ";
					cout<<A[j]<<" "<<A[j+1]<<" ";
					int swap=A[j];
					A[j]=A[j+1];
					A[j+1]=swap;
				cout<<"pass "<<c++<<": ";
				for(int k=0;k<n;k++){
					cout<<A[k]<<" ";
					
				}
				cout<<endl;
				}
}

