#include<stdlib.h>
#include<stdio.h>

void print_list(node_t * head);

typedef struct node{
	int val;
	struct node * next;
} node_t;

int main(int argc, char const *argv[])
{
	node_t * head = NULL;
	head = malloc(sizeof(node_t));

	if (head == NULL)
	{
		return 1;
	}

	head->val = 1;
	head->next = malloc(sizeof(node_t));	
	head->next->val = 2;
	head->next->next = NULL;
}


void print_list(node_t * head){
	node_t * current = head;

	while(current != NULL){
		printf("%d\n", current->val);

		current = current->next;
	}
}
