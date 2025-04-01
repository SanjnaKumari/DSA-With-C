class Solution {
    public:
      Node* reverseList(Node* &head){
          Node* curr = head;
          Node* prev=NULL;
          while(curr){
              Node* next = curr->next;
              curr->next=prev;
              prev=curr;
              curr=next;
          }
          return prev;
      }
      
      Node* addOne(Node* head) {
          //Step 1: Reverse List
          head=reverseList(head);
          //Step 2: Add One
          int carry=1;
          int sum=0;
          Node* temp = head;
          while(temp){
              sum =temp->data+carry;
              int digit = sum%10;
              carry=sum/10;
              temp->data=digit;
              if(temp->next==NULL && carry!=0){
                  Node* newNode = new Node(carry);
                  newNode->next=NULL;
                  temp->next=newNode;
                  temp=newNode;
              }
             
              temp=temp->next;
              
          }
         
          //Step 3: Reverse List
          head=reverseList(head);
          return head;
          
      }
  };