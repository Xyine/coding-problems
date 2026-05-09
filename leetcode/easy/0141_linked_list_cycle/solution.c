#include <stdbool.h>
#include <stdio.h>


// Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};


// Floyd's cycle detection algorithm.
// Fast advances two nodes at a time while slow advances one.
// If a cycle exists, fast will eventually meet slow.
// It takes at most the length of the cycle.
bool hasCycle(struct ListNode *head) {
    if (head == NULL || head->next == NULL) {
        return false;
    }
    
    struct ListNode *slow = head;
    struct ListNode *fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            return true;
        }
    }
    return false;
}
