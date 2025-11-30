#include <stdio.h>
#include <string.h>
#include<stdlib.h>
char *returnstr(char **word, int words)
{

    for (int i = 0; i < words; i++)
    {
        if (strlen(word[i]) == 1)
        {
           
            return word[i];
        }
        int found = 0;
        int left = 0, right = strlen(word[i]) - 1;

        while (left < right)
        {
            if (word[i][left] == word[i][right])
            {
                found = 1;
            }
            else
            {
                found = 0;
            }
            right--;
            left++;
        }
        if (found)
        {
           
            return word[i];
        }
    }
  return " ";
}
int main()
{
    char *word[20];
    for (int i = 0; i < 5; i++)
    {
        word[i] = malloc(100);
        printf("Enter Word %d: ", i + 1);
        scanf(" %[^\n]", word[i]);
    }
   char *wo = returnstr(word, 5);
   printf("%s",wo);

}