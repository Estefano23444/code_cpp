#include <stdio.h>
#include <unistd.h>
#include <Windows.h>
#include <stdlib.h>
#include <string.h>

#define TAMANIO 9
const int MyCeId = 1724156219;
char *MyDNI = "1724156219";
int dig = 0;

int getDig()
{
    return atoi(&MyDNI[9]);
}

void serieImpar(int NroTer)
{ 
    printf("\n SerieImpar: \n ");
    for (int i = 0; (i <=((NroTer * 2)-1)); i++ )
    {
        do
        {
            if(i % 2 != 0)
                printf("%d  ", i);
        } while (i == (NroTer * 2));
    }
}

//01:  0 1 1 2 3 5 8 13 ...
void serie01(int NroTer)
{
    int x,y,z, i;

    x=0;
    y=1;

    printf("\n Serie01: \n ");
    if (NroTer == 1)
        printf("0");
    else
        {
        printf("0 1 ");
        for (int i = 1; (i <= (NroTer - 2)); i++)
            {
                z = x + y;
                printf("%d ", z);
                x = y;
                y = z;
            }
        }
    
}

//0/1  1/3  1/5  2/7  3/9   5/11  8/13  13/15 .
void serie03(int NroTer)
{
    int count  = 0;
    int fibo = 0;
    int fibo2 = 1;
    int fibo3 = 0;
    int impar = 3;

    printf("\n Serie03: \n ");
    if (NroTer == 1)
        printf("%d/%d", fibo, (impar-2));
    else
    {
        printf(" %d/%d  ", fibo, (impar-2));
        printf(" %d/3  ", fibo2);
        do
        {
            for (int i = 1; (i <= (NroTer - 2)); i++)
            {
                fibo3 = fibo + fibo2;
                printf(" %d/%d  ", fibo3, impar = impar + 2);
                fibo = fibo2;
                fibo2 = fibo3;
                impar + 2;
                count++;
            }
        } while (count < (NroTer - 3));
    }
}

//2	 3	 5 	7	11	13	17	19	23	29	31	37	41	43	47	...
void serie05(int NroTer)
{
    int x, y, z, i;

    x = 2;
    y = 3;

    printf("\nSerie 05: \n ");
    if (NroTer == 1)
        printf ("%d ", 2);
    else
    {
        printf (" 2 3 ");
        for (int i = 0; (i <= (NroTer - 3 )); i++)
        {
            z = x + y;
            printf("%d ", z);
            x = y;
            y = z;
        }
    }
}

//07:  1  4  7  10  13  16  19  22  25  ...
void serie07(int NroTer)
{
    int y;
    int z = 3;
    int x = 1;

    printf("\n Serie 07: \n ");
    if (NroTer == 1)
        printf("1");
    else
    {
        printf("1 ");
        for (int cont = 1; (cont <= (NroTer - 1)); cont++)
        {
            y = x + z;
            printf("%d ", y);
            x = y;
            z = 3;
        }
    }
}

//09:  2, 4, 8, 16, 32, 64, 128, 256, ...
void serie09(int NroTer)
{
    int y;
    int z = 2;
    int x = 2;

    printf("\n Serie 07: \n ");
    if (NroTer == 1)
        printf("2");
    else
    {
        printf("2 ");
        for (int cont = 1; (cont <= (NroTer - 1)); cont++)
        {
            y = x * z;
            printf("%d ", y);
            x = y;
            z = 2;
        }
    }
}

void Triangulo15(int n)
{

	for (int linea = 1; linea <= n; linea++)
	{
		int C = 1; 

		for (int i = 1; i < (n - linea + 1); i++){
			cout << "   ";
		}

		for (int i = 1; i <= linea; i++)
		{

			// El primer valor de la fila es 1 siempre
			cout << C  << "     ";
			C = C * (linea - i) / i;
		}

		cout << "\n";
	}
}


int main()
{
	int n;

	cout << "Proporciona el numero de filas del triangulo: ";
	
	cin >> n;
	
	Triangulo15(n);
	return 0;
}