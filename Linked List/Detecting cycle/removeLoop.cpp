class Solution {
    public:
      // Function to remove a loop in the linked list.
      void removeLoop(Node* head) {
          Node* slow = head;
          Node* fast = head;
          
          while(fast && fast->next){
              slow = slow->next;
              fast = fast->next->next;
  
             if (slow == fast) {
              
                  slow = head;
                  // Special case: loop starts at head
                  if (slow == fast) {
                      while (fast->next != slow) {
                          fast = fast->next;
                      }
                      fast->next = nullptr;
                      return;
                  }
                  
                  Node* prev = 0;
                  while (slow != fast) {
                      slow = slow->next;
                      prev = fast;
                      fast = fast->next;
                      
                  }
                  prev->next = nullptr; 
                  return;
               }
          }
      }
  };