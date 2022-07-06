//Find cycle in a linked list with O(1) memory
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
    bool hasCycle(ListNode *head) {
        if(head==NULL) return false;
        ListNode *fast=head;
        ListNode *slow=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast){return true;}
        }
        return false;
    }
};
// Other approach can be hashing, but it uses O(n) space and O(n) time.

bool hasCycle(ListNode *head){
    unordered_set<ListNode*> hash;
    ListNode *t=head;
    while(t){
        if(hash.find(t)!=hash.end()){
            return true;
        }
        hash.insert(t);
        t=t->next;
    }

}