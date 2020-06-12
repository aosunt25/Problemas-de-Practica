//Delete Middle Node
/*
Implement an algorithm to delete a node in the middle
(i.e., any node but the first and las node, not necessarily the exact middle)
of a singly linked list, given only access to the node
EXAMPLE:
Input: the node c from the linked list a -> b -> c -> d -> e -> f
Result: nothing is returned, but the new linked list looks like a -> b -> d -> e -> f
*/

#include <iostream>

using namespace std;

struct Node{
    int data = 0;
    Node *next = nullptr;
};

void insert(Node * & head, int data ){
    Node *newNode = new Node;
    newNode ->data = data;
    newNode -> next = head;
    head =  newNode;
}

void deleteNode(Node * node){
    if ( node == nullptr || node->next == nullptr ) {
        return;
    }
    Node * nextNode = node->next;
    node->data = nextNode->data;
    node->next = nextNode->next;
    delete nextNode;
}

int main(){

}