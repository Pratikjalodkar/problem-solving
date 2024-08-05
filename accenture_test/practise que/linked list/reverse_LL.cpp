#include<bits/stdc++.h>
using namespace std;

class node{
public:
	int data;
	node* next;
	node* prev;
	node(){
	this->data=NULL;
	this->next=NULL;
	this->prev=NULL;
	}

	node(int data){
	this->data=data;
	this->next=NULL;
	this->prev=NULL;
	}

	node(int data, node* next, node* prev){
	this->data=data;
	this->next=next;
	this->prev=prev;
	}
};

node* reverse(node* &head){
	node* curr=head, *prev=NULL,*next;

	if(head==NULL || head->next==NULL){
		return head;
	}

	while(curr!=NULL){
		next=curr->next;
		curr->next=prev;

		prev=curr;
		curr=next;
	}
return prev;
}

void printlist(node* Node){
	while(Node!=NULL){
		cout<<Node->data<<"->";
		Node = Node->next;
	}
	cout<<"X";
	
}

int main(){
	node* head=new node(1);
	head->next=new node(2);
	head->next->next=new node(3);
	head->next->next->next=new node(4);
	head->next->next->next->next=new node(5);
	cout<<"Before Reverse:";
	printlist(head);
	
	cout<<endl<<"After Reverse:";
	head=reverse(head);
	printlist(head);
	return 0;
}
