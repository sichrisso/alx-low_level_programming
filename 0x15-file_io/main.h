#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>


int _putchar(char);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void check99(ssize_t check, char *file, int fd_from, int fd_to)
int main(int argc, char *argv[])
void check100(int check, int fd)
void check97(int argc)
void check98(ssize_t check, char *file, int fd_from, int fd_to)
void read_error(char *argv)
void check_elf(Elf64_Ehdr *header)
void check_class(Elf64_Ehdr *header)
void check_data_ver(Elf64_Ehdr *header)
void check_type(Elf64_Ehdr *header)
void check_entry(Elf64_Ehdr *header)


#endif /* _MAIN_H_ */
