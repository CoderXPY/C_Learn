#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main() {
//	int n, c, arr[200001], i, j,count = 0;
//	scanf("%d%d", &n, &c);
//	for (i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < n; i++) {
//		for (j = i + 1; j < n; j++) {
//			if (arr[j] - arr[i] == c || arr[i] - arr[j] == c)
//				count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

#define p 1000003//�����Խ���Խ�ã������������������ͻ����٣�������Ҫ����200000���У�����1000003��������AC
#define hash(a) a%p//hash����
long long n, m, a[p], ans;
struct node
{
	long long x; int y;//xΪ���λ�ö�Ӧ������yΪ����������˼���
}h[p];
long long abs(long long x) { return x < 0 ? -x : x; }//����ֵ
int find(long long x)//�ҵ�x��λ��
{
	int y = hash(abs(x));//��Ϊx�����Ǹ���������Ҫabs
	while (h[y].x && h[y].x != x) y = hash(++y);
	return y;
}
void push(long long x) { int y = find(x); h[y].y++; h[y].x = x; }//���ҵ�������hash���е�λ�ã��������λ�ö�Ӧ������+1�����ҽ����Ž�ȥ
int check(long long x) { return h[find(x)].y; }//����������hash���г��ֵĴ���
int main()
{
	scanf("%lld%lld", &n, &m);
	for (long long i = 1; i <= n; i++) scanf("%lld", &a[i]), push(a[i]);//���벢����
	for (long long i = 1; i <= n; i++) ans += check(a[i] - m);//ͳ��
	printf("%lld", ans);//���
}