#include<stdio.h>
int main(){
	int n;
	printf("nhap so luong phan tu: ");
	scanf("%d",&n);
	int array[n];
	printf("nhap cac phan tu cua mang.\n");
	for(int i=0;i<n;i++){
		printf("phan tu thu %d: ",i+1);
		scanf("%d",&array[i]);	
	}
	int x;
	printf("nhap phan tu can tim: ");
	scanf("%d",&x);
	int ktr=0;
	for(int i=0;i<n;i++){
		if(array[i]==x){
			printf("phan tu thu %d dc tim thay tai vi tri %d.\n",x,i);
			ktr=1;
		}
	}
	if(!ktr){
	printf("phan tu %d khong ton tai trong mang.\n",x);
	}
	return 0;
}
