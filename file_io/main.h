#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <unistd.h>
#include <string.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int _putchar(char c);
int append_text_to_file(const char *filename, char *text_content);
void error_exit(char *msg, int code);

#endif /* MAIN_H */
