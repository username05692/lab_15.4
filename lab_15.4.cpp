#include <stdio.h>
#define SIZE 5 // оголошення розміру масиву

int main() {
    int array[SIZE]; // ініціалізація масиву
    int sum = 0;

    // Ввід елементів масиву
    printf("Vvedit 5 elemetiv masuvy:\n");
    for (int i = 0; i < SIZE; i++) {
        scanf_s("%d", &array[i]);
    }
    // Обчислення суми елементів масиву
    for (int i = 0; i < SIZE; i++) {
        sum += array[i];
    }
    // Вивід суми елементів масиву
    printf("Suma: %d\n", sum);

    return 0;
}
