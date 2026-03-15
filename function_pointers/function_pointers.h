#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/*function pointer*/
void print_name(char *name, void (*f)(char *));
void print_name_as_is(char *name);
void print_name_uppercase(char *name);
/*void array_iterator(int *array, size_t size, void (*action)(int));*/
/*int int_index(int *array, int size, int (*cmp)(int));*/
/*int (*get_op_func(char *s))(int, int);*/
/*Variadic functions*/
/*int sum_them_all(const unsigned int n, ...);*/
/*void print_numbers(const char *separator, const unsigned int n, ...);*/
/*void print_strings(const char *separator, const unsigned int n, ...);*/
/*void print_all(const char * const format, ...);*/

#endif