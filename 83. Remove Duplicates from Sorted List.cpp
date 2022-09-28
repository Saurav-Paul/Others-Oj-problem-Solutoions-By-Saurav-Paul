//https://leetcode.com/problems/remove-duplicates-from-sorted-list/
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* actualHead = head;
        
        while(head != NULL){
            ListNode* prev = head;
            
            while(head != NULL){
                if(head->val != prev->val) break;
                head = head->next ;
            }
            
            prev->next = head;
            head = prev->next ;
        }
        
        return actualHead;
    }
};
