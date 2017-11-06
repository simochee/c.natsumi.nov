# 問題4-16

> 今日は1円、明日は2円、明後日は4円というように翌日には2倍の金額を貯金した場合に、キーボードから入力された`n`に対して。1〜`n`日目までの貯金額を求めるプログラムを作成しなさい。

## 実行結果

```
$ gcc source.c
$ ./a.out
n: 4
4日目までの貯金額は15円です
```

## 解説

```c
#include <stdio.h>
// math.hはpow()などの数学系の関数を提供するライブラリ
#include <math.h>

int main(void) {
        // n: n日目を表す変数
        // i: for文で使用する変数
        // amount: 合計金額
        int n, i, amount = 0;

        // 求める日数を入力
        printf("n: ");
        scanf("%d", &n);

        // 0〜(n - 1)までループを回す
        for (i = 0; i < n; i++) {
                // amountに以下を足す
                // pow(2, i) は 2^i （2のi乗)
                amount += pow(2, i);
        }
        
        // この時点で 2^0 〜 2^(n-1) までが足された値が
        // amount に入っている

        // 結果を書き出し
        printf("%d日目までの貯金額は%d円です\n", n, amount);

        return (0);
}
```
