#include "queue.h"


static Node* new_node(int num) {
	Node* node = (Node*)malloc(sizeof(Node));
	node->value = num;
	node->next = NULL;
	return node;
}

Queue* new_queue() {

}