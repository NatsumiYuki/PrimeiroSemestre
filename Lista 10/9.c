#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100 // Maximum number of students to store

typedef struct Student {
  char enrollmentNumber[15]; // Enrollment number (14 characters maximum)
  char phoneNumber[15]; // Phone number (14 characters maximum)
} Student;

int main() {
  int choice; // User choice for operation
  Student students[MAX_STUDENTS]; // Array to store student data
  int numStudents = 0; // Number of students currently stored

  do {
    printf("\nMenu de Gerenciamento de Alunos:\n");
    printf("1. Cadastrar Aluno\n");
    printf("2. Ler Dados de Alunos do Arquivo\n");
    printf("3. Sair\n");
    printf("Digite sua escolha: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1: // Add student
        if (numStudents >= MAX_STUDENTS) {
          printf("Erro: Número máximo de alunos atingido.\n");
          break;
        }

        printf("\nCadastro de Aluno:\n");
        printf("Digite o número de matrícula: ");
        scanf("%s", students[numStudents].enrollmentNumber);

        printf("Digite o número de telefone: ");
        scanf("%s", students[numStudents].phoneNumber);

        numStudents++; // Increment student count
        printf("Aluno cadastrado com sucesso!\n");
        break;

      case 2: // Read from file
        readStudentsFromFile(students, &numStudents); // Function to read from file
        break;

      case 3: // Exit
        printf("Saindo do programa...\n");
        break;

      default:
        printf("Opção inválida. Tente novamente.\n");
    }
  } while (choice != 3);

  return 0;
}

// Function to read student data from a file
void readStudentsFromFile(Student students[], int *numStudents) {
  FILE *fp; // File pointer
  char line[100]; // Buffer to read each line

  printf("\nLendo dados de alunos do arquivo...\n");

  fp = fopen("students.txt", "r"); // Open "students.txt" in read mode
  if (fp == NULL) {
    printf("Erro ao abrir o arquivo.\n");
    return;
  }

  int i = 0;
  while (fgets(line, sizeof(line), fp) != NULL) {
    if (i >= MAX_STUDENTS) {
      printf("Aviso: Número máximo de alunos atingido no arquivo.\n");
      break;
    }

    // Parse line and store data in the array
    sscanf(line, "%s %s", students[i].enrollmentNumber, students[i].phoneNumber);
    i++;
  }

  *numStudents = i; // Update the number of students read
  fclose(fp); // Close the file

  printf("Dados de alunos lidos com sucesso!\n");
}
