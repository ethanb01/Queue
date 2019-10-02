#include <stdio.h>
#include "queue.h"

int main() {
	Queue* mq = new_queue();
	add_value(mq, 1);
	add_value(mq, 2);
	add_value(mq, 3);
	print_queue(mq);
	delete_queue(mq);
	print_queue(mq);

	return 0;
}