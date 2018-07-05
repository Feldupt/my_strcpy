int	my_putchar(char c)
{
  write(1, &c, 1);
}
  
int	my_putstr(char *str)
{
  int i;

  
  i = 0;
  while(str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
}

int	my_strcpy(char *src, char *dest)
{
  int i;

  i = 0;
  while(src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
}

int	main()
{
  char str[] = "Hello\n";
  char dest[] = "World\n";
  my_strcpy(str, dest);
  my_putstr(dest);
  return(0);
}
