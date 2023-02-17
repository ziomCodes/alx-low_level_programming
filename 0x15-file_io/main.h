#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

#define SERR STDERR_FILENO
#define BUFFSIZE 1204

ssize_t read_textfile(const char *filename, size_t letters);

#endif
