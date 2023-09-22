#include <stdio.h>

int main()
{
  int i, n, sum = 0;
  int target = 47;    /* この数を当てる */
  int hit = 0;     /* 当たったかどうか記録する変数（当たれば 1 にする） */

  for( i=1 ; i<=10 ; i++ ) {
    printf( "1から9までの数を入力して下さい。%2d回目: ", i );
    scanf( "%d", &n );

    /* 指定された範囲外の数が入力されたら、入力をやり直す（回数のカウントは増える） */
    if( n>=10 || n<=0 ){
      printf( "その数字は範囲外です\n" );
        sum -=n;
    }

    sum += n;
    if( sum == target ) {     /* 当たりの判定 */
      hit = 1;
      break;
    }

    if( sum > target ) break;   /* 超過の判定 */
  }

  if( hit == 1 ) printf( "%d回目で当たりました!\n\n", i );
  else if(hit == 0 && sum < target) printf( "残念ですが、入力された数の合計（%d）が設定値未満でした。\n\n", sum );
  else printf( "残念ですが、入力された数の合計（%d）が設定値を超えました。\n\n", sum );

  return 0;
}

