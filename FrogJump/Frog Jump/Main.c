// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int X, int Y, int D) {
	// write your code in C99 (gcc 6.2.0)
	int progress = X, count = 0;
	while (progress < Y) {
		progress += D;
		count++;
	}
	return count;
}