char *_strcat(char *dest, const char *src)
{
	char *dest_ptr = dest;

	/* Move the pointer to the end of dest */
	while (*dest_ptr != '\0') {
		dest_ptr++;
	}

	/* Copy src to the end of dest */
	while (*src != '\0') {
		*dest_ptr = *src;
		dest_ptr++;
		src++;
	}

	/* Null-terminate the concatenated string */
	*dest_ptr = '\0';

	return dest;
}

