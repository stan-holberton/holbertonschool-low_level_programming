#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * append_text_to_file - ajoute du texte à la fin d'un fichier.
 * @filename: nom du fichier à modifier.
 * @text_content: texte à ajouter à la fin du fichier.
 *
 * Return: 1 en cas de succès, -1 en cas d'échec.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_status, text_len = 0;

	if (filename == NULL)
		return (-1);

	/* Ouvre le fichier en mode ajout (O_APPEND) */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* Si le texte à ajouter n'est pas NULL, écrit dans le fichier */
	if (text_content != NULL)
	{
		while (text_content[text_len] != '\0')
			text_len++;

		write_status = write(fd, text_content, text_len);
		if (write_status == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
