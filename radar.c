#include <stdio.h>





double calculaVelocidadeMedia(int tA, int tB, double distancia){

        double conf1 = tA / 3600;
        double conf2 = tB / 3600;
        double media = distancia /(conf2 - conf1);
        return media;


}

int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima){

        double conf1 = tA / 3600;
        double conf2 = tB / 3600;
        double media = distancia /(conf2 - conf1);
        if(media <=velocidadeMaxima){
                return 0;
        }
        if(media> velocidadeMaxima){
        
                return 1;
        }


                }
                
                
