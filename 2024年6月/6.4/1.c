#define _CRT_SECURE_NO_WARNINGS

//������Ѷ��൱���ҿ��˽��ⷽ���еĴ���C���ԵĴ𰸱Ƚ���ֱ�����
//���ر�д����ϸ��ע�⣬ϣ�����������ջ�
#include <stdio.h>
int n;//�涨������Ƶı���
int arr[20] = { 0 };//����ı���Ƶ�����
int arr_r[20] = { 0 };//����������
char crr[10] = { 0 };//�ı���Ƶ�����
int lenght = 0;

void func_crr_to_arr() //�Ľ��ƺ�����
{
    for (lenght = 1; crr[lenght - 1] != 0; lenght++) {
        if (crr[lenght - 1] >= '0' && crr[lenght - 1] <= '9')          arr[lenght] = crr[lenght - 1] - '0';
        else if (crr[lenght - 1] >= 'A' && crr[lenght - 1] <= 'F')   arr[lenght] = crr[lenght - 1] - 'A' + 10;
    }
    lenght -= 1;//���������ȼ�һ
}
int  func_arr_palindrome_judge() //�ж��Ƿ��ǻ������ĺ���
{
    for (int i = 1; i <= lenght; i++) {
        if (arr[i] != arr[lenght - i + 1])
            return 0;//�ǻ�����ͣ��ѭ������
    }
    return 1;//���ǻ���������1ʹѭ����������
}

void func_get_arr_reserve()//����������
{
    for (int i = 1; i <= lenght; i++) {
        arr_r[i] = arr[lenght - i + 1];
    }
}

void func_arr_reset()//���������������������ĺ���
{
    for (int i = lenght; i > 0; i--) {
        if ((arr[i] + arr_r[i]) / n != 0)//�ж϶�Ӧλ�õ�������Ƿ���ڽ�λ��
        {
            arr[i - 1]++;//���ڽ���λ��������Զ���λ
            arr[i] = arr[i] + arr_r[i] - n;//��ȥ����λ������Ӱ�죻
        }
        else {
            arr[i] = arr[i] + arr_r[i];
        }
    }
    if (arr[0] != 0)//������һ��λ��Ϊ��λ0�����ڼӷ�ʱ��λ��
    {
        for (int i = lenght; i >= 0; i--) {
            arr[i + 1] = arr[i];
        }
        arr[0] = 0;
        lenght++;//������λ�����������ӳ���
    }
}

int main() {
    int step = 0;

    scanf("%d", &n);//ʶ��涨�Ľ���
    scanf("%s", &crr);//���뼴���ı���Ƶ�����
    func_crr_to_arr();//�ı����

    while (!func_arr_palindrome_judge())//�ж��������ǻ����������У�
    {
        func_get_arr_reserve();
        func_arr_reset();
        step++;
        if (step >= 30)break;//����������ʮ������
    }
    if (step >= 30)printf("Impossible!");
    else printf("STEP=%d", step);
    return 0;
}
