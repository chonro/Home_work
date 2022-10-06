#include <stdio.h>
int main() {
	int age;
	scanf_s("%d", &age);//использована фунция scanf вместо scanf_s, перед age нужно написать &
	if (age <= 13)
		printf("%d - детство", age);//требуется точка с запятой
	else if (14 <= age < 25)
		printf("%f - молодость", age);
	else if (25 <= age && age < 60)// не нужна была точка с запятой
	printf("%f - зрелость", age);
	else
		printf("%d - старость", age);
	return 0;
}