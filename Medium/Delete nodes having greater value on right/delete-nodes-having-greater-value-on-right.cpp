//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
    Node* solve(Node* curr, int &maxi){
        if(curr == NULL) return NULL;
        
        // recursively call the next node and also retrieve it
        Node* after = solve(curr->next, maxi);
        
        // if the next node it not NULL, this means it needs to be deleted
        if(after != NULL){
            Node* temp = curr->next;
            curr->next = after;
            delete temp; // don't just reassign the next pointer, properly delete the next node to prevent memory leakage
        }
        
        maxi = max(maxi, curr->data);
        
        // if the current node's value is less than maximum, return the next pointer indicating the current node needs to be deleted
        return (maxi > curr->data)? curr->next: NULL;
    }
    
    Node *compute(Node *head)
    {
        // your code goes here
        int maxi = INT_MIN;
        
        Node* first = solve(head, maxi);
        
        return (!first)?head:first; 
    }
    
};
   


//{ Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}

// } Driver Code Ends