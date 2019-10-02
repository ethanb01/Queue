typedef struct Node {
	int value;
	struct Node* next;
}Node;

typedef struct Queue {
	Node* last;
	Node* first;
	int length;
}Queue;


Queue* new_queue();
void delete_queue(Queue*);
void add_value(Queue*,int);
void print_queue(Queue*);

