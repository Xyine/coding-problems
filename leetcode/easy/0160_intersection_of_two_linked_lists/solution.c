#include <stdio.h>

// Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};

int getLengthList (struct ListNode *head) {
    int length = 0;

    while (head) {
        length++;
        head = head->next;
    }

    return length;
}

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    int lenA = getLengthList(headA);
    int lenB = getLengthList(headB);
    int dif = lenA - lenB;

    while (dif < 0) {
        headB = headB->next;
        dif++;
    }

    while (dif > 0) {
        headA = headA->next;
        dif--;
    }

    while (headA != headB) {
        headA = headA->next;
        headB = headB->next;
    }
    return headA;
}

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *a = headA, *b = headB;
    while (a != b) {
        a = !a ? headB : a->next; // same as a == NULL
        b = !b ? headA : b->next;
    }
    return a;
}
