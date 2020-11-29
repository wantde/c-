// ��ŵ������
//����ƶ��Ĳ��� 
#include <stdio.h>
//��¼���� 
int i = 1;
//n �ڼ������ƶ��� from �ƶ���  to Ŀ���� 
void move(int n, char from, char to) {
    printf("��%d���ƶ���%d����: %c----->%c\n", i++, n, from, to);
}

void hanoi(int n, char from, char mid, char to) {
    if (n == 1) {
        move(n, from, to);//ֻ��һ��������ֱ�ӽ������ϵ������ƶ���Ŀ�ĵ�
    }
    else {
        hanoi(n - 1, from, to, mid);//�Ƚ���ʼ����ǰn-1�����ӽ���Ŀ�����ƶ�����������
        move(n, from, to);        //��ʣ�µ�һ�������ƶ���Ŀ������
        hanoi(n - 1, mid, from, to);//��󽫽������ϵ�n-1�������ƶ���Ŀ������
    }
}

int main() {
    printf("���������ӵĸ���:\n");
    int n;
    scanf_s("%d", &n);
    char x = 'A', y = 'B', z = 'C';
    printf("�����ƶ��������:\n");
    hanoi(n, x, y, z);
    return 0;
}