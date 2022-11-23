#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node* next;
		node* prev;
		
		node(int val){
			data= val;
			next=Null;
			prev=Null;
		}
};
void insertAtHead(node* &head, int val){
	
	node* n=new node(val);
	n->next=head;
	if(head!=Null){
		head->prev=n;
	}
	head=n;
}

void insertAtTail(node* &head, int val){
	
	if(head==Null){
		insertAtHead(head,val);
		return;
	}
	
	node* n=new node(val);
	node* temp=head;
	
	while(temp->next!=Null){
		temp=temp->next;
	}
	temp->next=n;
	n->prev=temp;
}
void display(node* head){
	node* temp=head;
	while(temp!=Null){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

void deleteAtHead(node* &head){
	node* todelete=head;
	head=head->next;
	head->prev=Null;
	
	delete todelete;
}
void deletion(node* &head, int pos){
	if(pos==1){
		deleteAtHead(head);
		return;
	}
	node* temp=head;
	int count=1;
	while(temp!=Null && count!=pos){
		temp=temp->next;
		count++;
	}
	temp->prev->next=temp->next;
	if(temp->next!=Null){
		temp->next->prev=temp->prev;
	}
	
	delete temp;
}

int main(){
	node* head=Null;
	insertAtTail(head,1);
	insertAtTail(head,2);
	insertAtTail(head,3);
	insertAtTail(head,4);
	display(head);
	insertAtTail(head,5);
	display(head);
	deletion(head,5);
	display(head);
	return 0;
}
