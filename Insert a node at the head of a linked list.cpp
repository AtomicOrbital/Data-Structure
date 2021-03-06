#include <bits/stdc++.h>
using namespace std;
class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;

        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};

class SinglyLinkedList {
    public:
        SinglyLinkedListNode *head;
        SinglyLinkedListNode *tail;

        SinglyLinkedList() {
            this->head = nullptr;
            this->tail = nullptr;
        }

};

void print_singly_linked_list(SinglyLinkedListNode* node, string s) {
    while (node) {
        cout << node->data;
        node = node->next;
        if (node) {
            cout << s;
        }
    }
}

void free_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        SinglyLinkedListNode* temp = node;
        node = node->next;

        free(temp);
    }
}

SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
 
 	SinglyLinkedListNode *newN = new SinglyLinkedListNode(data);
 	newN->next = llist;
	return newN;
}


int main(){
    SinglyLinkedList* llist = new SinglyLinkedList();
    int llist_count;
    cin >> llist_count;
    for (int i = 0; i < llist_count; i++) {
        int llist_item;
        cin >> llist_item;
    
        SinglyLinkedListNode* llist_head = insertNodeAtHead(llist->head, llist_item);
        llist->head = llist_head;
    }

    print_singly_linked_list(llist->head, "\n");
    cout << endl;
    free_singly_linked_list(llist->head);

    return 0;
}
