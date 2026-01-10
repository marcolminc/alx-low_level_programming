# 0x1E. C - Search Algorithms
###### Requirements
* Allowed editors: `vi`, `vim`, `emacs`
* All files will be compiled on Ubuntu 20.04 LTS using **gcc**, using the options:
    ```zsh
    gcc -Wall -Werror -Wextra -pedantic std=gnu89    
    ```
* All files should end with a new line
* A `README.md` file, at the root folder of the project, is mandatory
* Code should use `Betty` style. It will be checked using *betty-style.pl* and *betty-doc.pl*
* Global variables are not allowed
* No more than five functions per file
* The only C standard function allowed is `printf`
* The prototypes of all functions should be included in a header file called `search_algos.h`
* All header files should be include-guarded

###### Big O Notation formats allowed
* O(1)
* O(n)
* O(n!)
* n*m -> O(nm)
* n² -> O(n^2)
* sqrt(n) -> O(sqrt(n))
* log(n) -> O(log(n))
* n*log(n) ->O(nlog(n))

### Tasks
1. 0.Linear search: Write a function that searches for a value in an array of integers using the Linear search algorithm
2. 1.Binary search: write a function that searches for a value in a sorted array of integers using the Binary search algorithm
3. 2.Big O #0: write the time complexity (worst case) of a linear search in an array of size n
4. 3.Big O #1: write space complexity (worst case) of an iterative linear search algorithm in an array of size n
5. 4.Big O #2: write the time complexity (worst case) of a binary search in an array of size n
6. 5.Big O #3: write the space complexity (worst case) of a binary search in an array of size n
7. 6.Big O #4: write the space complexity of a given function/algorithm:
```C
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```
8. 7.Jump search: Write a function that searches for a value in a sorted array of integers using the Jump search algorithm
9. 8
10. 9.Interpolation search: Write a function that searches for a value in a sorted array of integers using the interpolation search algorithm

