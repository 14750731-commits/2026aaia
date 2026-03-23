// week05-5a.cpp SOIT107_BASE_018
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    for (int i=2; i<=N; i+=2) {
        printf("%d ", i);
    }
}


// week05-5b.cpp SOIT106_BASE_003
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int ans = 0;
    for (int i=0; i<N; i++) {
        int now;
        scanf("%d", &now);
        ans += now;
    }
    printf("%d\n", ans);
}
