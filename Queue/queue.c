#include <stddef.h>
#include <stdbool.h>
#include <stdio.h>
#include "queue.h"


bool is_empty(Queue *q) {
	return (q->length == 0);
}
static Node* new_node(int num) {
	Node* node = (Node*)malloc(sizeof(Node));
	node->value = num;
	node->next = NULL;
	return node;
}

void delete_queue(Queue* queue) {
	free(queue);
	queue->first = NULL;
	queue->last = NULL;
	queue->length = 0;
	
}

Queue* new_queue() {
	Queue* que = (Queue*)malloc(sizeof(Queue));
	que->first = NULL;
	que->last = NULL;
	que->length = 0;
	return que;
}

void add_value(Queue *q, int val) {
	Node* n = new_node(val);
	if (is_empty(q))
	{
		q->first = n;
		q->last = n;
	}
	else
	{
		q->last->next = n;
		q->last = n;
	}
	q->length++;
}

void print_queue(Queue* q) {
	Node* to_print = q->first;
	if(to_print!= NULL)
		printf("[");
	while (to_print != NULL) {
		if (to_print->next == NULL) {
			printf("%d]\n", to_print->value);
			to_print = to_print->next;
		}
		else
		{
			printf("%d, ", to_print->value);
			to_print = to_print->next;
		}
	}	
}

int delete_first(Queue *q) {
	int val2ret = q->first->value;
	q->first = q->first->next;
	q->length--;
}
int first_element(Queue* q) {
	return q->first->value;
}