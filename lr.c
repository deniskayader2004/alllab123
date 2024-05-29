#include"lr.h"
#include<stdio.h>
#define YES 1
#define NO 0
void printBinary(unsigned int x) {
    if (x > 1) {
        printBinary(x / 2);
    }
    printf("%d", x % 2);
}
void iSort(int *arr, int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
    int pow(int x, int y)
{
int x1 = x;
 if (y == 0) {
 return 1;
  }
 for (int i = 1; i < y; i++) {
 x1 = x1 * x;
    }
    return x1;
}
int lab1(){
        float L, v1, t;
    int v2;
    scanf("%f", &L);
    scanf("%f", &v1);
    scanf("%f", &t);
    v2=(int)(L-(v1*t))/t;
    printf("%d", v2);

return 0;
}
int lab11(){
    float L, v1, t;
    int v2;
    scanf("%f", &L);
    scanf("%f", &v1);
    scanf("%f", &t);
    v2=(int)(L-(v1*t))/t;
    printf("%d", v2);
    return 0;
}


int lab2(){
    float s = 0, a;
    int n, g, x;
    scanf("%d", &n);
    scanf("%d", &x);
    g = 1;
    for (float i = 1; i <= n; i++)
    {
        a = pow(x, i) / i;
        s = s + a * g;
        g = -g;
    }
    printf("s=%.2f", s);
return 0;
}
int lab21(){{

    float s = 0, a;
    int n, g, x;
    scanf("%d", &n);
    scanf("%d", &x);
    g = 1;
    for (float i = 1; i <= n; i++)
    {
        a = pow(x, i) / i;
        s = s + a * g;
        g = -g;
    }
    printf("s=%.2f", s);
    return 0;
}

}
int lab3(){
      int flag = NO;
    int cnt = 0;
    int buk = 0;
    int n = 3;

    char c;

    while ((c = getchar()) != EOF) {
        if (c == '.' || c == ',' || c == ' ' || c == '\n') {
            flag = NO;
            if (buk > n) {
                cnt++;
            }
            buk = 0;
        } else {
            if (flag == NO) {
                flag = YES;
                buk++;
            } else {
                buk++;
            }
        }
    }

    if (buk > n) {
        cnt++;
    }

    printf("number of words = %d\n",cnt);

return 0;
}
int lab31(){
    int flag, cnt, buk, n = 3, m = 5;
    char c;
    cnt = 0;
    buk = 0;
    flag = NO;
    while ((c = getchar()) != EOF) {
        if (c == '.' || c == ',' || c == ' ' || c == '\n') {
            flag = NO;
            if (buk >= n && buk <= m) {
                cnt++;
            }
            buk = 0;
        } else {
            if (flag == NO) {
                flag = YES;
                buk++;
            } else {
                if (flag == YES) {
                    buk++;
                }
            }
        }
    }
    printf("Number of words=%d\n",cnt);
    return 0;
}

int lab4() {
char arr[100], ans[100];
    int i = 0, j = 0;
    fgets(arr, sizeof(arr), stdin);
    while (arr[i] != '\0') {
        if (arr[i] != ' ' || (i > 0 && arr[i - 1] != ' ')) {
            ans[j] = arr[i];
            j++;
        }
        i++;
    }
    ans[j] = '\0';
    printf("%s", ans);
    return 0;
}
int lab41(){
char arr[100], ans[100];
    int i = 0, j = 0;
    int start = 0, end;
    fgets(arr, sizeof(arr), stdin);
    end = strlen(arr) - 1;
    if (arr[end] == '\n') {
        arr[end] = '\0';
        end--;
    }
    while (arr[start] == ' ') {//нач пробелы
        start++;
    }
    while (end >= start && arr[end] == ' ') {//конец пробеллы
        end--;
    }
    for (i = start; i <= end; i++) {
        if (arr[i] != ' ' || (i > start && arr[i - 1] != ' ')) {
            ans[j] = arr[i];
            j++;
        }
    }
    ans[j] = '\0';
    printf("%s", ans);
    return 0;
}
int lab5()
{int arr[10],sr=0,sum=0;
    for(int i=0;i<10;i++){
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }
    sr=sum/10;
    for(int i=0;i<10;i++){
        if(arr[i]<sr){
            arr[i]=0;
        }
        printf("%d ", arr[i]);
    }
    return 0;
}
int lab51(){
    int arr[10], sr = 0, sum = 0, count = 0;
    printf("vvedite 10 chicel:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    sr = sum / 10;
    for (int i = 0; i < 10; i++) {
        if (arr[i] > sr) {
            arr[i] = 0;
            count++;
        }
    }
    printf("izm macciv:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n: %d\n", count);

    return 0;
}
int lab6() {
int N=3,K=4;
    int arr[N][K];
    int minI = 0;
    int minS = 30000;
    for (int i=0;i<N;i++){//перебор строк
        for(int j=0;j<K;j++){//
            scanf("%d", &arr[i][j]);//запись числа по индексу
        }
    }

    for(int i = 0; i < N; i++) {//
        int sum = 0;
        for(int j = 0; j < K; j++) {//
            sum += arr[i][j];
        }
        if(sum < minS) {
            minS = sum;
            minI = i;
        }
    }
    for(int j = 0; j < K; j++) {
        arr[minI][j] = 0;
    }
    printf("\n");//перенос строки
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < K; j++) {//
            printf("%d ", arr[i][j]);
        }
        printf("\n");//
    }
    return 0;
}
int lab7(){
    unsigned int N; // Исходное число
    int position = 0; // Позиция младшей единицы
    unsigned int mask = 1; // Начальная маска для самого младшего

    printf("Vvedite chiclo N: ");
    scanf("%d", &N); // Ввод числа пользователем

    // Поиск позиции младшей единицы с использованием маски
    while ((N & mask) == 0) {
        position++;
        mask <<= 1; // Сдвиг маски на один бит влево
    }
    printf("poz ml edini: %d\n", position + 1);
    printf("chiclo N v dvoich: ");
    printBinary(N);
    return 0;}





