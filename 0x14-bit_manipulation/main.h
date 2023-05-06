#ifndef _MAIN_H_
#define _MAIN_H_

unsigned int binary_to_uint(const char *k);
void print_binary(unsigned long int m);
int _putchar(char c);
int get_bit(unsigned long int m, unsigned int indeq);
int set_bit(unsigned long int *w, unsigned int indeq);
int clear_bit(unsigned long int *w, unsigned int indeq);
unsigned int flip_bits(unsigned long int m, unsigned long int q);
int get_endianness(void);

#endif
