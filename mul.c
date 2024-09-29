#include "monty.h"
/**
 * f_mul - multiplies the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_mul(stack_t **head, unsigned int counter)
{
	stack_t *H;
	int len = 0, P;

	H = *head;
	while (H)
	{
		H = H->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	H = *head;
	P = H->next->n * H->n;
	H->next->n = P;
	*head = H->next;
	free(H);
}
