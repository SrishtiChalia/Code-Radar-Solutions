    #include <stdio.h>
    int main() {
    char word[100]; // Declare a character array to store the input word

    // Prompt the user for input
    printf("Enter a word: ");
    
    // Read the input word
    scanf("%s", word);
    
    // Print the entered word
    printf("You entered: %s\n", word);

    return 0;
}
