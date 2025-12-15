#include <stdio.h>

// 函数原型声明(函数的具体实现需要你在文件末尾完成)
void sort_interest(int *interest, int n);

int main() {
    int n;
    scanf("%d", &n);
    int interest[100];
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &interest[i]);
    }
    sort_interest(interest, n);
    for (i = 0; i < n; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", interest[i]);
    }
    printf("\n");
    return 0;
}

// 你需要实现的函数
void sort_interest(int *interest, int n) {
	if(n == 0){
		return;
	}else{
		int m,i;
		int temp;
		
		//flag：是否有交换的标记 
		int flag = 1;
		
		for(m = 1; m <= n - 1 && flag == 1; m++){
			flag = 0;                                                     
			for(i = 0; i < n - m; i++){
				if(interest[i] < interest[i+1]){
					flag = 1;
					temp = interest[i];
					interest[i] = interest[i+1];
					interest[i+1] = temp;
				}
			}
		}
		
		return;
	}
}
