#include <elf.h>
#include <string.h>
#include "main.h"

/*get_type_string(ehdr.e_type)
{

}
get_osabi_string(ehdr.e_ident[EI_OSABI])
{
}
gett_data_string(ehdr.e_ident[EI_DATA])
{
}
get_class_string(ehdr.e_ident[EI_CLASS])
{
}
ehdr.e_ident[EI_ABIVERSION];
ehdr.e_ident[EI_VERSION];
*/

/**
 * main - entry point of out program that displays the information
 * contained in the ELF header at the start of an ELF file.
 * @argc: argument count
 * @argv: argument vector.
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int fd, i;
	Elf64_Ehdr ehdr;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error: cannot open file %s\n", argv[1]);
		exit(98);
	}

	/* read ELF header */
	if (read(fd, &ehdr, sizeof(ehdr)) != sizeof(ehdr))
	{
		fprintf(stderr, "Error: cannot read ELF header from file %s\n", argv[1]);
		exit(98);
	}

	/* verify ELF magic number */
	if (memcmp(ehdr.e_ident, ELFMAG, SELFMAG) != 0)
	{
		fprintf(stderr, "Error: file %s is not an ELF file\n", argv[1]);
		exit(98);
	}

	/* print ELF header information */
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < SELFMAG; i++)
		printf("%02x ", ehdr.e_ident[i]);
	printf("\n");
/*	printf("  Class:                             %s\n",
*			get_class_string(ehdr.e_ident[EI_CLASS]));
*	printf("  Data:                              %s\n",
*			get_data_string(ehdr.e_ident[EI_DATA]));
*	printf("  Version:                           %d (current)\n",
*			ehdr.e_ident[EI_VERSION]);
*	printf("  OS/ABI:                            %s\n",
*			get_osabi_string(ehdr.e_ident[EI_OSABI]));
*	printf("  ABI Version:                       %d\n",
*			ehdr.e_ident[EI_ABIVERSION]);
*	printf("  Type:                              %s\n",
*			get_type_string(ehdr.e_type));
*	printf("  Entry point address:               0x%lx\n",
*			(unsigned long) ehdr.e_entry);
*/
	close(fd);
	return (0);
}
