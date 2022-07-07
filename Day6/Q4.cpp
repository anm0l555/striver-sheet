//Finding Palindrome in a Linked List in o(n) time and O(1) space
//Find the middle element of the linked list
//Reverse the list after the middle element
//Slow pointer will be pointing to the element just after the middle element, ans make a dummy pointer that will point to the head; 
//traverse through the linked list, if dummy and slow values matches all the time till slow reaches the NULL value, palindrome exists, else not
class Solution {
public:
    
    ListNode* reverseLL (ListNode* head){
        ListNode *prev=NULL;
        ListNode *curr=head;
        ListNode *next_p;
        while(curr){
            
            next_p=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next_p;
            
            
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast->next != NULL && fast->next ->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        //reverse linked list
        slow->next=reverseLL(slow->next);
        ListNode* dummy =head;
        ListNode* to_cmp=slow->next;
        while(to_cmp){
            if(to_cmp->val!=dummy->val){
                return false;
            }
            dummy=dummy->next;
            to_cmp=to_cmp->next;
            
        }
        return true;
    }
};