//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node* partition(struct Node* head, int x);

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

/* Function to print linked list */
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
int main(void) {
    int t;
    cin >> t;

    while (t--) {
        struct Node* head = NULL;
        struct Node* temp = NULL;
        int n;
        cin >> n;

        for (int i = 0; i < n; i++) {
            int value;
            cin >> value;
            if (i == 0) {
                head = new Node(value);
                temp = head;
            } else {
                temp->next = new Node(value);
                temp = temp->next;
            }
        }

        int k;
        cin >> k;

        // Solution ob;

        head = partition(head, k);
        printList(head);
    }

    return (0);
}

// } Driver Code Ends


// User function Template for C++

/*struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};*/

struct Node* partition(struct Node* head, int x) {
    // code here
       if (head == NULL || head->next == NULL)
        return head;

    Node *dummy1 = new Node(0);  // Nodes < x
    Node *dummy2 = new Node(0);  // Nodes == x
    Node *dummy3 = new Node(0);  // Nodes > x

    Node *head1 = dummy1;
    Node *head2 = dummy2;
    Node *head3 = dummy3;

    while (head != NULL) {
        if (head->data < x) {
            head1->next = head;
            head1 = head1->next;
        } else if (head->data == x) {
            head2->next = head;
            head2 = head2->next;
        } else if (head->data > x) {
            head3->next = head;
            head3 = head3->next;
        
        }
        head = head->next;
    }
    if (dummy2->next!=NULL){
head1->next= dummy2->next;
head2->next=dummy3->next;}
else head1->next= dummy3->next;

head3->next= NULL;

    delete dummy2;
    delete dummy3;

    return dummy1->next;
}