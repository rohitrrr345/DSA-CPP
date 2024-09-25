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
    ListNode* sortList(ListNode* head) {
        vector<int>ans;
        ListNode*temp=head;
     
        while(temp!=NULL){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        sort(ans.begin(),ans.end());
        int n=ans.size();
        int i=0;
       temp=head;
      while(i<n&& temp!=NULL){
       temp->val=ans[i];
       temp=temp->next;
       i++;
      }
        return head;
    }
};
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

    ListNode* findMid(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head -> next;
    
    while(fast != NULL && fast -> next != NULL) {
        slow = slow -> next;
        fast = fast -> next -> next; 
    }
    return slow;
}

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL){
            return list2;
        }
         if(list2==NULL){
            return list1;
        }
        ListNode *result=NULL;
        if(list1->val<list2->val){
            result=list1;
           result->next= mergeTwoLists(list1->next,list2);
        }
         else{
            result=list2;
          result->next= mergeTwoLists(list1,list2->next);
        }
        return result;
    }
    
    
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode*left=head;
     ListNode*middle=findMid(head);
        ListNode*right=middle->next;
        middle->next=NULL;
        left=sortList(left);
         right=sortList(right);

        ListNode*ans=mergeTwoLists(left,right);
        return ans;
    }
};