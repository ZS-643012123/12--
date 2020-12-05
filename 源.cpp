#include<iostream>
using namespace std;
struct  Point
{
    int x, y;////xsadasdasdsadsadasdasda
};
int main() {
    int n,x,y;//x,y暂时提出来
    cin >> n;
    Point* p=new Point[n];//存垃圾
    int pd, so;
    int* zs=new int [n];
    int soc[5] ;//分别得分为0-4的个数sdsd
    for (int i = 0; i < 5; i++) {
        soc[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        cin >> p[i].x >> p[i].y;//输入垃圾位置
    }
    for (int i = 0; i < n; i++) {//判断每一个垃圾点是否合规
        x = p[i].x;
        y = p[i].y;
         pd = 0;//标志位是否达到标准
         for (int j = 0; j < n; j++) {//扫描垃圾点
             if (x == p[j].x) {//同一横线
                 if (y == p[j].y - 1) {//存在上点
                     pd++;
                 }
                 if (y == p[j].y + 1)//存在下点
                 {
                     pd++;
                 }

             }
             if (y == p[j].y) {//同一竖线
                 if (x == p[j].x - 1) {//存在右点
                     pd++;
                 }
                 if (x == p[j].x + 1)//存在左点
                 {
                     pd++;
                 }
             }
         }
            if (pd == 4) {//该点是满足要求左右上下都有垃圾，现在要计算得分情况
                 so = 0;//初始化该点的得分为0
                for (int k = 0; k < n; k++) {//扫描一遍所有的垃圾点
                    
                    if (x - 1 == p[k].x && y + 1 == p[k].y) {//左上
                        so ++;
                    }
                    if (x - 1 == p[k].x && y - 1 == p[k].y) {//左下
                        so++;
                    }
                    if (x + 1 == p[k].x && y + 1 == p[k].y) {//右上
                        so++;
                    }
                    if (x + 1 == p[k].x && y - 1 == p[k].y) {//右下
                        so++;
                    }

             }//该点得分情况对应上得分的个数
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
