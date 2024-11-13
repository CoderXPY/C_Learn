#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

typedef long long ll;
ll a[600000], b[600000], ans;
void mergee(ll l, ll r) {
	if (l >= r) {  //�����ٷ��ˣ�ֱ�ӷ��ء�
		return;
	}
	ll mid = (l + r) / 2;//ȡһ���м�ֵ
	ll i = l, j = mid + 1, tot = l;  // i�ǵ�һ�����еĿ�ͷ��j�ǵڶ������еĿ�ͷ��tot�������Ĵ����С�
	while (i <= mid && j <= r) {  //�ϲ�
		if (a[i] <= a[j]) {  //˭С�Ͱ�˭�ŵ�ǰ�档
			b[tot++] = a[i];
			i++;
		}
		else {
			b[tot++] = a[j];
			j++;
		}
	}
	while (i <= mid) {  //���ܻ�û�з��꣬�Ͱ�ʣ�µķŽ�����
		b[tot++] = a[i];
		i++;
	}
	while (j <= r) {  // ͬ��
		b[tot++] = a[j];
		j++;
	}
	for (int i = l; i <= r; i++) {  // �����յĴ����鸳ֵ��
		a[i] = b[i];
	}
	return;
}
void mergesort(ll l, ll r) {
	if (l < r) {
		int mid = (l + r) / 2;
		mergesort(l, mid);  //  �ȸ�������������
		mergesort(mid + 1, r); //�ٸ�������������
		mergee(l, r);  // �������������кϲ���
	}
}
int main() {
	//freopen(".in","r",stdin);
	//freopen(".out","w",stdout);
	ll n;
	scanf("%lld", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%lld", &a[i]);
	}
	mergesort(1, n);
	for (int i = 1; i <= n; i++) {
		printf("%lld ", a[i]);
	}
	return 0;
}