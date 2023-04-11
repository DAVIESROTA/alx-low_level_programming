#include "lists.h"
#include <stdlib.h>

typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

listint_t *add_nodeint_end(listint_t **head, const int n)
	listint_t *last-node, temp;

	last-node = malloc(sizeof(listint_t));
	if (last-node == NULL)
{
	return NULL;
}

last-node ->n = n;
last_node ->next = NULL;

if (*head == NULL)
{
	*head = last-node;
}

else 
{
	*head = temp
		while(temp -> next != NULL)
		{
			temp = temp ->next;
		}

	temp ->next = last-node;
}
return last-node;

int main()
{
	add_nodeint_end(&head, n)
		return 0;
}

