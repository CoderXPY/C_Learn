#define _CRT_SECURE_NO_WARNINGS

//这题的难度相当大，我看了解题方法中的大佬C语言的答案比较难直接领会
//就特别写了详细的注解，希望你能轻松收获；
#include <stdio.h>
int n;//规定输入进制的变量
int arr[20] = { 0 };//储存改变进制的数组
int arr_r[20] = { 0 };//逆置数数组
char crr[10] = { 0 };//改变进制的数组
int lenght = 0;

void func_crr_to_arr() //改进制函数；
{
    for (lenght = 1; crr[lenght - 1] != 0; lenght++) {
        if (crr[lenght - 1] >= '0' && crr[lenght - 1] <= '9')          arr[lenght] = crr[lenght - 1] - '0';
        else if (crr[lenght - 1] >= 'A' && crr[lenght - 1] <= 'F')   arr[lenght] = crr[lenght - 1] - 'A' + 10;
    }
    lenght -= 1;//逆置数长度减一
}
int  func_arr_palindrome_judge() //判定是否是回文数的函数
{
    for (int i = 1; i <= lenght; i++) {
        if (arr[i] != arr[lenght - i + 1])
            return 0;//是回文数停滞循环进行
    }
    return 1;//不是回文数返回1使循环继续进行
}

void func_get_arr_reserve()//逆置数函数
{
    for (int i = 1; i <= lenght; i++) {
        arr_r[i] = arr[lenght - i + 1];
    }
}

void func_arr_reset()//按照逆置数相加造回文数的函数
{
    for (int i = lenght; i > 0; i--) {
        if ((arr[i] + arr_r[i]) / n != 0)//判断对应位置的数相加是否大于进位；
        {
            arr[i - 1]++;//大于进制位的情况下自动进位
            arr[i] = arr[i] + arr_r[i] - n;//减去进制位的数的影响；
        }
        else {
            arr[i] = arr[i] + arr_r[i];
        }
    }
    if (arr[0] != 0)//留出第一个位置为空位0方便在加法时进位；
    {
        for (int i = lenght; i >= 0; i--) {
            arr[i + 1] = arr[i];
        }
        arr[0] = 0;
        lenght++;//添加零后位整个数组增加长度
    }
}

int main() {
    int step = 0;

    scanf("%d", &n);//识别规定的进制
    scanf("%s", &crr);//输入即将改变进制的数组
    func_crr_to_arr();//改变进制

    while (!func_arr_palindrome_judge())//判断条件不是回文数继续行；
    {
        func_get_arr_reserve();
        func_arr_reset();
        step++;
        if (step >= 30)break;//次数大于三十次跳出
    }
    if (step >= 30)printf("Impossible!");
    else printf("STEP=%d", step);
    return 0;
}
