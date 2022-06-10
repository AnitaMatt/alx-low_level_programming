#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - summing all n data in a list
 * @head: head pointer
 * Return: sum of the list
 */
int sum_dlistint(dlistint_t *head)
{
	int n = 0;
	dlistint_t *temp = head;

	while (temp)
	{
		n += temp->n;
		temp = temp->next;
	}
	return (n);
}
