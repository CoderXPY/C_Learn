#define   _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
using namespace std;
int num[66666], ans;
double k;
int f[13] = { 0,0,31,60,91,121,152,182,213,244,274,305,335 };
//Ԥ����ÿ�µ�������ע��C++��Ĭ�������±��Ǵ�0��ʼ��
int main() {
	int i, a, b, n;

	cin >> n;

	for (i = 1; i <= n; i++) {
		cin >> a >> b;
		num[i] += f[a];
		num[i] += b;//��������
	}
	sort(num + 1, num + n + 1);//STLģ���sort����
	num[n + 1] = 367; //һ���ĩβ����һ��ΪʲôҪ��367��
	for (i = 1; i <= n + 1; i++) {
		//ע�������Ǵ�1��ʼѭ������Ϊnum��������main�����ⶨ��ģ�����num[0]ֵΪ0����˿��Դ����һ��ʱ��
		ans = max(num[i] - num[i - 1] - 1, ans);//ansȡ���ֵ
	}
	k = (ans * 1.0 * 24 * 3600 / 366) + 0.5;//����ʱ�䣬ע���������룬����0.5�ڻ��������Ǻܳ����ķ���
	ans = k;//ǿ��ת��Ϊ����

	cout << ans;//���������

	return 0;
}