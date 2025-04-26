#include <stdio.h>
#include <string.h>

int main(void)
{
    char catsName[50];    // Buffer for the cat's name
    char catsFood[25];    // Buffer for the cat's favorite food
    char sentence[75] = ""; // Buffer to build the final sentence

    // Ask for the cat's name
    puts("What's the cat's name?");
    fgets(catsName, sizeof(catsName), stdin);       // Read input safely
    catsName[strcspn(catsName, "\n")] = '\0';         // Remove the newline

    // Ask for the cat's favorite food
    puts("What does he eat?");
    fgets(catsFood, sizeof(catsFood), stdin);         // Read input safely
    catsFood[strcspn(catsFood, "\n")] = '\0';         // Remove the newline

    // Build the sentence using the secure version of strcat
    strcat_s(sentence, sizeof(sentence), catsName);
    strcat_s(sentence, sizeof(sentence), " loves to eat ");
    strcat_s(sentence, sizeof(sentence), catsFood);

    // Output the sentence
    puts(sentence);

    return 0;
}
