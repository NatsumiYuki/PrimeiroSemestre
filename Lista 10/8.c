#include <stdio.h>

int main() {
  int numVehicles, rentalFee; // Number of vehicles and rental fee per vehicle
  float annualRevenue, lateFeeIncome, maintenanceCost;

  // Get input from the user
  printf("Digite o número de veículos da locadora: ");
  scanf("%d", &numVehicles);

  printf("Digite o valor do aluguel por veículo: R$ ");
  scanf("%f", &rentalFee);

  // Calculate annual revenue
  annualRevenue = numVehicles * rentalFee * 12.0f * (1.0f - 1.0f / 3.0f); // Considering 1/3 of vehicles are rented per month

  // Calculate late fee income
  lateFeeIncome = numVehicles * rentalFee * 0.2f * (1.0f / 3.0f) * 12.0f; // Considering 1/10 of rented vehicles have late returns

  // Calculate maintenance cost
  maintenanceCost = numVehicles * 0.02f * 600.0f; // Considering 2% of vehicles need maintenance and average cost is R$600

  // Display results
  printf("\nReceita anual com aluguel: R$ %.2f\n", annualRevenue);
  printf("Receita anual com multas: R$ %.2f\n", lateFeeIncome);
  printf("Custo anual com manutenção: R$ %.2f\n", maintenanceCost);

  return 0;
}
