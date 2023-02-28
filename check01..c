// passo 6 - isola o menor caso
//passo 7, coloca a restrição
// caso do checkpoint 1
int pow(int b, int e){
        if (e ==0){
            return 1;
        }

    return pow(b,e-1)*b;
}