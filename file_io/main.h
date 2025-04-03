#ifndef MAIN_H
#define MAIN_H

#include <unistd.h> /* for ssize_t */
#include <stdlib.h> /* for size_t */

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);

#endif /* MAIN_H */
