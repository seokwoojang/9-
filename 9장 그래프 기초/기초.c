#include<stdio.h>
#include<stdlib.h>
/*
#define MAX_VERTICES 50

//인접행렬
typedef struct GraphType {
	int n;//정점의 개수
	int adj_mat[MAX_VERTICES][MAX_VERTICES];
}GraphType;


//그래프 초기화
void init(GraphType* g) {
	int i, j;
	g->n = 0;
	for (i = 0; i < MAX_VERTICES; i++){
		for (j = 0; j < MAX_VERTICES; j++) {
			g->adj_mat[i][j] = 0;
		}
	}
}


//정점 삽입
void insert_vertex(GraphType* g) {
	if (((g->n) + 1) > MAX_VERTICES) {
		printf("overflow");
		return;
	}
	g->n++;
}


//간선 삽입
void insert_edge(GraphType* g, int start, int end) {
	if (start >= g->n || end >= g->n) {//정점의 개수에 정점의 값(start, end)이 큰지 검사
		printf("key err");
		return;
	}
	g->adj_mat[start][end] = 1;
	g->adj_mat[end][start] = 1;
}

//출력 함수
void print_adj_mat(GraphType* g) {
	for (int i = 0; i < g->n; i++) {
		for (int j = 0; j < g->n; j++) {
			printf("%2d", g->adj_mat[i][j]);
		}
		printf("\n");
	}
}


//각 정점의 차수 출력
void adj_degree(GraphType* g) {
	for (int i = 0; i < g->n; i++)
	{
		int degree = 0;
		for (int j = 0; j < g->n; j++) {
			degree = degree + g->adj_mat[i][j];
		}
		printf("%d의 개수 : %d\n", i, degree);
	}
}



void main1234()
{
	GraphType* g;
	g = (GraphType*)malloc(sizeof(GraphType));
	init(g);
	for (int i = 0; i < 4; i++)
		insert_vertex(g, i);
	insert_edge(g, 0, 1);
	insert_edge(g, 0, 2);
	insert_edge(g, 0, 3);
	insert_edge(g, 1, 2);
	insert_edge(g, 2, 3);
	print_adj_mat(g);
	adj_degree(g);

	free(g);
}*/