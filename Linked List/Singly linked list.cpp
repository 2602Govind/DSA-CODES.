#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    // Constructor
    node(int data) {
        this->data = data;
        this->next = NULL;
    }
    //destructor
    ~node(){int value=this->data;
    if(this->next!=NULL){
    	delete next;
    	this->next=NULL;
	}
	
	cout<<"memory is free for node with data"<<value<<endl;
	}
};

// Insertion at head
void insertAtHead(node* &head, int d) {
    node* temp = new node(d);
    temp->next = head;
    head = temp;
}

// Function to print the linked list
void print(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout << endl;  // Add a newline for better formatting
}

// Insertion at tail
void insertAtTail(node* &tail, int d) {
    node* temp = new node(d);
    tail->next = temp;
    tail = temp;
}
// insertion at given position
void insertatposition(node* &tail,node* & head,int position,int d){
	if (position==1){
		insertAtHead (head ,d);
		return ;
		
	}
	node* temp=head;
	int cnt=1;
	while(cnt<position-1){
		temp=temp->next;
		cnt++;
	}
	// insert at last 
	
	if(temp->next==NULL){
		insertAtTail(tail,d);
		return ;
	}
	node* nodetoinsert=new node(d);
	nodetoinsert->next=temp->next;
	temp->next=nodetoinsert;
}

///deletion in linked list


void deletenode( int position,node* &head){
	if(position==1){
		node* temp=head;
		head=head->next;
		//memory free start node 
		temp->next=NULL;
		delete temp;
	}
	else{
		//deleting anty middle or last node
		
		node* current =head;
		node* prev=NULL;
		
		int cnt=1;
		while(cnt<position){
			prev=current;
			current=current->next;
			cnt++;
			
		}
		prev->next=current->next;
		current->next=NULL;
		delete current;
		
	}
}
int main() {
    // Creating the first node
    node* node1 = new node(23);
    node* head = node1;
    node* tail = node1;

    // Printing the initial list
    print(head);

    // Inserting new nodes at the tail
    insertAtTail(tail, 12);
    print(head);

    insertAtTail(tail, 34);
    print(head);
    insertatposition(tail,head,2,37);
    print(head);
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;
    deletenode(4,head);
    print(head);

    return 0;
}

