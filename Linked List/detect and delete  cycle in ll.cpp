#include <iostream>
using namespace std;

// Definition for the Node class
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Function to detect a loop in the linked list using Floyd's Cycle Detection algorithm
Node* floydDetectLoop(Node* head) {
    if (head == NULL)
        return NULL;

    Node* slow = head;
    Node* fast = head;

    while (slow != NULL && fast != NULL) {
        fast = fast->next;
        if (fast != NULL) {
            fast = fast->next;
        }
        slow = slow->next;

        if (slow == fast) {
            return slow; // Loop detected
        }
    }

    return NULL; // No loop
}

// Function to get the starting node of the loop
Node* getStartingNode(Node* head) {
    if (head == NULL)
        return NULL;

    Node* intersection = floydDetectLoop(head);

    if (intersection == NULL)
        return NULL;

    Node* slow = head;

    while (slow != intersection) {
        slow = slow->next;
        intersection = intersection->next;
    }

    return slow; // Starting node of the loop
}

// Function to remove the loop in the linked list
Node* removeLoop(Node* head) {
    if (head == NULL)
        return NULL;

    Node* startOfLoop = getStartingNode(head);

    if (startOfLoop == NULL)
        return head;

    Node* temp = startOfLoop;

    while (temp->next != startOfLoop) {
        temp = temp->next;
    }

    temp->next = NULL; // Break the loop
    return head;
}

// Utility function to insert a new node at the end of the list
void insertNode(Node*& head, int data) {
    Node* newNode = new Node(data);
    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Utility function to create a loop in the linked list for testing
void createLoop(Node* head, int pos) {
    if (head == NULL)
        return;

    Node* temp = head;
    Node* loopNode = NULL;
    int count = 1;

    while (temp->next != NULL) {
        if (count == pos)
            loopNode = temp;
        temp = temp->next;
        count++;
    }

    temp->next = loopNode; // Create a loop
}

// Utility function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Main function to test the above functions
int main() {
    Node* head = NULL;

    // Inserting nodes
    insertNode(head, 1);
    insertNode(head, 2);
    insertNode(head, 3);
    insertNode(head, 4);
    insertNode(head, 5);

    // Creating a loop for testing
    createLoop(head, 3);

    // Detect and remove the loop
    if (floydDetectLoop(head) != NULL) {
        cout << "Loop detected and removed." << endl;
        head = removeLoop(head);
    } else {
        cout << "No loop detected." << endl;
    }

    // Print the linked list after removing the loop
    printList(head);

    return 0;
}

