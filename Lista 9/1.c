#include <stdio.h>
#include <string.h>

void getInitials(char *name, char *initials) {
  int i, wordStart = 1;
  char currentChar;

  
  initials[0] = '\0';

  
  for (i = 0; name[i] != '\0'; i++) {
    currentChar = name[i];

    
    if ((i == 0 || name[i - 1] == ' ') && currentChar != ' ') {
      // Check if it's a connector
      if (currentChar == 'E' || currentChar == 'D' || currentChar == 'A' || currentChar == 'O') {
        i += 1; 
        if (name[i] != '\0') {
          currentChar = name[i]; 
        }
      }

      
      initials[strlen(initials)] = toupper(currentChar);
      initials[strlen(initials) + 1] = '\0';
      wordStart = 0; 
    } else {
      wordStart = 1;
    }
  }
}

int main() {
  char name[100], initials[10];

  printf("Digite seu nome completo: ");
  fgets(name, sizeof(name), stdin);


  name[strcspn(name, "\n")] = '\0';

  getInitials(name, initials);

  printf("Suas iniciais são: %s\n", initials);

  return 0;
}
