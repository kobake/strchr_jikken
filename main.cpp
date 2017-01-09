#include <stdio.h>
#include <string.h>
#include <sys/time.h>

char *my_strchr(const char *s, char c);

int main(int argc, char **argv) {
    struct timeval tv1, tv2;
    long usec;
    char *p;

    if (argc < 3) return 0;

	for(int tryi = 0; tryi < 10; tryi++){
		printf("------ my_strchr ------\n");
	    gettimeofday(&tv1, NULL);
	    for (int i = 0; i < 100000000; i++) {
	        p = my_strchr(argv[1], argv[2][0]);
	    }
	    gettimeofday(&tv2, NULL);
	    usec = (tv2.tv_sec-tv1.tv_sec)*1000000 + (tv2.tv_usec-tv1.tv_usec);
	    printf("%ld\n%.06f sec\n", p ? (p - argv[1]) : -1, usec/1000000.0);
		printf("\n");
		
		printf("------ strchr ------\n");
	    gettimeofday(&tv1, NULL);
	    for (int i = 0; i < 100000000; i++) {
	        p = strchr(argv[1], argv[2][0]);
	    }
	    gettimeofday(&tv2, NULL);
	    usec = (tv2.tv_sec-tv1.tv_sec)*1000000 + (tv2.tv_usec-tv1.tv_usec);
	    printf("%ld\n%.06f sec\n", p ? (p - argv[1]) : -1, usec/1000000.0);
		printf("\n");
	}
}
