#include "monty.h"
/**
 * f_pall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *c;
	(void)counter;

	c = *head;
	if (c == NULL)
		return;
	while (c)
	{
		printf("%d\n", c->n);
		c = c->next;
	}
}
