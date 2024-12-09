#include <stdio.h>

int main() {
	int chose,temp;
	int arr[3][3]={{4,3,5},{4,8,6},{7,1,2}};
	int n=3;
	do{
		printf("MENU \n");
		printf("1. Nhap kich co va phan tu trong mang \n");
		printf("2. In ra cac phan tu trong mang \n");
		printf("3. In ra cac phan tu nam tren duong cheo chinh \n");
		printf("4. In ra cac phan tu nam tren duong cheo phu \n");
		printf("5. Sap xep cac phan tu trong duong cheo chinh theo tt tang dan \n");
		printf("6. Sap xep cac phan tu trong duong cheo phu theo tt tang dan \n");
		printf("7. Tim kiem phan tu va in ra vi tri cua no neu tim thay \n");
		printf("8. Thoat \n");
		scanf("%d",&chose);
		switch(chose){
			case 1: // nhap kich co va phan tu vao mang 2 chieu
				break;
			case 2:
				printf("in ra cac phan tu trong mang \n");
				for(int i=0; i<n; i++){
					for(int j=0; j<n; j++){
						printf("%d \t", arr[i][j]);
					}
					printf("\n");
				}
				break;
			case 3:
				// in ra cac phan tu trong duong cheo chinh
				printf("cac gia tri trong duong cheo chinh la: ");
				for(int i=0; i<3;i++){
					printf("%d ",arr[i][i]);
				}
				printf("\n");
				break;
			case 4:
				// in ra cac phan tu tren duong cheo phu
				printf("cac phan tu trong duong cheo phu la : \n");
				for(int i=0; i< n; i++){
					printf("%d \t",arr[i][n-i-1]);
				}
				printf("\n");
				break;
			case 5:
				// sap xep cac phan tu trong duong cheo chinh theo tt tang dan
				for(int i=0; i<n-1; i++){
					for(int j=i+1; j<n; j++){
						if(arr[i][i]>arr[j][j]){ // 7 5
							// tien hanh di doi cho
							temp= arr[i][i];
							arr[i][i]=arr[j][j];
							arr[j][j]=temp; // 5 7
						}
					}
				}
				break;
			case 6:
				for(int i=0; i<n-1; i++){
					for(int j=i+1; j<n; j++){
					 if(arr[i][n-1-i]>arr[j][n-j-1]){ 
					 // arr[1][1] arr[2][0]
					 	temp= arr[i][n-1-i];
					 	arr[i][n-1-i]=arr[j][n-j-1];
					 	arr[j][n-j-1]=temp;
					 	// 5 7 8
					 }
						
					}
				}
				break;
			case 7:
				break;
			case 8:
				break;
		}
	}while(chose!=8);

  return 0;
}

