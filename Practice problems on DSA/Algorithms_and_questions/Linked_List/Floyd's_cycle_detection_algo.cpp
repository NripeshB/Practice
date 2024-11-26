//https://leetcode.com/problems/linked-list-cycle-ii/
#include <iostream>
using namespace std;



  struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode*tort = head;
        ListNode*hare = head;

        while(hare != NULL && hare->next != NULL){
            hare = hare->next->next;
            tort = tort->next;
            
            if(hare == tort){
                hare = head;
                while(hare != tort){
                    hare = hare->next;
                    tort = tort-> next;
                
            }
            return hare;
           

        }
        

    }
        return NULL;
    
    }
};

int main() {
    return 0;
}

//the same code can be used to remove the cycle
//simply by setting the node that we are returning 
//to NULL, thus transforming it into a linear linked list.