#include "hash_tables.h"


/**
 * key_index - computes the index of a key for the hash array
 * @key: (str) key whose index is required
 * @size: (ul) size of the array of the hash table
 *
 * Return: (ul) the index at which the key/value pair should be stored in the
 * array of the hash table
 * NB:
 * - this function should use the `hash_djb2` function
 * - it should be used for all remaining tasks
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
