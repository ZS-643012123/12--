#include<iostream>
using namespace std;
struct  Point
{
    int x, y;////xsadasdasdsadsadasdasda
};
int main() {
    int n,x,y;//x,y��ʱ�����
    cin >> n;
    Point* p=new Point[n];//������
    int pd, so;
    int* zs=new int [n];
    int soc[5] ;//�ֱ�÷�Ϊ0-4�ĸ���sdsd
    for (int i = 0; i < 5; i++) {
        soc[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        cin >> p[i].x >> p[i].y;//��������λ��
    }
    for (int i = 0; i < n; i++) {//�ж�ÿһ���������Ƿ�Ϲ�
        x = p[i].x;
        y = p[i].y;
         pd = 0;//��־λ�Ƿ�ﵽ��׼
         for (int j = 0; j < n; j++) {//ɨ��������
             if (x == p[j].x) {//ͬһ����
                 if (y == p[j].y - 1) {//�����ϵ�
                     pd++;
                 }
                 if (y == p[j].y + 1)//�����µ�
                 {
                     pd++;
                 }

             }
             if (y == p[j].y) {//ͬһ����
                 if (x == p[j].x - 1) {//�����ҵ�
                     pd++;
                 }
                 if (x == p[j].x + 1)//�������
                 {
                     pd++;
                 }
             }
         }
            if (pd == 4) {//�õ�������Ҫ���������¶�������������Ҫ����÷����
                 so = 0;//��ʼ���õ�ĵ÷�Ϊ0
                for (int k = 0; k < n; k++) {//ɨ��һ�����е�������
                    
                    if (x - 1 == p[k].x && y + 1 == p[k].y) {//����
                        so ++;
                    }
                    if (x - 1 == p[k].x && y - 1 == p[k].y) {//����
                        so++;
                    }
                    if (x + 1 == p[k].x && y + 1 == p[k].y) {//����
                        so++;
                    }
                    if (x + 1 == p[k].x && y - 1 == p[k].y) {//����
                        so++;
                    }

             }//�õ�÷������Ӧ�ϵ÷ֵĸ���
                if (so == 0) {
                    soc[0]++;
                }
                if (so == 1) {
                    soc[1]++;
                }
                if (so == 2) {
                    soc[2]++;
                }
                if (so == 3) {
                    soc[3]++;
                }
                if (so == 4) {
                    soc[4]++;
                }
            }

       
    }
    for (int i = 0; i <5; i++) {
        cout << soc[i] << endl;
    }
    return 0;
}
