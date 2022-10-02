#include <iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
		
		
		Node(int data){
			this->data = data;
			next=NULL;
		}
};

Node* takeInput(){
	int data;
	cout<<"Enter the node :";
	cin>>data;
	Node *head = NULL;
	Node *tail = NULL;
	while(data != -1){
		Node *newNode = new Node(data);
		if (head == NULL){
			head = newNode;
			tail = newNode;
		}
		else{
			tail->next = newNode;
			tail = newNode;
		}
		cin>>data;
	}
	return head;
}

Node* insertNode(Node *head,int i,int data){
	Node *temp=head;
	int count=0;
	Node *newNode = new Node(data);
	if(i==0){
		newNode->next = head;
		head = newNode;
		return head;
	}
	while (temp!=NULL and count<i-1){
		temp = temp->next;
		count++;
	}
	if(temp!=NULL){
		newNode->next = temp->next;
		temp->next = newNode;
	}
	return head;
}

Node* deleteNode(Node *head,int i){
	Node *temp = head;
	int count=0;
	if(i==0){
		head = temp->next;
		delete temp;
		return head;
	}
	while(temp!=NULL && count<i-1){
		temp = temp->next;
		count++;
	}
	Node *a = temp->next;
	Node *b = a->next;
	temp->next = b;
	delete a;
	return head;
}

void sort (Node *head){
	Node *temp = head;
	Node *temp1;
	int x;
	while (temp->next != NULL)
	{
		temp1 = temp->next;
		while(temp1 != NULL)
		{
			if(temp->data > temp1->data)
			{
				x = temp -> data;
				temp->data = temp1->data;
				temp1->data = x;
			}
			temp1 = temp1->next;
		}
		temp = temp ->next;
	}
}

void findMid (Node *head){
	Node *slow = head;
	Node *fast = slow->next;
	while(fast != NULL && fast->next != NULL){
		slow = slow->next;
		fast = fast->next->next;
	}
	cout<<"The mid node is :"<<slow->data<<endl;
}

void print(Node *head){
	Node *temp =head;
	while(temp!= NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}


int main(){
	Node *head;
	int choice;
	while(1)
	{
		cout << "--Enter the choice--"<<endl;
		cout<<"Press 1 for taking Input"<<endl;
		cout<<"Press 2 for Inserting node"<<endl;
		cout<<"Press 3 for Deletion of node"<<endl;
		cout<<"Press 4 for sorting the linked list"<<endl;
		cout<<"Press 5 for Printing the linked list"<<endl;
		cout<<"Press 6 for Printing the Mid node of the list"<<endl;
		cout<<"Press 7 for exit"<<endl<<endl;
		cin>>choice;
		switch(choice){
			case 1:{
				head = takeInput();
				break;
			}
			case 2:{
				int i,data;
				cout<<"Enter the index and data to insert a new node :";
				cin>>i>>data;
				head = insertNode(head,i,data);
				break;
			}
			case 3:{
				int del;
				cout<<"Enter the node index to delete :";
				cin>>del;
				head=deleteNode(head,del);
				break;
			}
			case 4:{
				cout<<"Linked list after sorting :";
				sort(head);
				print(head);
				break;
			}
			case 5: {
				print(head);
				break;
			}
			case 6:{
				findMid(head);
				break;
			}
			case 7:{
				exit(1);
				break;
			}
			default:
				cout<<"Incorrect Choice !"<<endl;
		}
		cout<<endl;
	}
	return 0;
}


/*
Output :

--Enter the choice--
Press 1 for taking Input
Press 2 for Inserting node
Press 3 for Deletion of node
Press 4 for sorting the linked list
Press 5 for Printing the linked list
Press 6 for Printing the Mid node of the list
Press 7 for exit

1
Enter the node :2 5 4 8 9 -1

--Enter the choice--
Press 1 for taking Input
Press 2 for Inserting node
Press 3 for Deletion of node
Press 4 for sorting the linked list
Press 5 for Printing the linked list
Press 6 for Printing the Mid node of the list
Press 7 for exit

4
Linked list after sorting :2 4 5 8 9

--Enter the choice--
Press 1 for taking Input
Press 2 for Inserting node
Press 3 for Deletion of node
Press 4 for sorting the linked list
Press 5 for Printing the linked list
Press 6 for Printing the Mid node of the list
Press 7 for exit

6
The mid node is :5
*/
