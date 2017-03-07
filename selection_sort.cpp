#include <iostream>
using namespace std;

int main(){
	int n=5,x=1;
	int A[] = {30, 40, 20, 50, 10};
	for (int i=0;i<n-1;i++){
		int min=A[i], index = i;
		for (int j=i+1; j<n;j++){
			if (A[j] < min){
				min = A[j];
				index = j;
			}
		}
	A[index] = A[i];
	A[i] = min;
	cout << "Pass#" << x++ << ": ";		
	for (int z=0;z<n;z++){
	cout << A[z] << " ";
	}
	cout << "Swapped: " << A[i] << "," << A[i+1];
	cout << endl;
	}	
}
