//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data % 10;
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends
// User function template for C++

/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
    Node* reverse(Node* head){
        Node* next;
        Node* prev=NULL;
        while(head){
            next=head->next;
            head->next=prev;
            prev=head;
            head=next;
        }
        return prev;
    }
    Node* addOne(Node* head) {
        // Your Code here
        // return head of list after adding one
        head=reverse(head);
        Node* temp=head;
        int carry=1;
        while(temp){
            temp->data=temp->data+carry;
            if(temp->data<10){
                carry=0;
                break;
            }
            else{
                carry=1;
                temp->data=0;
            }
            temp=temp->next;
        }
        if(carry==1){
            temp=reverse(head);
            Node* newNode=new Node(1);
            newNode->next=temp;
            head=newNode;
        }
        else{
            head=reverse(head);
        }
        return head;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        if (arr.empty()) {
            cout << -1 << endl;
            continue;
        }

        int data = arr[0];
        struct Node* head = new Node(data);
        struct Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head);
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends