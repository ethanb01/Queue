typedef struct Node {
	int value;
	struct Node* next;
}Node;

typedef struct Queue {
	Node* last;
	Node* first;
	int length;
}Queue;