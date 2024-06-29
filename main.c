#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>


int main(int argc, char *argv[]) {
	
	int hour, minute , second;
	hour = minute = second = 0;
	
	while (1) {
		
		#ifdef _WIN32
			system("cls"); //for windows
		#else
			system("clear"); //For unix
		#endif
	
	
	//Time looks like that HH:MM:SS
	printf("%02d: %02d: %02d\n",hour, minute, second);
	fflush(stdout);
	
	second ++;
	
	if (second == 60 ) {
		minute++;
		second = 0;
	}
	
	if (minute == 60) {
		hour++;
		minute = 0;
	}
	
	if (hour == 24) {
		hour = 0;
		minute = 0;
		second = 0;
	}
	
	//wait for 1 second
	sleep(1);
	
	}
		
	return 0;
}
