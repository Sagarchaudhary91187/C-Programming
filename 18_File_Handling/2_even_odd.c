//WAP to create a file of no and copy even and odd numbers into separate files.
#include <stdio.h>

int main() {
    FILE *source, *even, *odd;
    int number;
    // Create and write numbers to source file
    source = fopen("numbers.txt", "w");
    if (source == NULL) {
        perror("File cannot be opened for writing:\n");
        return 1;
    }
    printf("Enter numbers (-1 to stop):\n");
    while (1) {
        scanf("%d", &number);
        if (number == -1)
            break;
        fprintf(source, "%d\n", number);
    }
    fclose(source);

    // Open files for reading and writing
    source = fopen("numbers.txt", "r");
    even   = fopen("even_numbers.txt", "w");
    odd    = fopen("odd_numbers.txt", "w");

    if (source == NULL || even == NULL || odd == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    // Separate even and odd numbers
    while (fscanf(source, "%d", &number) != EOF) {
        if (number % 2 == 0)
            fprintf(even, "%d\n", number);
        else
            fprintf(odd, "%d\n", number);
    }

    fclose(source);
    fclose(even);
    fclose(odd);

    // Display even numbers
    even = fopen("even_numbers.txt", "r");
    printf("\nEven numbers:\n");
    while (fscanf(even, "%d", &number) != EOF)
        printf("%d\n", number);
    fclose(even);

    // Display odd numbers
    odd = fopen("odd_numbers.txt", "r");
    printf("\nOdd numbers:\n");
    while (fscanf(odd, "%d", &number) != EOF)
        printf("%d\n", number);
    fclose(odd);

    return 0;
}


/* 
#include <stdio.h>
 int main() { 
 FILE *source, *even, *odd; 
 int number; // Open the source file in read mode 
 printf("\nEnter -1 to terminate input:"); 
 while(1) { 
   printf("\nEnter a number: "); 
   scanf("%d", &number); 
   if(number == -1) { 
    break; 
  } 
   putw(number, source); 
 } 
 source = fopen("numbers.txt", "r"); 
 even = fopen("even_numbers.txt", "w"); 
 odd = fopen("odd_numbers.txt", "w"); // Read numbers from the source file and write to even or odd files 
 while ((number = getw(source)) != EOF) { 
    if (number % 2 == 0) 
        fprintf(even, "%d\n", number); 
    else 
        putw(number, odd); 
}   
    // Close all files 
    fclose(source); 
    fclose(even); 
    fclose(odd); 
    printf("Even and odd numbers have been separated into respective files.\n"); 
    printf("Contents of even_numbers.txt:\n"); 
    even = fopen("even_numbers.txt", "r"); 
    while ((number = getw(even)) != EOF) { 
        printf("%d\n", number); 
    } 
    fclose(even); 
    printf("Contents of odd_numbers.txt:\n"); 
    odd = fopen("odd_numbers.txt", "r"); 
    while ((number = getw(odd)) != EOF) { 
        printf("%d\n", number); 
        */