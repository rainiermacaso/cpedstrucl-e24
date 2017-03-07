//shellsort
#include <iostream>
using namespace std;

void shell_sort (int *A, int n){
	int h,i,j,k,x=1;
		for (h=n;h/=2;){
			for (i=h;i<n;i++){
				k=A[i];
				for (j=i;j>=h && k < A[j-h];j-=h){
					A[j] = A[j-h];
				}
				A[j] = k;
			
			}
		cout << "Pass#" << x++ << " ";		
		for (int z=0;z<n;z++){
			cout << A[z] << " ";
		}	
		cout << endl;
			
		}
		
}
int main(){
	
	int A[] = { 40, 30, 20, 50, 10 };
	int n = sizeof A / sizeof A[0];
	shell_sort(A,n);
}
