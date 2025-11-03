# 0x1A.C - Hash Tables
#### Requirements
* Allowed editors: vi, vim, emacs
* Use Betty style
* Not allowed to use global variables
* No more than 5 functions per file
* Allowed to use the C standard library
* Prototypes in `hash_tables.h`
* Compiled with `-Wall -Werror -Wextra -pedantic -std=gnu89`
* Use the data structures;
    ```C
    /**
     * struct hash_node_s - Node of a hash table
     *
     * @key: The key, string
     * The key is unique in the HashTable
     * @value: The value corresponding to a key
     * @next: A pointer to the next node of the List
     */
    typedef struct hash_node_s
    {
         char *key;
         char *value;
         struct hash_node_s *next;
    } hash_node_t;
    
    /**
     * struct hash_table_s - Hash table data structure
     *
     * @size: The size of the array
     * @array: An array of size @size
     * Each cell of this array is a pointer to the first node of a linked list,
     * because we want our HashTable to use a Chaining collision handling
     */
    typedef struct hash_table_s
    {
         unsigned long int size;
         hash_node_t **array;
    } hash_table_t;
    ```

#### Python Dictionaries
Python dictionaries are implemented using hash tables. After completing this project, you will be able to better/
understand the power and simplicity of Python dictionaries. Learn how dictionaries are implemented in Python.../
Note that there is a difference between a dictionary and a hash table and not all dictionaries are implemented/
using hash tables.

#### Tasks
1. 0.>>> ht = {}: write a function that creates a hash table
2. 1.djb2: write a hash function implementing the djb2 algorithm
3. 2.key -> index: write a function that gives you the index of a key
4. 3.>>> ht['betty'] = 'cool': write a function that adds an element to the hash table
5. 4.>>> ht['betty']: write a function that retrieves a value associated with a key
6. 5.>>> print(ht): write a function that prints a hash table
7. 6.>>> del ht: write a function that deletes a hash table
8. 7.$ht['Betty'] = 'Cool': rewrite the previous functions using these data structures:
    ```C
    /**
     * struct shash_node_s - Node of a sorted hash table
     *
     * @key: The key, string
     * The key is unique in the HashTable
     * @value: The value corresponding to a key
     * @next: A pointer to the next node of the List
     * @sprev: A pointer to the previous element of the sorted linked list
     * @snext: A pointer to the next element of the sorted linked list
     */
    typedef struct shash_node_s
    {
         char *key;
         char *value;
         struct shash_node_s *next;
         struct shash_node_s *sprev;
         struct shash_node_s *snext;
    } shash_node_t;
    
    /**
     * struct shash_table_s - Sorted hash table data structure
     *
     * @size: The size of the array
     * @array: An array of size @size
     * Each cell of this array is a pointer to the first node of a linked list,
     * because we want our HashTable to use a Chaining collision handling
     * @shead: A pointer to the first element of the sorted linked list
     * @stail: A pointer to the last element of the sorted linked list
     */
    typedef struct shash_table_s
    {
         unsigned long int size;
         shash_node_t **array;
         shash_node_t *shead;
         shash_node_t *stail;
    } shash_table_t;
    ```
   * shash_table_t *shash_table_create(unsigned long int size);
   * int shash_table_set(shash_table_t *ht, const char *key, const char *value);
     * The key/value pair should be inserted in the sorted list at the right place
     * Note that here we do not want to do exactly like PHP: we want to create a sorted linked list, by key (sorted on ASCII value), that we can print by traversing it.
   * char *shash_table_get(const shash_table_t *ht, const char *key);
   * void shash_table_print(const shash_table_t *ht);
     * Should print the hash table using the sorted linked list
   * void shash_table_print_rev(const shash_table_t *ht);
     * Should print the hash tables key/value pairs in reverse order using the sorted linked list
   * void shash_table_delete(shash_table_t *ht);
   * You are allowed to have more than 5 functions in your file
   
