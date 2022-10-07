
#include <ctype.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


char *solution(const char *camelCase)
{
  int count = 0;
  int len = strlen(camelCase);


  for (int i = 0; i < len; i++){
	  if (isupper(camelCase[i])) {
		  count++;
	  }
  }

  char *output = calloc(len + count, sizeof(char));
  for (int a = 0, b = 0; a < len; a++, b++)
  {
     if (a >= 1 && isupper(camelCase[a]))
     {
        output[b] = ' ';
        b++;
     }
     output[b] = camelCase[a];
  }
  return output;
}


int main(void){
	char* str = solution("camelCase");
	printf("%s\n", str);
	return 0;
}