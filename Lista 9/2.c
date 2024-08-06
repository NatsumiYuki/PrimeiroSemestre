#include <stdio.h>
#include <string.h>

void removeExtraSpaces(char *text) {
  int i, j, prevSpace = 0;

 
  for (i = 0; text[i] != '\0'; i++) {
   
    if (text[i] == ' ') {
      
      if (prevSpace) {
        
        continue;
      } else {
        prevSpace = 1;
      }
    } else {
     
      prevSpace = 0;
    }

   
    text[j++] = text[i];
  }

  
  text[j] = '\0';
}

int main() {
  char text[1000];

  printf("Digite o texto: ");
  fgets(text, sizeof(text), stdin);

  // Remove trailing newline character from the text
  text[strcspn(text, "\n")] = '\0';

  removeExtraSpaces(text);

  printf("Texto modificado: %s\n", text);

  return 0;
}
