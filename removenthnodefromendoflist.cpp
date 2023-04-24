#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=1;
        struct ListNode* temp = head;
        while(temp->next!=NULL){
            count++;
            temp=temp->next;

        }
        if(count==1){
            head=NULL;
            return head;
        }
        temp = head;
        struct ListNode* ptr;

        if(n==1){
            ptr = temp;
            for(int i=0; i<count-1; i++){
                temp = temp->next;

            }
            free(temp);
            temp->next=NULL;
        }
        else if(n>1 && n<count){
            for(int j=0; j<count-n; j++){
            ptr = temp;
                temp = temp->next;
            }
            ptr->next = temp->next;
            free(temp);
            ptr = head;
            return head;

        }else {
            head = head->next;
            free(temp);
            return head;
        }

    return head;
    }
};

int main(){


    return 0;
}