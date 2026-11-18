#include <stdio.h>

int main(int argc, char **argv){
  if(argc<2){
    printf("Usage: ./main <filename>");
    return 1;
  }
  FILE *file;
  for (int i=1;i<argc;i++){
    file=fopen(argv[i],"r");
    if(!file){
      printf("%s: No such file",argv[1]);
      return 1;
    }
    int ch; 
    while((ch=fgetc(file))!=EOF) printf("%c",ch);
  }
  return 0;
}
