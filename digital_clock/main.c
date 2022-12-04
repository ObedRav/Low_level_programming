#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int h, m, s;

	int d = 1000;
	printf("Set time : \n");
	scanf("%d%d%d", &h, &m, &s);
	if (h > 12 || m > 60 || s > 60)
	{
		printf("ERROR!\n");
		exit (0);
	}
	while (1)
	{
		s += 1;
		if (s > 59)
		{
			m += 1;
			s = 0;
		}
		if (m > 59)
		{
			h += 1;
			m = 0;
		}
		if (h > 24)
		{
			h = 1;
		}
		printf("%02d:%02d:%02d", h, m, s);
		system("sleep 1");
		system("clear");
	}

}
