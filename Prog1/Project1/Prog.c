#include <stdio.h>
#include <string.h>

#pragma warning(disable:4996)

int main() {
    int length = 0;
    char  moji[20] = {'\0'}, * pmoji;

    printf("10文字程度の英数字の文字列を入力してください（スペースなしで）\n");
    (void)scanf("%s", moji);
    
    /* 文字列の長さを取得 */
    if ( moji != NULL && ((length = (int)strlen(moji)) == 0) ) {
        return 0;
    }
    /* ポインタに文字列のアドレスを代入 */
    pmoji = moji;

    for (int loop = 1; loop <= length; loop++) {
        printf("%s\n", (pmoji + length - loop));
    }

    return 0;
}