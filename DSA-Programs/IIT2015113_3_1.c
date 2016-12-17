#include <stdio.h>
#include <string.h>
#define MAXSIZE 10

void form_graph(int G[][MAXSIZE], char words[][100], int N);
int is_connected(int G[][MAXSIZE], int N, char words[][100], char word1[100], char word2[100]);

int main()
{
	int G[MAXSIZE][MAXSIZE];
	char words[100][100];
	int N;
	int T;
	int i;
	int j;
	char word1[100];
	char word2[100];
	int flag;

	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		scanf("%s", words[i]);
	}

	form_graph(G, words, N);

	scanf("%d", &T);

	for (i = 0; i < T; i++) {
		scanf("%s %s", word1, word2);
		flag = is_connected(G, N, words, word1, word2);

		if (flag == 1) {
			printf("yes\n");
		} else {
			printf("no\n");
		}
	}
	

	return 0;
}

void form_graph(int G[][MAXSIZE], char words[][100], int N)
{
	int n1;
	int n2;
	int i;
	int j;
	int k;
	int l;
	char word1[100];
	char word2[100];
	int flag;

	for (i = 0; i < N; i++) {
		strcpy(word1, words[i]);
		n1 = strlen(word1);

		for (j = i + 1; j < N; j++) {
			strcpy(word2, words[j]);
			n2 = strlen(word2);

			flag = 0;

			for (k = 0; k < n1; k++) {
				for (l = 0; l < n2; l++) {
					if (word1[k] == word2[l]) {
						flag = 1; 
						break;
					}
				}
				if (flag == 1) {
					break;
				}
			}
				
			if (flag == 1) {
				G[i][j] = 1;
				G[j][i] = 1;
			}
		}
	}
}

int is_connected(int G[MAXSIZE][MAXSIZE], int N, char words[][100], char word1[100], char word2[100])
{
	int w1_i; 
	int w2_i;
	int flag;
	char temp_word[100];
	int i;

	flag = 0;
	w1_i = -1;
	w2_i = -1;

	for (i = 0; i < N; i++) {
		if (!strcmp(words[i], word1)) {
			w1_i = i;
		} else if (!strcmp(words[i], word2)) {
			w2_i = i;
		}
	}

	if (w1_i == -1 || w2_i == -1) {
		flag = 0;
	} else {
		if (G[w1_i][w2_i] == 1) {
			flag = 1;
		} else {
			for (i = w1_i + 1; i < N && i != w2_i; i++) {
				if (G[w1_i][i] == 1) {
					strcpy(temp_word, words[i]);
					flag = is_connected(G, N, words, temp_word, word2);
				}
			}
		}
	}

	return flag;
}
