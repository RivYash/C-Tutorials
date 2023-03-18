#include<stdio.h>


//file open

int main(){
    char ch;
    FILE*fptr;

    fptr = fopen ("2dArr.c", "r");
    if (fptr == NULL){
        printf("file does not exist ");
    }else{
        ch = fgetc(fptr);
        while (ch != EOF)
        {
            printf("%c",ch);
            ch = fgetc(fptr);
        }
        


        // fscanf(fptr,"%c",&ch);
        // printf("output %c",ch);
        
      fclose(fptr);

    //   fputc("M",fptr);
    //   fputc("s",fptr);
    //   fputc("y",fptr);
    //   fputc("d",fptr);
    //   fputc("d",fptr);


    // printf("%c\n",ggetc(fptr));
    // printf("%c\n",ggetc(fptr));
    // printf("%c\n",ggetc(fptr));
    // printf("%c\n",ggetc(fptr));

// sending char by char to above file using fprintf use "w"

    //   fprintf(fptr,"%c",'a');
    //   fprintf(fptr,"%c",'b');
    //   fprintf(fptr,"%c",'c');  
    }
    return 0;
}

// "r" open to read

// "rb" open to read binery

// "w" open to write

// "wb" open to write binery

// "a" open to append