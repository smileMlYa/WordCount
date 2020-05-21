#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int Countword(char *file)//返回文件词的数目 
{   FILE *f;
    int is_word;
    int cword;
    f=fopen(file,"r");
    char ch;
    if(NULL==(f=fopen(file,"r")))
    {
     printf("file is NULL");
    }
    else
    while(!feof(f))
    {
        ch=fgetc(f);
        if((ch >= 'a'&&ch <= 'z')||(ch>='A'&&ch<='Z')||ch=='_')
        {
        cword+= (is_word == 0);
        is_word=1;
        
        }else if(is_word)
       {
               
                is_word=0;
       }
    }
    fclose(f); 
	printf("wordnumber:%d ",cword);
}
int Countchar(char *file) //返回文件的字符数 
{   FILE *f;
    int cchar;
    f = fopen(file, "r");
    char a;
    if(NULL==(f=fopen(file,"r")))
    {
        printf("file is NULL");
    }
    else
    while (!feof(f))
    {
        a=fgetc(f);
        if (a != ' '&&a != '\n'&&a != '\t')
        cchar++;
    }
    fclose(f);printf("charnumber:%d ",cchar);
}
int main(int argc, char* argv[])             
{
    FILE *fp;
    while(1)
    {
        if((fp=fopen(argv[2],"r"))==NULL)
        {  
        printf("FileNull\n\n\n");
        scanf("%s%s%s",argv[0],argv[1],argv[2]);
        continue;
        }
        else if(!strcmp(argv[1],"-w")) 
        {
        Countword(argv[2]);      
    	} 
        else if(!strcmp(argv[1],"-c"))  
        {
        Countchar(argv[2]);       
	    }
        else
            printf("NullPoint\n");
        printf("\n\n");
        scanf("%s%s%s",argv[0],argv[1],argv[2]);
    }
    return 0;
}
