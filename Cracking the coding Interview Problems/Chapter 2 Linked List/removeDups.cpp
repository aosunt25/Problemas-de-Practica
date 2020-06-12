//Remove Dups
/*
Write code to remove duplicates from an unsorted linked list
*/
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

void removeDups(Node * head){
    if(head == nullptr || (head && (head->next == nullptr))){
        return;
    }
    Node * curr = head;
	while(curr) {
		Node * runner = curr;
		while (runner->next != nullptr) {
			if (runner->next->data == curr->data) {
				runner->next = runner->next->next;
			} else {
				runner = runner->next;
			}
		}
		curr = curr->next;
	}
}