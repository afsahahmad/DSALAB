#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(NULL) {}
};

Node* createNode(int val) {
    return new Node(val);
}

Node* SLL(int arr[], int n) {
    if (n == 0) {
        return NULL;
    }

    Node* head = createNode(arr[0]);
    Node* current = head;

    for (int i = 1; i < n; i++) {
        current->next = createNode(arr[i]);
        current = current->next;
    }

    return head;
}

Node* reverseList(Node* head) {
    Node* prev = NULL;
    Node* current = head;

    while (current != NULL) {
        Node* next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
}

bool isPalindrome(Node* head) {
    if (head == NULL || head->next == NULL) {
        return true;
    }

    Node* slow = head;
    Node* fast = head;
    Node* prev_slow = head;
    Node* mid = NULL;
    bool isPalin = true;

    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        prev_slow = slow;
        slow = slow->next;
    }

    if (fast != NULL) { 
        mid = slow;
        slow = slow->next;
    }

    Node* secondHalf = slow;
    prev_slow->next = NULL; 

    secondHalf = reverseList(secondHalf); 

    Node* p1 = head;
    Node* p2 = secondHalf;

    while (p1 != NULL && p2 !=NULL) {
        if (p1->data != p2->data) {
            isPalin = false;
            break;
        }
        p1 = p1->next;
        p2 = p2->next;
    }

    secondHalf = reverseList(secondHalf);
    if (mid != NULL) {
        prev_slow->next = mid;
        mid->next = secondHalf;
    } else {
        prev_slow->next = secondHalf;
    }

    return isPalin;
}

void DisplayList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "NULL!" <<endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    Node* head = SLL(arr, n);

    cout << "Linked List: ";
    DisplayList(head);

    if (isPalindrome(head)) {
       cout << "The linked list is a palindrome." << endl;
    } else {
    	cout << "The linked list is not a palindrome." << endl;
    }

    return 0;
}

