#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
 size_t nu_m_ber = 0;

 while (h)
 {
 printf("%d\n", h->n);
 nu_m_ber++;
 h = h->next;
 }

 return (nu_m_ber);
}
