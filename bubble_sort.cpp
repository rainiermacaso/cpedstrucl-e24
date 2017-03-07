#include <iostream>
using namespace std;

int main(){
	int n=5,x=1,j;;
	int A[] = {35,10,55,20,5};
	
	
	for (int i=n;i>1;i--){
		for (int j=0;j<i-1;j++){
			if(A[j] > A[j+1]){
				int swap = A[j];
				A[j] = A[j+1];
				A[j+1] = swap;
				for (int k=0;k<1;k++){
				cout << "Pass#" << x++ << ": ";
					for (int z=0;z<n;z++){
						cout << A[z] << " ";
					}	
					cout << "Swapped: " << A[j] << "," << A[j+1];
					cout << endl;		
		}
				}
				
			}
		}
		
	}

