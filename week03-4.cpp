/// week03-4.cpp
/// M90H044 瘋狂程設不能打中文,會變亂碼
#include <stdio.h>
int main()
{
    int ans = 0;/// 答案加到這裡面
    /// 迴圈前面ans是0
    int N;/// 整數N
    scanf("%d", &N); ///讀入 N
    ///人類的迴圈,從1開始
    for(int i=1; i<=N; i++){
        ans += i;///迴圈中間 修改ans
    }
    printf("%d",ans);
}
