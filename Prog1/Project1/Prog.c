#include <stdio.h>
#include <string.h>

#pragma warning(disable:4996)

int main() {
    int length;
    char  moji[20] = {'\0'}, * pmoji;


    printf("10文字程度の英数字の文字列を入力してください（スペースなしで）\n");
    (void)scanf("%s", moji);

	/* 文字列の長さを取得 */
    if ( moji != NULL && ((length = (int)strlen(moji)) == 0) ) {
        return 0;
    }
    /* ポインタに文字列のアドレスを代入 */
    pmoji = moji;

    printf("入力された文字列を逆順に表示します。\n");
    for (int loop = 1; loop <= length; loop++) {
        printf("%s\n", (pmoji + (char)length - (char)loop));
    }

    return 0;
}