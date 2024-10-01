int nomber(int x){
   int m=0;

for(int i=0 ;i<=10 ;i++){
    m=x*i ;
    printf("result : %d x%d =%d \n",x,i,m);
    
}
}
int main(){
    int x;
    printf("veuilles vous entre le nomber :");
scanf("%d",&x);
nomber(x);

   
  
    return 0; 
}