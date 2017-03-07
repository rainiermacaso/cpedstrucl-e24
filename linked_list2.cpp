#include <iostream>
using namespace std;
void menu(){
	cout << "[1] Insert into Linked List \n"
		 << "[2] Pop \n"
		 << "[3] Exit \n"
		 << "[4] Display contents of the linked list \n"
		 << "Enter choice: ";
}
class LinkedList{
    struct Node {
        int x;
        Node *next;
    };

public:
    LinkedList(){
        head = NULL; // set head to NULL
    }

    void addValue(int val){
        Node *n = new Node();   
        n->x = val;             
        n->next = head;                       
        head = n;              
    }

    int popValue(){
        Node *n = head;
        int ret;
        if (head == NULL){
        	return NULL;
        }
		else{
        	ret = n->x;
        	head = head->next;
       	 	delete n;
       		return ret;
    	}    
    }
    void display(){
		Node *n;
		n = head;
		if (n == NULL){
			cout <<"Empty Stack" << endl;
		}
		else{
			while(n!=NULL){
				cout << n->x << endl;
				n = n->next;
			}	
		}
	}
private:
    Node *head; 
};

int main() {
	int extra =0;
    LinkedList list;
while (extra < 1){
	int choice,num;
	menu();
	cin >> choice;
	switch (choice){
		case 1:{
			cout << "Enter number ";
			cin >> num;
			list.addValue(num);
			break;
		}
		case 2:{
			num = list.popValue();
				if (num == NULL){
					cout << "Empty Stack" << endl;
				}
				else
					cout << num << " has been popped " << endl;
			break;
		}
		case 3:{
			exit(1);
			break;
		}
		case 4:{
			list.display();	
			break;
		}
	}
}
    return 0;
}
