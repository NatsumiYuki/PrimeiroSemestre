#include <stdio.h>
#include <string.h>

int main() {
  char dateStr[11]; // To store the date string (dd/mm/yyyy)
  int day, month, year; // To store the extracted day, month, and year values

  // Prompt the user to enter the date of birth
  printf("Digite sua data de nascimento (dd/mm/aaaa): ");
  fgets(dateStr, sizeof(dateStr), stdin);

  // Extract the day, month, and year from the date string
  sscanf(dateStr, "%d/%d/%d", &day, &month, &year);

  // Validate the entered date
  if (day < 1 || day > 31 || month < 1 || month > 12 || year < 1000) {
    printf("Data inválida. Por favor, digite a data no formato dd/mm/aaaa.\n");
    return 1;
  }

  // Convert the month number to its corresponding month name in extenso
  char *monthNames[] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
                        "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
  char monthName[100]; // To store the month name in extenso
  strcpy(monthName, monthNames[month - 1]); // Convert month number to index

  // Print the date with the month name in extenso
  printf("\nVocê nasceu em %d de %s de %d.\n", day, monthName, year);

  return 0;
}
