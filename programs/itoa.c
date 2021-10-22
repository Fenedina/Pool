 #include <stdlib.h>
#include <stdio.h>
char *ft_itoa(int nb)
{
 char *str;
 int i;
 int nbsave;

 nbsave = nb;
 i = 0;
 while (nbsave != 0)
 {
  nbsave /= 10;
  i++;
 }
 str = malloc(sizeof(char) * (i + 1));
 if (nb == 0)
 {
  str[0] = '0';
  str[1] = '\0';
  return(str);
 }
 if (nb < 0)
 {
  str[0] = '-';
  i++;
 }
 str[i] = '\0';
 i--;
 while (nb != 0)
 {
  if (nb % 10 < 0)
   str[i] = -1 * (nb % 10) + '0';
  else
   str[i] = (nb % 10) + '0';
  nb = nb / 10;
  --i;
 }
 return(str);
}
int main()
{
 printf("%s\n", ft_itoa(-2147483648));
 printf("%s\n", ft_itoa(0));
 printf("%s\n", ft_itoa(666));
 return (0);
}
