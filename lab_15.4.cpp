#include <stdio.h>
#define SIZE 5 // ���������� ������ ������

int main() {
    int array[SIZE]; // ����������� ������
    int sum = 0;

    // ��� �������� ������
    printf("Vvedit 5 elemetiv masuvy:\n");
    for (int i = 0; i < SIZE; i++) {
        scanf_s("%d", &array[i]);
    }
    // ���������� ���� �������� ������
    for (int i = 0; i < SIZE; i++) {
        sum += array[i];
    }
    // ���� ���� �������� ������
    printf("Suma: %d\n", sum);

    return 0;
}
