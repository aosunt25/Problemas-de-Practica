// Return Kth to last
/*
Implement an algorithm to find the kth element to last element of a singly linked list
*/

#include <iostream>

using namespace std;

struct Node {
	int data = 0;
	Node * next = nullptr;
};

void insert(Node * & head, int data ){
    Node *newNode = new Node;
    newNode ->data = data;
    newNode -> next = head;
    head =  newNode;
}

void findKth(Node * head, int kth){
    int counter = 0;
    Node * curr = head;
    while(curr){
        ++counter;
        curr = curr -> next;
    }
    curr = head;
    for (int i = counter; i > (counter - kth); i--)
    {
        curr = curr-> next;
    }
    cout<<curr->data<<endl;
}