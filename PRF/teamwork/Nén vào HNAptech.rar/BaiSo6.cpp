/* BAI 6
By: Group 2
Date: 13/01/2022
*/
#include <stdio.h>
int main(){ 
int ngay, thang, nam, check;   

do{ 
    check = 1;
    printf("\nNhap ngay thang nam: ");
    printf("\nNhap ngay: "); scanf("%d",&ngay);
    printf("Nhap thang: "); scanf("%d",&thang);
    printf("Nhap nam: "); scanf("%d",&nam);

/*kiểm tra dữ liệu ngày tháng năm nhập vào có hợp lệ hay không*/
    if (ngay<1||thang<1||nam<0){check = 0;}
    if (thang>12){check = 0;}
    switch(thang){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            if (ngay > 31){check = 0;}
        break;
        case 4: case 6: case 9: case 11:
            if (ngay > 30){check = 0;}
        break;
        case 2:
            if ((nam % 400 == 0 )|| ((nam % 100 != 0) && (nam % 4 == 0))){
                if (ngay > 29){check = 0;}
            } else {
                if (ngay > 28){check = 0;}
            }
        break;}
    if (check == 0){printf("Ngay thang nam khong hop le\n");}      
} while(check == 0);

nam = nam%100;                                                         /*Sử dụng toán tử chia lấy dư (%) cho 100 trả về 2 ký tự cuối của năm*/
printf("Ngay thang nam da nhap: %0.2d/%0.2d/%0.2d", ngay, thang, nam); /*Sử dụng định dạng xuất số nguyên với 2 vị trí (bù thêm 0 nếu thiếu)*/
getchar();
return 0;
}