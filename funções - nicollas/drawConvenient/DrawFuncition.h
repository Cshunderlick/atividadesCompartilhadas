void retangulo(int largura,int altura){
    int j,k;
    largura /=2;
    altura /=4;

    for(j=1 ; j <= altura ; j++)
    {
        printf("\t");
        for(k=1; k <= largura ; k++)
        printf("\xDB");
        printf("\n");
    }
}