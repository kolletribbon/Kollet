#include <stdio.h>
#include <time.h>

void Interval(double i)
{
  clock_t g;
  g = i * CLOCKS_PER_SEC + clock();
    while(g > clock());
}

main()
{
la:

   time_t t1,t2;
     Interval(0.1);
     t1 = time(NULL);
      printf("TimeCode!\n");
	 Interval(0.2);
	 t1 = time(NULL);
	  printf("  TimeCode!\n");
	 Interval(0.3);
	 t1 = time(NULL);
	  printf("    TimeCode!\n");
	 Interval(0.3);
	 t1 = time(NULL);
	  printf("");
	  
goto la;
}