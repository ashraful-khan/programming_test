// A C/C++ program for splitting a string
// using strtok()
#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "BOARD1?START_MOTOR?1000";

	// Returns first token
	char *token = strtok(str, "?");
//  	printf("%s\n", token);
  
	// Keep printing tokens while one of the
	// delimiters present in str[].
	char* arr[3];
  int i = 0;
  while (token != NULL)
	{
		arr[i] = token;
    	if(i==2) {
          printf("%s , %s , %s \n", arr[i], arr[i-1], arr[i-2]);
        }
    	//printf("%s\n", token);
		token = strtok(NULL, "?");
    	i++;
	}
//for (int i=0; i<3; i++){
//	printf("11 %s \n", arr[i]);
//}

if(i==3) {
          printf("%s , %s , %s \n", arr[i-1], arr[i-2], arr[i-3]);
        }

        
printf("%s , %s , %s \n", arr[i-1], arr[i-2], arr[i-3]);
	return 0;
}
