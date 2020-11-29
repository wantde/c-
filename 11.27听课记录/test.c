// 汉诺塔问题
//输出移动的步骤 
#include <stdio.h>
//记录步数 
int i = 1;
//n 第几号盘移动， from 移动塔  to 目标塔 
void move(int n, char from, char to) {
    printf("第%d次移动第%d号盘: %c----->%c\n", i++, n, from, to);
}

void hanoi(int n, char from, char mid, char to) {
    if (n == 1) {
        move(n, from, to);//只有一个盘子是直接将初塔上的盘子移动到目的地
    }
    else {
        hanoi(n - 1, from, to, mid);//先将初始塔的前n-1个盘子借助目的塔移动到借用塔上
        move(n, from, to);        //将剩下的一个盘子移动到目的塔上
        hanoi(n - 1, mid, from, to);//最后将借用塔上的n-1个盘子移动到目的塔上
    }
}

int main() {
    printf("请输入盘子的个数:\n");
    int n;
    scanf_s("%d", &n);
    char x = 'A', y = 'B', z = 'C';
    printf("盘子移动情况如下:\n");
    hanoi(n, x, y, z);
    return 0;
}