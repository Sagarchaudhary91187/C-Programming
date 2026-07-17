/*-----------------------------FILE HANDLING------------------------------------------
Opening, creating, performing operations and closing of files using C.


What do we need?
*Our program runs in RAM---->not permament----> Wipe Off
*To store the data permanently, we need to store it in secondary memory in the form of files.  ROM--> HDD, SSD
*In fact, this was the primitive way of storing data in older applications, before modern Database Management Systems
came into picture.



----------------------Creating a file in C and working with file pointers---------------------------
*In C, we use structure pointer FILE type to declare a file
*File operations are performed using file pointers
*To work with files in C, we use various built-in functions provided in stdio.h library.

*SOME COMMONLY USED FILE HANDLING FUNCTIONS IN C:
    1.  fopen() --> it is used to open a existing file or create a new file if it does not exist.
                          SYNTAX:     fopen("<filename>", "filemode");    //filemode: r, w, a, r+, w+, a+
        
                          EXAMPLE:    FILE *fp = fopen("example.txt", "w");      //declare and initialize file pointer
            MODES:
                "r"  --> read mode             //open an existing file to perform read operations if not exists returns NULL
                "w"  --> write mode           //if file exists, it overwrites/rewright the content else creates a new file
                "a"  --> append mode         //data is added at the end of file
                "r+" --> read and write mode      
                "w+" --> write and read mode
                "a+" --> append and read mode
            Use Mode rb, wb, ab for binary files
            Use Mode rt, wt, at for text files (default mode)        ie. r, w, a  

            
    2.  fclose() --> it is used to close a previously opened file.
                           SYNTAX:    fclose(file_pointer);
                
                           EXAMPLE:   fclose(fp);     
            NOTE: It is important to close a file after operations to free up system resources and ensure data integrity.
            NOTE: It is always be the last operation performed on a file.


//INPUT/OUTPUT OPERATIONS ON FILES IN C:
    3.  fgetc() --> used to read a single character from a file.
                            SYNTAX:     char ch;
                                        ch = fgetc(file_pointer);
                           EXAMPLE:   ch = fgetc(fp);
            The above function reads a character from the file pointed by fp and stores in ch.


    4.  fputc() --> used to write a single character to a file.
                            SYNTAX:     fputc(character, file_pointer);
                            EXAMPLE:   fputc(ch, fp);
            The above function writes the character ch to the file pointed by fp.


    5.  fgets() --> used to read a string from a file.
                            SYNTAX:     char str[100];
                                        fgets(str, size, file_pointer);
                            EXAMPLE:   fgets(str, 100, fp);   
            The above function reads a string from the file pointed by fp and stores in str.
    
    
    6.  fputs() --> used to write a string to a file.
                            SYNTAX:     fputs(string, file_pointer);
                            EXAMPLE:   fputs(str, fp);
            The above function writes the string str to the file pointed by fp.

    7.  fprintf() --> used to write formatted data to a file.
                            SYNTAX:     fprintf(file_pointer, "format", data);
                            EXAMPLE:   fprintf(fp, "Value: %d", num);
            The above function writes the formatted data to the file pointed by fp.


    8.  fscanf() --> used to read formatted data from a file.
                            SYNTAX:     fscanf(file_pointer, "format", &data);
                            EXAMPLE:   fscanf(fp, "%d", &num);
            The above function reads the formatted data from the file pointed by fp and stores in num.

    9.  fgetw() and fputw() --> used to read and write word (2 bytes) data from/to a file respectively.
                            SYNTAX:     int word;
                                        word = fgetw(file_pointer);
                                        fputw(word, file_pointer);
                            EXAMPLE:   word = fgetw(fp);
                                       fputw(word, fp);
            The above functions read and write word data from/to the file pointed by fp.
    
    
NOTE: Always check if the file was opened successfully by verifying if the file pointer is NULL after fopen().
--------------------------------------------------------------------------------------------------------------*/
#include <stdio.h>
int main(){
    FILE *fp;
    int ch;
    fp = fopen("example.txt", "a");      // Open file in write mode
    if (fp == NULL){
        perror("File cannot be opened for writing:");
        return 1;
    }
    printf("Enter data (Press Ctrl+Z then Enter to stop):\n");
    while((ch = getchar()) != EOF){       // Read characters until EOF
        fputc(ch, fp);                    // Write character to file
    }
    fclose(fp);                          // Close the file
    fp =fopen("example.txt", "r");      // Open file in read mode
    if (fp == NULL) {
        perror("File cannot be opened for writing:");
        return 1;
    }
    printf("\nThe content of the file is:\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp);                          // Close the file
    return 0;
}