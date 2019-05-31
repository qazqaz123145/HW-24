#include <stdio.h>

#include <stdlib.h>

struct course

{

	char name[10];  

	int Calculus;

	int Computer;

	int Programming;

} p;



int main(void)

{
	int B;
    FILE *pFile;


	printf("讀取內容為：\n");

	pFile=fopen("couse.txt", "r");

        

    if (pFile==NULL)

    {

        printf("檔案開啟失敗!!\n");

        exit(1);

	}   

    else

    {

	
		for(B=0;B<7;B++){
			fscanf(pFile,"%[^,],%d,%d,%d", p.name, &p.Calculus, &p.Computer, &p.Programming);
			printf("%s\t %d\t %d\t %d", p.name, p.Calculus, p.Computer, p.Programming); 
		}    

	}

	printf("\n");

    fclose(pFile);

    system("pause");

    return 0;

}
