#include <elf.h>
#include <string.h>
#include "main.h"

/**
 * get_type_str - Get string representation of e_type
 * @e_type: ELF object file type
 *
 * Return: String representation of e_type, or "Unknown type" if invalid
 */
void get_type_str(uint16_t e_type)
{
	char *str;

	switch (e_type)
	{
		case ET_NONE:
			str = "NONE (Unknown type)";
			break;
		case ET_REL:
			str = "REL (Relocatable file)";
			break;
		case ET_EXEC:
			str = "EXEC (Executable file)";
			break;
		case ET_DYN:
			str = "DYN (Shared object file)";
			break;
		case ET_CORE:
			str = "CORE (Core file)";
			break;
		default:
			str = "Unknown type";
	}
	printf("  Type:                              %s\n", str);
}

/**
 * get_osabi_str - Get string representation of EI_OSABI
 * @osabi: ELF object file OS/ABI identification
 *
 * Return: String representation of EI_OSABI,
 *  or "UNIX - Unknown OS/ABI" if invalid
 */
void get_osabi_str(uint8_t osabi)
{
	char *str;

	switch (osabi)
	{
		case ELFOSABI_SYSV:
			str = "UNIX - System V";
			break;
		case ELFOSABI_HPUX:
			str = "UNIX - HP-UX";
			break;
		case ELFOSABI_NETBSD:
			str = "UNIX - NetBSD";
			break;
		case ELFOSABI_LINUX:
			str = "UNIX - Linux";
			break;
		case ELFOSABI_SOLARIS:
			str = "UNIX - Solaris";
			break;
		case ELFOSABI_IRIX:
			str = "UNIX - IRIX";
			break;
		case ELFOSABI_FREEBSD:
			str = "UNIX - FreeBSD";
			break;
		case ELFOSABI_TRU64:
			str = "UNIX - TRU64";
			break;
		case ELFOSABI_ARM:
			str = "ARM";
			break;
		default:
			str = "UNIX - Unknown OS/ABI";
	}
	printf("  OS/ABI:                            %s\n", str);
}

/**
 * get_data_str - Get string representation of EI_DATA
 * @data: ELF object file data encoding
 *
 * Return: String representation of EI_DATA,
 * or "Invalid data encoding" if invalid
 */
void get_data_str(uint8_t data)
{
	char *str;

	switch (data)
	{
		case ELFDATA2LSB:
			str = "2's complement, little endian";
			break;
		case ELFDATA2MSB:
			str = "2's complement, big endian";
			break;
		default:
			str = "Invalid data encoding";
	}
	printf("  Data:                              %s\n", str);
}

/**
 * get_class_str - Get string representation of EI_CLASS
 * @cls: ELF object file class
 *
 * Return: String representation of EI_CLASS, or "Invalid class" if invalid
 */
void get_class_str(uint8_t cls)
{
	char *str;

	switch (cls)
	{
		case ELFCLASSNONE:
			str = "Invalid class";
			break;
		case ELFCLASS32:
			str = "ELF32";
			break;
		case ELFCLASS64:
			str = "ELF64";
			break;
		default:
			str = "Unknown class";
	}
	printf("  Class:                             %s\n", str);
}

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
	} /* read ELF header */
	if (read(fd, &ehdr, sizeof(ehdr)) != sizeof(ehdr))
	{
		fprintf(stderr, "Error: cannot read ELF header from file %s\n", argv[1]);
		exit(98);
	} /* verify ELF magic number */
	if (memcmp(ehdr.e_ident, ELFMAG, SELFMAG) != 0)
	{
		fprintf(stderr, "Error: file %s is not an ELF file\n", argv[1]);
		exit(98);
	} /* print ELF header information */
	printf("ELF Header:\n  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", ehdr.e_ident[i]);
	printf("\n");
	get_class_str(ehdr.e_ident[EI_CLASS]);
	get_data_str(ehdr.e_ident[EI_DATA]);
	printf("  Version:                           %d (current)\n",
			ehdr.e_ident[EI_VERSION]);
	get_osabi_str(ehdr.e_ident[EI_OSABI]);
	printf("  ABI Version:                       %d\n",
			ehdr.e_ident[EI_ABIVERSION]);
	get_type_str(ehdr.e_type);
	printf("  Entry point address:               0x%lx\n",
			(unsigned long) ehdr.e_entry);
	close(fd);
	return (0);
}

