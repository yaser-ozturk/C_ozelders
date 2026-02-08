for (int i = 999999999 ; i >=100000000 ; i--) {

        int gecicisayi = i;
        long long toplam = 0;

        while (gecicisayi>0) {

            int basamak = gecicisayi % 10;
            long long çarpım =1;

            for (int k=0; k<9 ; k++) {
                çarpım = çarpım * basamak;
            }

            toplam = toplam + çarpım;
            gecicisayi = gecicisayi / 10;

        }
        if (toplam == i) {
            printf("En buyuk 9 basamaklı Armstrong sayısı: %d",i);
            break;
        }
    }
