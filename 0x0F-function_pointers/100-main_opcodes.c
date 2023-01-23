#include <stdio.h>
#include <stdlib.h>

/**
*main -  program that prints the opcodes of its own main function.
*@argc: number of arguments passed to the program
*@argv: array of arguments
*
*Return: on success, 1 or 2 in case of failure
*/

int main(int argc, char *argv[])
{

int num, bNum;
int (*address)(int, char **) = main;
unsigned char opcode;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

bNum = atoi(argv[1]);

if (bNum < 0)
{
printf("Error\n");
exit(2);
}

for (num = 0; num <  bNum; num++)
{
opcode = *(unsigned char *)address;
printf("%.2x", opcode);

if (num == bNum - 1)
continue;
printf(" ");
address++;
}
printf("\n");
return (0);
}
