#include <stdio.h>

// 遞迴函數：n 為盤子數量，from 為起始柱，to 為目標柱，aux 為輔助柱
void towerOfHanoi(int n, char from, char to, char aux)
{
    // 基本結束條件：如果只剩 1 個盤子，直接搬過去
    if (n == 1)
    {
        printf("將第 1 個盤子從柱子 %c 移到柱子 %c\n", from, to);
        return;
    }

    // 步驟 1：將上面的 n-1 個盤子從 from 移到 aux (借助 to)
    towerOfHanoi(n - 1, from, aux, to);

    // 步驟 2：將最底下的第 n 個盤子從 from 移到 to
    printf("將第 %d 個盤子從柱子 %c 移到柱子 %c\n", n, from, to);

    // 步驟 3：將 aux 上的 n-1 個盤子移到 to (借助 from)
    towerOfHanoi(n - 1, aux, to, from);
}

int main()
{
    int n = 4; 
    printf("以下為 %d 個盤子的移動步驟：\n", n);
    // A 代表起始柱，C 代表目標柱，B 代表輔助柱
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}
