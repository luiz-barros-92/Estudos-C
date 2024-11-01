#include <stdio.h>

int main()
{
    int tv_2020, tv_2021, tv_2022;
    int ntb_2020, ntb_2021, ntb_2022;
    int smrt_2020, smrt_2021, smrt_2022;
    
    float media_2020 = 0;
    float media_2021 = 0;
    float media_2022 = 0;
    
    tv_2020 = 800;
    tv_2021 = 950;
    tv_2022 = 725;
    ntb_2020 = 650;
    ntb_2021 = 550;
    ntb_2022 = 700;
    smrt_2020 = 1500;
    smrt_2021 = 1800;
    smrt_2022 = 2100;
    
    media_2020 = (tv_2020 + ntb_2020 + smrt_2020) / 3;
    media_2021 = (tv_2021 + ntb_2021 + smrt_2021) / 3;
    media_2022 = (tv_2022 + ntb_2022 + smrt_2022) / 3;
    
    printf("A média de produtos vendidos em 2020 foi de %.2f produtos.\n", media_2020);
    printf("A média de produtos vendidos em 2021 foi de %.2f produtos.\n", media_2021);
    printf("A média de produtos vendidos em 2022 foi de %.2f produtos.\n", media_2022);
    
    if (media_2020 > media_2021 && media_2020 > media_2022) {
        printf("O ano com a média de vendas mais alta foi 2020");
    }else if (media_2021 > media_2020 && media_2021 > media_2022) {
        printf("O ano com a média de vendas mais alta foi 2021");
    }else {
        printf("O ano com a média de vendas mais alta foi 2022");
    }

    return 0;
}
