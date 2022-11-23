#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node* next;
		node(){
			data = 0;
			next = Null;
		}
};
void insertattail(node* &head, int val){
	node* n = new node(val);
	if(head==Null){
		head=n;
		return;
	}
	node* temp = head;
	while(temp->next!=Null){
		temp= temp->next;
	}
	temp->next=n;
}
void display(node* head){
	node* temp=head;
	while(temp!=Null){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<"Null"<<endl;
}

int main(){
	
	node* head=Null;
	insertattail(head,1);
	insertattail(head,2);
	insertattail(head,3);
	display(head);
	return 0;
}
