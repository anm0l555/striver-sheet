//Rotate a Linked List k times
//
ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL ||k==0){
            return head;
        }
        ListNode* temp1=head;
        int len=0;
        while(temp1->next!=NULL){
            len++;
            temp1=temp1->next;
        }
        len++;
        if(k>=len){
            k=k%len;
        }
        if(k==0) return head;
        ListNode* temp2=head;
        int count=len-k-1;
        while(count--){
            temp2=temp2->next;
            
        }
        ListNode* temp3=temp2->next;
        temp2->next=NULL;
        temp1->next=head;
        return temp3;
    }