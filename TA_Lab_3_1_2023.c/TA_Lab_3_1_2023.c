//TA_Lab_3_1_2023.c Рекурсивні функції. Вивести на екран цифри числа в зворотному порядку.

#define _CRT_SECURE_NO_WARNINGS

#include <locale.h>
#include <stdio.h>
#include <conio.h>

void Convert_rec(unsigned long int N); //прототип функції

int main(void)
{
	//Встановив кодування, підключив Укр. мову
	system("chcp 1251");
	setlocale(LC_CTYPE, "ukr");
	system("cls");
	unsigned long int n;
	do
	{
		printf("\n Введіть натуральне число більше 10 та не більше 9 символів \n (всі цифри починаючи з десятої будуть відкинуті): ");
		scanf_s("%9ld", &n);
		if (n <= 10) printf("\n Помилка! Введене число не більше за \"10\".");
	} while (n <= 10);

		system("cls");
		printf("\n Ви ввели число %ld \n", n);
		printf("\n Запускаємо рекурсивну функцію!\n");
		printf("\n Числовий ряд в зворотному порядку виглядає так:\n ");

		Convert_rec(n);//запистили функцію

		printf("\n \n Рекурсивна функція закінчила роботу. \n Всього Вам найкращого!");
	int getch(); getch();
	return 0;
}

//Функція - з рекурсією
void Convert_rec (unsigned long int N)
{
	if (N % 10 == N)
	{
		printf("%d \t", N);
		return;
	}
	else printf("%d \t", N%10);
	Convert_rec(N /= 10);
}


