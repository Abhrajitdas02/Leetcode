//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node* head, Node* tail, int position)
{
    if(position==0) return;
    
    Node* walk = head;
    for(int i=1; i<position; i++)
        walk = walk->next;
    tail->next = walk;
}

int countNodesinLoop(Node* head);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, num;
        cin>>n;
        
        Node *head, *tail;
        cin>> num;
        head = tail = new Node(num);
        
        for(int i=0 ; i<n-1 ; i++)
        {
            cin>> num;
            tail->next = new Node(num);
            tail = tail->next;
        }
        
        int pos;
        cin>> pos;
        loopHere(head,tail,pos);
        
        cout<< countNodesinLoop(head) << endl;
    }
	return 0;
}

// } Driver Code Ends


/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

// //Function to find the length of a loop in the linked list.
// int countNodesinLoop(struct Node *head)
// {
//     // Code here
//     unordered_map<Node*,int> mp;
//     Node* temp=head;
//     int time=1,len=0;
//     while(temp!=NULL){
//         if(mp.find(temp)!=mp.end()){
//             int len=time-mp[temp];
//         }
//         else{
//             mp[temp]=time;
//             time++;
//             temp=temp->next;
//             }
//     }
//     return len;
// }

int findlen(Node* slow, Node* fast){
    fast=fast->next;
    int c=1;
    while(slow!=fast){
        fast=fast->next;
        c++;
    }
    return c;
 }
 
int countNodesinLoop(struct Node *head)
{
    Node* slow=head,*fast=head;
    while(fast->next && fast->next->next){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast) return findlen(slow,fast);
    }
    return 0;
}