class Daire{
    float radyus;
    float pi;
    public:
      void deger_atama(float, float );
      float cevre()  {
          return 2*pi*radyus;
           
    }
       float alan(){
         return (radyus*radyus)*pi;
    }
     
};

void Daire::deger_atama(float x_radyus , float x_pi ){
    radyus=x_radyus;
    pi =x_pi;
}
