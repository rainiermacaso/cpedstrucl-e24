#include <iostream>
using namespace std;
void mainMenu(){
	cout << "Main Menu " << endl
		 << "1. strcat" << endl
		 << "2. strcpy" << endl
		 << "3. strrev" << endl
		 << "4. strcmp" << endl
		 << "5. exit" << endl;
}
void strcatFunc(char *str1, char *str2){
	while (*str1)
	*str1++;
	while (*str1++=*str2++);
}
void strcpyFunc(char *str3, char *str1){
	while (*str3++=*str1++);
}
void strrevFunc(char *str1,char *str3,char *str4){
	int ctr=0;
	for (int i=0;str1[i]!='\0';i--){
		ctr++;
	}
	for (int i=ctr-1;i>=0;i--){
		cout << str1[i];
	}
}
void strcmpFunc(char *str1, char *str2){
	while (*str1++ > *str2++)
		
	while (*str1++ < *str2++)
		cout << "str2 is greater";
	while (*str1++==*str2++)
		cout << "Equal";
}
void exitFunc(){
	exit(1);
}
int main()
{
	int choice;
	char str1[50],str2[50],str3[50],str4[50];
	cout << "Enter first message ";
	gets(str1);
	cout << "Enter second message ";
	gets(str2);
	mainMenu();
	cout << "Enter choice ";
	cin >> choice;
	switch (choice){
		case 1: strcatFunc(str1,str2);cout <<str1; break;
		case 2: strcpyFunc(str3,str2);cout << str3; break;
		case 3: strrevFunc(str1,str3,str4); cout << str4; break;
		case 4: strcmpFunc(str1,str2);break;
		case 5: exitFunc(); break;
	}
	return 0;
}
