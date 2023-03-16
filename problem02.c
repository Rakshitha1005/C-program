#include <stdio.h>

void input_string(char* string);
void capitalise(char* string);
void output(char *string);

int main()
{
  char string[100];
  input_string(string);
  capitalise(string);
  output(string);
}
void input_string(char* string)
{
  printf("Enter String\n");
  scanf("%s", string);
}

void capitalise(char *string)
{
  for(int i=0; string[i]!='\0'; i++)
  {
    if (string[i]=='.' && string[i+1]>='a' && string[i+1]<='z')
    {
      string[i+1]=string[i+1]-32;
    }
  }
}

void output(char *string)
{
  printf("%s\n",string);
}