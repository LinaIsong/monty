#include "monty.h"
/**
  *f_sub- sustraction
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *P;
	int S, N;

	P = *head;
	for (N = 0; P != NULL; N++)
		P = P->next;
	if (N < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	P = *head;
	S = P->next->n - P->n;
	P->next->n = S;
	*head = P->next;
	free(P);
}
