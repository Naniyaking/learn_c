#include<stdio.h>

int main(void){

        int i;
        for(i=0;i<10000;++i){

                char sz[32];
                sprintf(sz,"%02d.txt", i);

                FILE *fp=fopen(sz, "w");
                fprintf(fp,"this is a new  txt!!!!!!!!!!!!!!!!!!");
                fclose(fp);




        }
    return 0;
}
