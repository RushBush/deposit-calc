int CheckTerm(int a)
{
if (a<0 || a>365)
return 0;
else return a;
}
double CheckAmount(double b)
{
if (b<10000)
return 0;
else return b;
}
double Sum(int a,double b)
{
while(ChechkTerm(a)==0 || CheckAmount(b)==0)
{
printf("Not correct input,try again\n");
scanf("%d %f",&a,&b);
}
if (b<100000.0)
 {
  if (a<31) return b*0.9;
  if (a>30 && a<121) return b*1.02;
  if (a>120 && a<241) return b*1.06;
  if (a>240 && a<366) return b*1.12;
 }
if (b>100000.0)
{
  if (a<31) return b*0.9;
  if (a>30 && a<121) return b*1.03;
  if (a>120 && a<241) return b*1.08;
  if (a>240 && a<366) return b*1.15;
}

}
