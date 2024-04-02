#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, result = 0, n = 0;

    printf("请输入一个三位数：\n");
    scanf("%d", &num);

    originalNum = num;

    // 计算num的位数
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // 计算水仙花数
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // 输出结果
    if (result == num)
        printf("%d 是水仙花数。\n", num);
    else
        printf("%d 不是水仙花数。\n", num);

    return 0;
}

