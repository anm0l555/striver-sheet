//intersection of two linked list
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *t1=headA;
        
        while(t1){
            ListNode *t2=headB;
            while(t2){
                if(t1==t2){
                    return t1;
                }
                t2=t2->next;
            }
            t1=t1->next;
        }
        return NULL;
    }

//optimal Approach in O(1) space and O(n) time
ListNode *t1=headA;
ListNode *t2=headB;
set<ListNode*> hash;

while(t1){
    hash.insert(t1);
    t1=t1->next;
}
while(t2){
    if(hash.find(t2)!=hash.end()){
        return t2;
    }
    t2=t2->next;
}
return NULL;

//optimal approach with O(1) space and O(2*max(length of list1,length of list2)) time
ListNode *t1=headA;
ListNode *t2=headB;
while(t1!=t2){
    t1= t1==NULL?headB:t1->next;
    t2= t2==NULL?headA:t2->next;
}
return t1;