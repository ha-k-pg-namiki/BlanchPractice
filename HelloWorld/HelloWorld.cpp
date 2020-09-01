#include <stdlib.h>
#include <stdio.h>

void DrawHelloWorld();



int main()
{
	DrawHelloWorld();

	system("pause");
	return 0;
}


//Hello Worldを表示する関数
void DrawHelloWorld()
{
	printf("Hello World\n");
	printf("Hello ローカル\n");
}
