#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// List of keywords
char keywords[32][10] = {
    "auto","break","case","char","const","continue","default",
    "do","double","else","enum","extern","float","for","goto",
    "if","int","long","register","return","short","signed",
    "sizeof","static","struct","switch","typedef","union",
    "unsigned","void","volatile","while"
};

// Fuction to check if a word is a keyword
int isKeyword(char *word) {
    for(int i = 0; i < 32; i++) {
        if(strcmp(word, keywords[i]) == 0)
            return 1;
    }
    return 0;
}

// Function to check if a character is an operator
int isOperator(char ch) {
    char operators[] = "+-*/%<>=!&|^";
    for(int i = 0; i < strlen(operators); i++) {
        if(ch == operators[i])
            return 1;
    }
    return 0;
}

int main() {
    char ch, word[100];
    FILE *fp;
    int i = 0;

    //Open input file containing C code
    fp = fopen("input.c", "r");
    if (fp == NULL) {
        printf("Error in opening input file!\n");
        return 1;
    }

    printf("Lexical Analysis Output:\n\n");

    //Read character by character by character from file
    while ((ch = fgetc(fp)) != EOF) {
        if (isalnum(ch)) {
            //Build word from alphanumeric characters
            word[i++] = ch;
        } else {
            //End of the word process it
            if (i != 0) {
                word[i] = '\0';
                i = 0;

                if (isKeyword(word))
                    printf("[Keyword\t: %s]\n", word);
                else
                    printf("[Identifier\t: %s]\n", word);
            }

            //Check and print operators
            if (isOperator(ch)) {
                printf("[Operator\t: %c]\n", ch);
            }
        }
    }

    fclose(fp);
    return 0;
}
