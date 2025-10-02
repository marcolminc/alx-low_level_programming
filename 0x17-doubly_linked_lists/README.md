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
