#include <stdio.h>
#include <stdlib.h>

int main() 
{ 
    // Initialization of variables and the FILE pointer
    FILE *fptr;
    FILE *output;
    char ch; 
    int wrd=1;
    char fname;    

    fptr=fopen("INPUT.txt","r");     //Opening the INPUT.txt in reading mode while simultaneously
    output=fopen("OUTPUT.txt", "w"); // Opening(more like creating) the OUTPUT.txt in writing mode.
    fprintf(fptr,"%c",ch);

    //Necessary looping
    if(fptr==NULL) 
     { 
         printf(" File does not exist or can not be opened."); 
      } 
    else 
        { 
          ch=fgetc(fptr); 
          while(ch!=EOF) 
            { 
                // Reading the contents of the INPUT.txt and writing it to OUTPUT.txt
                printf("%c",ch); 
                fputc(ch, output);

                // This is for the word counter.
                if(ch=='\n')
                    { 
                        wrd++;
                    }     
                ch=fgetc(fptr);

            }
                //I was supposed to make use of  a string here, but made use of the fprintf instead, this is for the supposed additional line.
                printf("\nNumber of words: %d\n",wrd);
                        fprintf(output, "\nNumber of words: %d\n",wrd);
        } 
    // File closing
    fclose(fptr);
    fclose(output);
    return(0); 
}   