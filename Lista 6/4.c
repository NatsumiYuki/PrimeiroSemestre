 #include <stdio.h>
  
  
  void VogaisConsoantes(const char*frase){
    int v = 0, c = 0;
  
    for (int i = 0; frase[i] != '\0'; i++){
      if((frase[i] >= 'A' && 
          frase[i] <= 'Z') ||
         (frase[i] >= 'a' &&
          frase[i] <= 'z')){
        if (frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U' || frase[i] == 'a' || frase[i] == 'i' || frase[i] == 'u' || frase[i] == 'e' || frase[i] == 'o'){
          v++;
        } else {
          c++;
        }
      }
    }
    printf ("Vogais: %i\n", v);
    printf ("Consoantes: %i\n", c);
  }
  
  int main() {
    
    char str[100];
    printf ("Insira uma palavra: \n");
    scanf ("%[^\n]s\n", str);

    VogaisConsoantes(str);
    
    return 0;
  }