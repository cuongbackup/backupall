//Name: Tran Nguyen Quoc Cuong
//Date: 2022/02/08
//De: Lam menu file

#include <stdio.h>

int main() {	
    printf("    --------------------------\n");
    printf("    MENU FILE\n");
    printf("    --------------------------\n");
    printf("1. New\n2. Open\n3. Search\nMoi chon chuc nang tuong ung: ");
    int a;
    scanf("%d", &a);
    switch (a) {
    	case 1:
    		printf("Ban da chon chuc nang New");
    		break;
    	case 2:
    		printf("Ban da chon chuc nang Open");
    		break;
    	case 3:
    		printf("Ban da chon chuc nang Search");
    		break;
    	default:
    		printf("Chuc nang ban chon khong hop le");
	}
return 0;
}


