#include <stdio.h>

#include <conio.h>

int main ()
{

int array [3] [3] [3], i, j, k;

clrscr ();

printf ("\n Enter the elements of the matrix");

for (i = 0; i < 3;i++)

{

for (j = 0;j < 3;j++)
{

for (k = 0;k < 3;k++)
{

scanf ("%d", &array[i] [j] [k] );
}
}
}
printf ("\n The matrix is: ");

for (i = 0;i < 3;i++)

{

printf("\n\n");

for (j = 0;j < 3;j++)

{

printf ("\n");

for (k = 0;k < 3;k++)

printf ("\tarray [%d] [%d] [%d] = %d", i, j, k, array [i] [j] [k]  );

}


}

getch();

return 0;
}
