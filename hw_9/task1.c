#include <stdio.h>
#include <string.h>

#define SIZE 100
#define ALPHABET 26

void inputFromFile(char *word1, char *word2)
{
    FILE *input;
    input = fopen("input.txt", "r");
    fscanf(input, "%s%s", word1, word2);
    fclose(input);
}

void fillingАlphabet(char *word, int *letters)
{
    for (int i = 0; i < strlen(word); i++)
    {
        letters[word[i] - 'a']++;
    }
}

void outputFromFile(char *word1, char *word2)
{
    FILE *output;
    output = fopen("output.txt", "w");
    int letters1[ALPHABET] = {0};
    int letters2[ALPHABET] = {0};
    fillingАlphabet(word1, letters1);
    fillingАlphabet(word2, letters2);
    for (int i = 0; i < ALPHABET; i++)
    {
        if (letters1[i] == letters2[i] && letters1[i] == 1)
        {
            fprintf(output, "%c ", i + 'a');
        }
    }
    fclose(output);
}

int main(int argc, char const *argv[])
{
    char word1[SIZE];
    char word2[SIZE];
    inputFromFile(word1, word2);    
    outputFromFile(word1, word2);
    return 0;
}
