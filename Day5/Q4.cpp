// REmove Nth node from last
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
       ListNode* tmp=head;
       //case if we have to delete the head itself
        if(count==n){
            return head->next;
        }
       int x=count-n;
       //case when we have to delete last node itself
       if(count-1==x){
           x--;
           while(x--){
               tmp=tmp->next;
           }
           tmp->next=tmp->next->next;
       } else{
        //case when we have to delete any node other than last node
           while(x--){
            tmp=tmp->next;
            }
        
            tmp->val=tmp->next->val;
            tmp->next=tmp->next->next;
           
       }
        return head;
        
        
    }
};
//optimal approach using fast and slow pointer
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * start = new ListNode();
        start -> next = head;
        ListNode* fast = start;
        ListNode* slow = start;     

        for(int i = 1; i <= n; ++i)
            fast = fast->next;
    
        while(fast->next != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
        
        slow->next = slow->next->next;
        
        return start->next;
    }
};