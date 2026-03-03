/*Command use to compil*/ 
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long baseline_loop.c -o baseline_loop

/*Result of three excecutions*/

harinaor@LAPTOP-8MJ5TNTO:~/holbertonschool-low_level_programming/benchmarking
$ ./baseline_loop
Iterations: 100000000
Execution time: 0.095715 seconds

harinaor@LAPTOP-8MJ5TNTO:~/holbertonschool-low_level_programming/benchmarking$ ./

baseline_loop
Iterations: 100000000
Execution time: 0.086956 seconds

harinaor@LAPTOP-8MJ5TNTO:~/holbertonschool-low_level_programming/benchmarking$ ./

baseline_loop
Iterations: 100000000
Execution time: 0.087148 seconds