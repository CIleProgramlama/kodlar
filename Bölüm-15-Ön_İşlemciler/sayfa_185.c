#include <stdio.h>
int main()
{
	printf( "Burası %d. satır, dosya ismi: %s\n", __LINE__,__FILE__ );
	#line 10
	printf( "Burası artık %d. satır, dosya ismi: %s\n",__LINE__, __FILE__ );
	#line 15 "line.c"
	printf( "Burası artık %d. satır, dosya ismi: %s\n",__LINE__, __FILE__ );
	printf( "Burası %d. satır, dosya ismi: %s\n", __LINE__,__FILE__ );
}