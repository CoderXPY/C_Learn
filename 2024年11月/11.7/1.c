#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main() {
//	int n,arr[31][31],i,j;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= n; j++) {
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= n; j++) {
//			if (arr[i][j] == 0 && arr[i][j - 1] == 1) {
//				do{
//					arr[i][j++] = 2;
//				} 
//				while (arr[i][j] != 1);
//			}
//		}
//	}
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= n; j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


int a[32][32], b[32][32];
int dx[5] = { 0,-1,1,0,0 };
int dy[5] = { 0,0,0,-1,1 };//��һ����ʾ�������ǳ����ģ�������ĸ��ֱ������������ĸ�����
int n, i, j;
void dfs(int p, int q) {
    int i;
    if (p<0 || p>n + 1 || q<0 || q>n + 1 || a[p][q] != 0) return;//����ѹ�ͷ�����Ѿ����ѹ��˻��߱�������ǽ�ľ�����
    a[p][q] = 1;//Ⱦɫ
    for (i = 1; i <= 4; i++) dfs(p + dx[i], q + dy[i]);//���ĸ���������
}
int main() {
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++) {
            scanf("%d", &b[i][j]);//��ʵ������������Ҳ���ԣ�������ϲ����
            if (b[i][j] == 0) a[i][j] = 0;
            else a[i][j] = 2;
        }
    dfs(0, 0);//���� ��0��0��ʼ��
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++)
            if (a[i][j] == 0)
                printf("2 ");//���Ⱦ��ɫ�Ժ�i��j�Ǹ��ط�����0��˵��û���ѵ���������Χ��ǽ����Ȼ���Ǳ�Χס�ˣ�Ȼ�����2
            else
                printf("%d ", b[i][j]);//��Ϊ��Ⱦɫ�ˣ�����û�б�Χס��ˮ��ǽ��Ⱦ����1�����Ծ����b[i][j]
        printf("\n");//����
    }
}