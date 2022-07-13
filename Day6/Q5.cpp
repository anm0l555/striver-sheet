// To find starting point of loop
//optiised Approach
// Maintain fast and slow pointer, move fast by 2 steps while slow by one step. 
// If the cycle exists, fast and slow will collide, if not return NULL.
// Next to find the starting point of Linked List, initialize a dummy pointer to the head of the list.move slow and dummy  pointer by 1 step each till they collide,.
// The head where they collide is the starting point of Linked List

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* entry=head;
        if(head==NULL){
            return NULL;
        }
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow){
            
            while(entry!=slow){
                slow=slow->next;
                entry=entry->next;
            }
            return slow;
            };
        }
        
        
        return NULL;
    }
};

//Simple approach can be to use a hash table to store the nodes and check if the node is already present in the hash table.