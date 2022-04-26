#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - function that sums all the data (n) of a listint_t
 * linked list and returns n
 * @head: head pointer
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp != 0)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
