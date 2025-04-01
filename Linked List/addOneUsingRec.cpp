class Solution {
    public:
      void solve(Node*head, int&carry){
          if(!head) return;
          solve(head->next, carry);
          
         int sum=head->data+carry;
          int digit=sum%10;
          carry = sum / 10;
          
          head->data=digit;
          
          
      }
      Node* addOne(Node* head) {
          // Your Code here
          // return head of list after adding one
          int carry = 1;
          solve(head, carry);
          if(carry){
              Node* newHead = new Node(carry);
              newHead->next = head;
              head = newHead;
          }
          return head;
      }
  };
  