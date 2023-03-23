#include <stdio.h>
#include <time.h>
#include <math.h>

int frequency_of_primes (int n) {
  int i,j;
  int freq=n-1;
  for (i=2; i<=n; ++i) for (j=sqrt(i);j>1;--j) if (i%j==0) {--freq; break;}
  return freq;
}

int main ()
{
  time_t now;//se zema segasniot datum
  struct tm newyear;//se zema periodot do nova godina
  double seconds;//pretstaveno vo sekundi

  time(&now);  //go zema segasnoto vreme odnosno vremenskata zona koja e vnesena na kompjuterot

  newyear = *localtime(&now);

  newyear.tm_hour = 0; newyear.tm_min = 0; newyear.tm_sec = 0;//se postavuva vremeto da bide polnok
  newyear.tm_mon = 0;  newyear.tm_mday = 1;//se postavuva mesecot da bide januari i prviot den od toj mesec

  seconds = difftime(now,mktime(&newyear));//na promenlivata sekundi se dodeluva razlikata na vremeto pomegu segasnoto vreme i vremeto do nova godina vo sekundi

  printf ("%.f seconds since new year in the current timezone.\n", seconds);// se printa kolku sekundi ima do novata godina

  clock_t t;//se zema vremeto na procesorot odnosno CPU time
  int f;//promenliva integer F
  t = clock();//na promenliva t se dodeluva momentalnoto vreme na procesotor za programata do ovoj moment
  printf ("Calculating...\n");//printanje na tekst
  f = frequency_of_primes (99999);//na f se dodeluva funkcija so argument 99999 i gi presmetuva primarnite broevi sto se pomali od 100000
  printf ("The number of primes lower than 100,000 is: %d\n",f);//gi prikazuva broevite presmetani od pogornata funkcija
  t = clock() - t;//ja presmetuva razlikata pomegu momentalnoto vreme na procesorot i vremeto vo promenlivata t
  printf ("It took me %d clicks (%f seconds).\n",t,((float)t)/CLOCKS_PER_SEC);// se pretstavuvaat prvo clock ticks na procesorot, potoa gi presmtuva sekundite so delenje so clocks_per_second sto e del od ctime dadotekata

  return 0;
}
