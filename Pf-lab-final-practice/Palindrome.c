#include <stdio.h>
#include <string.h>
void returnstr(char word[][20], int words)
{

    for (int i = 0; i < words; i++)
    {
        if (strlen(word[i]) == 1)
        {
            printf("Palindrome Word is %s", word[i]);
            return;
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
            printf("%s Word is Palindrome", word[i]);
            return;
        }
    }
    printf("NO word is Palindrome!");
}
int main()
{
    char word[5][20];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Word %d: ", i + 1);
        scanf(" %[^\n]", word[i]);
    }
    returnstr(word, 5);
}