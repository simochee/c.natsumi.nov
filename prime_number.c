#include <stdio.h>

int IsPrime(int n);

int main(void)
{
  int i, count = 1;
  
  // 100000までの素数を調べる
  for (i = 3; i <= 100000; i += 2)
  {
    count += IsPrime(i);
  }
  
  // 結果を出力
  printf("100000までの素数は%d個あります\n", count);
  
  return (0);A
}

// nが素数かどうかを判定し、
// 素数なら1を、素数でなければ0を返す関数
int IsPrime(int n)
{
  int i;
  
  // nを1〜(n-1)までの数で割った時に割り切れる（＝あまりが0）になるものがあれば素数ではない
  for (i = 3; i < n; i += 2) {
    if (n % i == 0) {
      // returnしたらこれ以降の処理は実行されない
      return 0;
    }
  }
  
  // 素数ではない場合ここまでこない
  return 1;
}
