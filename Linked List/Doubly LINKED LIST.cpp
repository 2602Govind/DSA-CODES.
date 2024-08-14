#include<iostream>
using namespace std;

class node {
    public:
        int data;
        node* prev;
        node* next;
        
        // Constructor
        node(int d) {
            this->data = d;
            this->prev = NULL;
            this->next = NULL;
        }   
        //destructor for free space
		~node (){
			int val=this->data;
			if(next!=NULL){
				delete next;
				next=NULL;
			}
			
		}   
};

// Function to print the doubly linked list
void print(node* head) {
    node* temp = head;
    while(temp != NULL) {
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout<<endl;
}

// Function to get the length of the doubly linked list
int getlength(node* head) {
    int len = 0;
    node* temp = head;
    while(temp != NULL) {
        len++;
        temp = temp->next;
    }
    return len; // Return the length
}

// Function to insert a node at the head of the doubly linked list
void insertionathead(node*& head, int d) {
    node* temp = new node(d);
    temp->next = head;
    if (head != NULL) {
        head->prev = temp;
    }
    head = temp; // Update the head pointer
}

//insert at tail

void insertattail(node* &tail,int d)
{
	
	node* temp=new node(d);
	tail->next=temp;
	temp->prev=tail;
	tail=temp;
}

//insertion at given position
void insertatposition(node* &tail,node* & head,int position,int d){
	if (position==1){
		insertionathead (head ,d);
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
		insertattail(tail,d);
		return ;
	}
	node* nodetoinsert=new node(d);
	nodetoinsert->next=temp->next;
	temp->next=nodetoinsert;
	nodetoinsert->prev=temp;
}

//deletion in doubly linked list

void deletenode( int position,node* &head){
	if(position==1){
		node* temp=head;
		temp -> next -> prev=NULL;
			head=temp->next;
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
	current->prev=NULL;
	prev->next=current->next;
	current->next=NULL;
		delete current;
		
	}
}
	

int main() {
    node* node1 = new node(44);
    node* head = node1;
    node* tail=node1;

    print(head);
    cout << "Length: " << getlength(head) << endl;

    insertionathead(head, 3);
    print(head);
    
    insertionathead(head, 444);
    print(head);
    
    insertionathead(head, 54);
    print(head);
    insertattail(tail,25);
    print(head);
    
    insertatposition(tail,head,6,322);
    print( head);
    
    deletenode(3,head);
    print(head);
    cout << "Final Length: " << getlength(head) << endl;

    return 0;
}

