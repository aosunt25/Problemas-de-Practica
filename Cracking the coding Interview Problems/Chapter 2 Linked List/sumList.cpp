//Sum List
/*
You have two numbers represented by a linked list, where each node contains a single digit.
The digit are stored in reverse order, such that the 1's digit is at the head of the list.
Write a function that adds the two numbers and return the sum linked list
EXMPLE:
Input: (7->1->6) + (5->9->2). That is 617 + 295
Output: 2 -> 1 -> 9 That is 912
*/

#include <iostream>

using namespace std;

struct Node{
    int data = 0;
    Node *next = nullptr;
};

Node * sumList(Node *list1 , Node *list2){
    if ( list1 == nullptr ) {
     return list2;
    }
    if ( list2 == nullptr ) {
        return list1;
    }

    // list3 will store result
    Node * list3 = nullptr;
    // for adding new nodes to tail of list3
    Node * list3Tail = nullptr;

    int value = 0, carry = 0;

    while( list1 || list2 ) {
        // add the values, if one of the list has already been traversed, add 0
        value = carry + (list1 ? list1->data : 0 ) + (list2 ? list2->data : 0);

        // get the new value and carry
        if ( value > 9 ) {
        carry = 1;
        value = value % 10;
        } else {
        carry = 0;
        }

        //new node
        Node * temp = new Node;
        temp->data = value;
        //if this is the first node, populate the result, else add to the tail
        if ( list3 == nullptr ) {
        list3 = temp;
        } else {
        list3Tail->next = temp;
        }

        //make new tail
        list3Tail = temp;

        if (list1) {
        list1 = list1->next;
        }

        if (list2) {
        list2 = list2->next;
        }
    }

    if ( carry > 0 ) {
        list3Tail->next = new Node;
        list3Tail->next->data = carry;
    }
    return list3;
}