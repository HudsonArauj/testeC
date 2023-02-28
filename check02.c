//soma 

int soma(int v[], int n){
    if(n == 0){
        return 0;
    }
    soma(v, n-1) + v[n-1];

}