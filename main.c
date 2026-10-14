#include <stdio.h>
#include <stdlib.h>

FILE *InputFile, *OutputFile;

// use: mdfr [input_file] [output_file]
int main(int argc, char *argv[])
{
    InputFile = fopen(argv[0], "r");
    if (InputFile == NULL)
    {
        printf("Could not open file \"%s\"!",argv[0]);
    }

    int input; 
    scanf("%d",input);

    // Use input from keyboard, and file

    fclose(InputFile);

    OutputFile = fopen(argv[1], "rw");
    if (OutputFile == NULL)
    {
        printf("Could not create/open file \"%s\"!",argv[1]);
    }

    // Create Output to be used in MIDI file

    fclose(OutputFile);
    
    return 0;
}