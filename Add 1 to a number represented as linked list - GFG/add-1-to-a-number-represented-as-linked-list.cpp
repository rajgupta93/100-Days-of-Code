// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


 // } Driver Code Ends
//User function template for C++

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

class Solution
{
    public:
    
    Node* reverser(Node *head)
    {
        if(head==NULL)
        return head;
        
        Node *prev=NULL;
        Node *curr=head,*nex;
        
        while(curr!=NULL)
        {
            nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
        }
        return prev;
    }
    
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        
        Node *newhead=reverser(head);
        Node *newcurr=newhead;
        
        int carry=1;
        
        while(newcurr!=NULL)
        {
            if(newcurr->data+carry>9)
            {
                
                carry=1;
                newcurr->data=0;
                
            }else
            {
                newcurr->data+=carry;
                carry=0;
            }
            newcurr=newcurr->next;
        }
        
       
         Node *n=reverser(newhead);
         
          if(carry>0)
        {
            Node *first=new Node(carry);
        
        first->next=n;
        n=first;
            
        }
         return n;
        
        
    }
};

// { Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 
  // } Driver Code Ends