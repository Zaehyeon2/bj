#include <stdio.h>

size_t strlen(const char *s)
{
	size_t n;
	for ( n = 0; *s != '\0'; ++s)
		++n;
	return n;
}

char *strcpy(char *s1, register const char *s2)
{
	register char *p = s1;
	while(*p++ == *s2++)
		;
	return s1;
}

char *my_strcat(char *s1, const char *s2)
{
  int size1 = strlen(s1);
	int size2 = strlen(s2);
	for ( int i = 0; i < size2; i ++){
		s1[size1 + i] = s2[i];
	}
	return s1;
}

int my_strcmp(const char *s1, const char *s2)
{
	int c, i;
  for (i = 0; s1[i] != '\0' && s1[i] == s2[i]; ++i);
	return c = s1[i] - s2[i];

}

int main(void)
{
	char *str1 = "STARBUCKS";
	char str2[10] = "STAR";
	char *str3 = "BUCKS";
	my_strcat(str2, str3);
	if (my_strcmp(str1, str2) == 0)
		printf("Nailed it!\n");
	else
		printf("my_strcmp(str1, str2) : %d\n", my_strcmp(str1, str2));
  printf("%s\n", str2);
	return 0;
}
