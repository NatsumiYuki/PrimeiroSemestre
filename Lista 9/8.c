#include <stdio.h>
#include <string.h>

char *caesarCipher(char *str) {
  int i;
  char encryptedStr[strlen(str) + 1]; 

 
  for (i = 0; str[i] != '\0'; i++) {
    
    if (str[i] >= 'A' && str[i] <= 'Z') {
     
      encryptedStr[i] = (str[i] - 'A' + 3) % 26 + 'A';
    } else if (str[i] >= 'a' && str[i] <= 'z') {
      
      encryptedStr[i] = (str[i] - 'a' + 3) % 26 + 'a';
    } else {
      encryptedStr[i] = str[i];
    }
  }

  encryptedStr[i] = '\0';
  return encryptedStr; 
}

int main() {
  char str[100];

  printf("Digite uma string: ");
  fgets(str, sizeof(str), stdin);

  
  str[strcspn(str, "\n")] = '\0';

  char *encryptedStr = caesarCipher(str);
  printf("\nString criptografada (César 3 posições): %s\n", encryptedStr);
  

  return 0;
}
