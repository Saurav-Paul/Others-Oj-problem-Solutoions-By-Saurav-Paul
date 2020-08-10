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
//[1,2,3,4,5,6]
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* A = head ;
        ListNode* B = head ;
        while(A->next != NULL){
            A = A->next ;
            B = B->next ;
            if(A->next == NULL) break ;
            A = A->next ;
        }
        return B ;
    }
    
};
