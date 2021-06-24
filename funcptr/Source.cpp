#include <conio.h>
#include <stdio.h>

int dble(int a) {
	return 2 * a;
}

int deleteEven(int a) {
	if (a % 2 == 0) {
		return 0;
	}
	else {
		return a;
	}
}

//Функция принимает массив, его размер и указатель на функцию,
//которая далее применяется ко всем элементам массива
void map(int *arr, unsigned size, int(*fun)(int)) {
	unsigned i;
	for (i = 0; i < size; i++) {
		arr[i] = fun(arr[i]);
	}
}

void main() {
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	unsigned i;
	map(a, 10, deleteEven);
	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	map(a, 10, dble);
	printf("\n");
	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	_getch();
}