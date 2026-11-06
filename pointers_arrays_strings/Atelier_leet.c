char *leet(char *s)
{
	char *start = s;
	char lettres[] = "aAeEoOtTlL";
	char nb = "4433007711";
	char *l;
	char *n; 

	while (*s != '\0')
	{
		l = lettres;
		n = nb;

		while (*l != '\0')
		{
			if (*s == *l)
			{
				*s = *n;
			}
			l++;
			n++;
		}
		s++;
	}

	return (start);
}