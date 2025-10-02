# 0x17.C - Doubly Linked Lists
#### Requirements
* allowed editors: vi, vim, emacs
* all the files will be interpreted/compiled on Ubuntu 20.04 LTS
* code should use Betty style
* not allowed to use global variables
* no more than 5 functions per file
* The only C standard library functions allowed are `malloc`, `free`, `printf` and `exit`
* prototypes of all functions should be included in a header file called `lists.h`
* all header files should be include-guarded
* use this data structure for this project:
    ```C
    /**
     * struct dlistint_s - doubly linked list
     * @n: integer
     * @prev: points to the previous node
     * @next: points to the next node
     *
     * Description: doubly linked list node structure
     * 
     */
    typedef struct dlistint_s
    {
        int n;
        struct dlistint_s *prev;
        struct dlistint_s *next;
    } dlistint_t;
    ```
  #### Tasks
1. 0.Print list: write a function that prints all the elements of a `dlistint_t` list
2. 1.List length: write a function that returns the number of elements in a linked `dlistint_t` list
3. 2.Add node: write a function that adds a new node at the beginning of a `dlistint_t` list
4. 3.Add node at the end: write a function that adds a new node at the end of a `dlistint_t` list
5. 4.Free list: write a function that frees a `dlistint_t` list

