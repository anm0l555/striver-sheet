//Merge two sorted List
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        ListNode* ptr=temp1;
        if(list1==NULL){
            return list2;
        }
        if(list2==NULL){
            return list1;
        }
        if(temp1->val> temp2->val){
            ptr=temp2;
            temp2=temp2->next;
        }else{
            temp1=temp1-> next;
        }
        ListNode* ans=ptr;
        while(temp1!=NULL && temp2!=NULL){
            if(temp1->val < temp2->val){
                ans->next=temp1;
                temp1=temp1->next;
            }else{
                ans->next=temp2;
                temp2=temp2->next;
            }
            ans=ans->next;
        }
        // while(temp1!=NULL){
        //     ans->next=temp1;
        //     temp1=temp1->next;
        //     ans=ans->next;
        // }
        // while(temp2!=NULL){
        //     ans->next=temp2;
        //     temp2=temp2->next;
        //     ans=ans->next;
        // }
        if(temp1!=NULL){
            ans->next=temp1;
        }else{
            ans->next=temp2;
        }
        //1->5->7->10;
        //4->7->9
        return ptr;
    }
};