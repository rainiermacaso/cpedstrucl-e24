#include <iostream>
using namespace std;

int main(){
	
	int n=5,x=1,j;
	int A[] = {40,30,20,50,10};
	
	for (int i=1;i<n;i++){
		int tmp=A[i];
		for( j=i-1;j>=0 && tmp<A[j];j--){
			A[j+1] = A[j];
		}	
		A[j+1] = tmp;
		cout << "Pass#" << x++ << ": ";		
		for (int z=0;z<n;z++){
			cout << A[z] << " ";
		}	
		cout << "Swapped: " << A[i] << "," << A[i+1];
		cout << endl;
	}
}
	
