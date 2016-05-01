#include <stdio.h>
#include <math.h>
#include <string.h>
#define MAXSIZE 1000

int generate_hash(char str[MAXSIZE], int prime, int start_index, int end_index);
int match_pattern(char str[MAXSIZE], char sub_str[MAXSIZE]);

int main()
{
	char str[MAXSIZE];
	char sub_str[MAXSIZE];
	int index;
	int T;
	int i;

	scanf("%d", &T);

	for (i = 0; i < T; i++) {
		scanf("%s %s", str, sub_str);
		index = match_pattern(str, sub_str);

		printf("%d\n", index);
	}

	return 0;
}

int generate_hash(char str[MAXSIZE], int prime, int start_index, int end_index)
{
	int hash;
	int i;
	int j;

	hash = 0;

	for (i = start_index, j = 0; i <= end_index; i++, j++) {
		hash += pow(prime, j) * (int)str[i];
	}

	return hash;
}

int match_pattern(char str[MAXSIZE], char sub_str[MAXSIZE])
{
	int len_str;
	int len_sub_str;
	int req_hash;
	int temp_hash;
	int index;
	int i;
	int j;
	int flag;

	len_str = strlen(str);
	len_sub_str = strlen(sub_str);
	req_hash = generate_hash(sub_str, 101, 0, len_sub_str - 1);
	index = -1;

	for (i = 0; (i + len_sub_str) < len_str; i++) {
		temp_hash = generate_hash(str, 101, i, (i + len_sub_str - 1));

		if (temp_hash == req_hash) {
			for (j = 0; sub_str[j] != '\0'; j++) {
				if (str[i + j] == sub_str[j]) {
					flag = 1;
				} else {
					flag = 0;
					break;
				}
			}
			if (flag == 1) {
				index = i;
			} else {
				index = -1;
			}
		}
		if (index != -1) {
			break;
		} 
	}

	return index;
}