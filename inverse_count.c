

#include <stdio.h>

int
main ()
{
  int a[100], n, i, j, m, count = 0;
  printf ("Enter number of elements = ");
  scanf ("%d", &n);
  printf ("enter elements in to the array = ");
  for (m = 0; m < n; m++)
    {
      scanf ("%d", &a[m]);
    }

  printf ("Inverse count in this array");
  for (i = 0; i < n; i++)
    {
      for (j = i + 1; j < n; j++)
	{
	  if (a[i] > a[j] && i < j)
	    {
	      count = count + 1;
	    }
	}


    }
  printf ("= %d", count);



  return 0;
}
