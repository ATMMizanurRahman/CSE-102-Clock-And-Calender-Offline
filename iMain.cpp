# include "iGraphics.h"
# include<time.h>
int  minute, second, realsec, realhour, realmin,s,d,hour,day,date=1,month=0,l,m1,m2;
int  a1,a2,lyr,year=-5,xr=300,yr=300,r1=20;
char strno1[111], strno2[112], strno3[113],c[]= {'0','1'};
void drawTextBox(int a1, int a2){
    iRectangle(a1, a2, 250, 30);
}
/* Is it a leap year, this is the code*/
int leapyear(int yr)
{
    if(yr%400==0||((yr%100!=0)& (yr %4==0))){
             return 1;
    }
    else return 0;
}
int dateofday(int a, int yr){
    int b,c=1;
    if(a == 1){
        a = 13, yr = yr-1;
    }
    if(a == 2){
        a = 14,yr=yr-2;
       }
       /*The main Formula*/
      b = (c + (26*(a+1) / 10) + yr + (yr / 4) + 6 * (yr / 100) + (yr / 400))%7;
      return b;
}
void time()
{
  time_t s, d, hour, minute, second;
    s = time(NULL);
    d = (s + 21600) % 86400,hour=d/(60*60),minute=(d % (60*60)) / 60,second=(d % (60*60)) % 60;
    realsec=second,realmin=minute,realhour=hour;
    realsec=realsec+1;
    if(realsec>59){
       realsec=0, realmin=realmin+1;
       }
    if(realmin>59){
        realmin=0,realhour=realhour+1;
        }
    if(realhour>23) {
        realhour=0;
    }
    printf("%d : %d : %d\n", realhour,realmin,realsec);
}
  /*Preaparing the Stick*/
void print8(int p, int q){
    iSetColor(255,255,0);
    iFilledRectangle(p+3,q+140,60,6);
    iFilledRectangle(p+65,q+70,6,65);
    iFilledRectangle(p,q+70,6,65);
    iFilledRectangle(p+3,q +65,60,6);
    iFilledRectangle(p+65,q,6,65);
    iFilledRectangle(p,q,6,65);
    iFilledRectangle(p+3,q-3,60,6);
}
void print0(int p, int q){
    iSetColor(255,255,0);
    iFilledRectangle(p+3,q+140,60,6);
    iFilledRectangle(p+65,q+70,6,65);
    iFilledRectangle(p,q+70,6,65);
    iFilledRectangle(p+65,q,6,65);
    iFilledRectangle(p,q,6,65);
    iFilledRectangle(p+3,q-3,60,6);
}
void print6(int p, int q){
    iSetColor(255,255,0);
    iFilledRectangle(p + 3, q + 140, 60, 6);
    iFilledRectangle(p , q + 70, 6, 65);
    iFilledRectangle(p + 3, q + 65, 60, 6);
    iFilledRectangle(p + 65, q, 6, 65);
    iFilledRectangle(p, q, 6, 65);
    iFilledRectangle(p + 3, q - 3, 60, 6);
}
void print5(int p, int q){
    iSetColor(255,255,0);
    iFilledRectangle(p + 3, q + 140, 60, 6);
    iFilledRectangle(p , q + 70, 6, 65);
    iFilledRectangle(p + 3, q + 65, 60, 6);
    iFilledRectangle(p + 65, q, 6, 65);
    iFilledRectangle(p + 3, q - 3, 60, 6);
}
void print9(int p, int q){
    iSetColor(255,255,0);
    iFilledRectangle(p + 3, q + 140, 60, 6);
    iFilledRectangle(p + 65, q + 70, 6, 65);
    iFilledRectangle(p , q + 70, 6, 65);
    iFilledRectangle(p + 3, q + 65, 60, 6);
    iFilledRectangle(p + 65, q, 6, 65);
    iFilledRectangle(p + 3, q - 3, 60, 6);
}
void print3(int p, int q){
    iSetColor(255,255,0);
    iFilledRectangle(p + 3, q + 140, 60, 6);
    iFilledRectangle(p + 65, q + 70, 6, 65);
    iFilledRectangle(p + 3, q + 65, 60, 6);
    iFilledRectangle(p + 65, q, 6, 65);
    iFilledRectangle(p + 3, q - 3, 60, 6);
}
void print4(int p, int q){
    iSetColor(255,255,0);
    iFilledRectangle(p + 65, q + 70, 6, 65);
    iFilledRectangle(p , q + 70, 6, 65);
    iFilledRectangle(p + 3, q + 65, 60, 6);
    iFilledRectangle(p + 65, q, 6, 65);
}
void print2(int p, int q){
    iSetColor(255,255,0);
    iFilledRectangle(p + 3, q + 140, 60, 6);
    iFilledRectangle(p + 65, q + 70, 6, 65);
    iFilledRectangle(p + 3, q + 65, 60, 6);
    iFilledRectangle(p, q, 6, 65);
    iFilledRectangle(p + 3, q - 3, 60, 6);
}
void print7(int p, int q){
    iSetColor(255,255,0);
    iFilledRectangle(p + 3, q + 140, 60, 6);
    iFilledRectangle(p + 65, q + 70, 6, 65);
    iFilledRectangle(p + 65, q, 6, 65);
}
void print1(int p, int q){
    iSetColor(255,255,0);
    iFilledRectangle(p + 65, q + 70, 6, 65);
    iFilledRectangle(p + 65, q, 6, 65);
}
void iDraw(){
    iClear();
    day = dateofday(month,year);
    int j,p1=780 + day * 100, q1=580,len1=73, len2 = 53,length1=760, length2=20;
    for(j=1; j<=8; j++){
        iSetColor(0,0 , 255);
        iLine(length1,50,length1,720);
        length1 = length1 + 99;
        }
    for(j=0; j<=7; j++){
        iLine(760,length2,1500,length2);
        length2 = length2 + 99;
}
    iSetColor(200, 200, 0);
    iText(1390, 680, "FRI",GLUT_BITMAP_HELVETICA_18);
    iText(1290, 680, "THUR",GLUT_BITMAP_HELVETICA_18);
    iText(1190, 680, "WED",GLUT_BITMAP_HELVETICA_18);
    iText(1090, 680, "TUES",GLUT_BITMAP_HELVETICA_18);
    iText(990, 680, "MON",GLUT_BITMAP_HELVETICA_18);
    iText(890, 680, "SUN",GLUT_BITMAP_HELVETICA_18);
    iText(790, 680, "SAT",GLUT_BITMAP_HELVETICA_18);
    iSetColor(0, 255, 0);
    for(j=1; j<=31; j++){
        if(j < 9){c[0]='0';}
        if(j>9){ c[0]='1';}
        if(j>19){c[0]='2';}
        if(j>29){c[0]='3';c[1]='0'- 30 +j;}
        if(j<10){c[1]='0' + j;}
        if(j>9&&j<20){c[1]='0'- 10 +j;}
        if(j>19&&j< 30){c[1]='0'- 20+j;}
        iText(p1,q1,c,GLUT_BITMAP_HELVETICA_18);
        p1=p1+100;
        if(p1 > 1435){p1 = 780;q1 = q1 - 100;}
        lyr = leapyear(year);
        if( (month==2 && j>28 && lyr==1) ||( month==2 && j>27 && lyr==0) || ((month == 11 || month == 9 || month == 8 || month == 6 || month == 4 ) && j>29)){
         break;
        }
        }
  if( year==-5 || year==0 || month >12 || month<1 ||  (m1 == 1 && m2 == 0) || (m1 == 0 && m2 == 1))
    {
        iClear();
    }
    iSetColor(255,0,0);
    iText(55,1015,"A PROJECT BY A.T.M. Mizanur Rahman.",GLUT_BITMAP_HELVETICA_18);
    iRectangle(50,1010,480,30);
    iSetColor(0,0,255);
    iText(350,980,"Press the month box and give the input then, press enter,and click the year box, and give another input",GLUT_BITMAP_TIMES_ROMAN_24);
    iSetColor(255,255,0);
    iText(850,950,"You will find the calender!!",GLUT_BITMAP_HELVETICA_18);
    iSetColor(255,0,0);
    iText(780, 880, "MONTH :",GLUT_BITMAP_HELVETICA_18);
    iText(780, 820, "YEAR      :",GLUT_BITMAP_HELVETICA_18);
    iSetColor(20, 200, 0);
     if(m1 == 1){iSetColor(255, 0, 250);}
   drawTextBox(990, 875);
     if(m1 == 1){iText(990, 880, strno1,GLUT_BITMAP_HELVETICA_18);}
     if(m1 == 0 && m2 == 1){iText(990, 880, strno2, GLUT_BITMAP_HELVETICA_18);}
     if(m2 == 1){iSetColor(250, 20, 20);}
    drawTextBox(990, 815);
    if(m2 == 1){iText(990, 820, strno1, GLUT_BITMAP_HELVETICA_18);}
    if(m2 == 0 && m1 == 0 ){
        iText(990, 880, strno2, GLUT_BITMAP_HELVETICA_18);
        iText(990, 820, strno3, GLUT_BITMAP_HELVETICA_18);
    }
    if(m2 == 0 && m1 == 1 ){iText(990, 820, strno3, GLUT_BITMAP_HELVETICA_18);}
    if(realsec % 10 == 8){print8(540,500);}
    if(realsec % 10 == 0){print0(540,500);}
    if(realsec % 10 == 6){print6(540,500);}
    if(realsec % 10 == 5){print5(540,500);}
    if(realsec % 10 == 9){print9(540,500);}
    if(realsec % 10 == 3){print3(540,500);}
    if(realsec % 10 == 4){print4(540,500);}
    if(realsec % 10 == 2){print2(540,500);}
    if(realsec % 10 == 7){print7(540,500);}
    if(realsec % 10 == 1){print1(540,500);}
    if(realsec / 10 == 5){print5(440,500);}
    if(realsec / 10 == 4){print4(440,500);}
    if(realsec / 10 == 3){print3(440,500);}
    if(realsec / 10 == 2){print2(440,500);}
    if(realsec / 10 == 1){print1(440,500);}
    if(realsec / 10 == 0){print0(440,500);}
    if(realmin % 8 == 8){print8(340,500);}
    if(realmin % 10 == 0){print0(340,500);}
    if(realmin % 10 == 6){print6(340,500);}
    if(realmin % 10 == 5){print5(340,500);}
    if(realmin % 10 == 9){print9(340,500);}
    if(realmin % 10 == 3){print3(340,500);}
    if(realmin % 10 == 4){print4(340,500);}
    if(realmin % 10 == 2){print2(340,500);}
    if(realmin % 10 == 1){print1(340,500);}
    if(realmin % 10 == 7){print7(340,500);}
    if(realmin / 10 == 5){print5(240,500);}
    if(realmin / 10 == 4){print4(240,500);}
    if(realmin/ 10 == 3){print3(240,500);}
    if(realmin / 10 == 2){print2(240,500);}
    if(realmin / 10 == 1){print1(240,500);}
    if(realmin / 10 == 0){print0(240,500);}
    if(realhour % 10 == 8){print8(140,500);}
    if(realhour % 10 == 0){print0(140,500);}
    if(realhour % 10 == 6){print6(140,500);}
    if(realhour % 10 == 5){print5(140,500);}
    if(realhour % 10 == 9){print9(140,500);}
    if(realhour % 10 == 3){print3(140,500);}
    if(realhour % 10 == 4){print4(140,500);}
    if(realhour % 10 == 2){print2(140,500);}
    if(realhour % 10 == 7){print7(140,500);}
    if(realhour % 10 == 1){print1(140,500);}
    if(realhour / 10 == 1){print1(40,500);}
    if(realhour / 10 == 2){print2(40,500);}
    if(realhour / 10 == 0){print0(40,500);}
    iSetColor(255,0,0);
    iFilledRectangle(220, 525, 3,15);
    iFilledRectangle(220, 590, 3,15);
    iFilledRectangle(420, 525, 3,15);
    iFilledRectangle(420, 590, 3,15);
    iSetColor(0,250,0);
    iRectangle(10,450,700,250);
    iSetColor(0,0,250);
    iText(100,850,"Here Is my Digital Clock",GLUT_BITMAP_TIMES_ROMAN_24);
    iSetColor(250,0,250);
    iRectangle(80,830,300,50);
    iSetColor(250,0,0);
    iText(100,350,"My Clock Is Moving",GLUT_BITMAP_TIMES_ROMAN_24);
}
void iMouseMove(int mousex, int mousey)
{
    printf("x = %d, y= %d\n",mousex,mousey);

}
void iMouse(int button, int state, int mousex, int mousey)
{
    if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        if(m1 == 0 && m2 == 0 && mousex >= 890 && mousex <= 1140 && mousey >= 900 && mousey <= 930){m1 = 1;}
    if(m1==0 && m2==0 && mousex >= 890 && mousex <= 1140 && mousey >= 850 && mousey <= 880){m2 = 1;}
}
}
void iKeyboard(unsigned char k)
{
    int q;
    if(m1 == 1)
    {
     if(k == '\r')
        {
            m1 = 0;strcpy(strno2, strno1);month = atoi(strno2);printf("%s\n", strno2);
            for(q = 0; q < l; q++){
                strno1[q] = 0;
            }
            l = 0;}
        else{
            strno1[l] = k; l++;
           }
}
    if(m2 == 1){
        if(k == '\r')
        {
            m2 = 0;strcpy(strno3, strno1);year = atoi(strno3);printf("%s\n", strno3);
            for(q = 0; q < l; q++){
                strno1[q] = 0;
            }
            l = 0;}
        else{
            strno1[l] = k;
            l++;
        }
    }
   if(k == 'x'){
        exit(0);
    }
}
void iSpecialKeyboard(unsigned char k){
  if (k == GLUT_KEY_END){
        exit(0);}

}
int main(){
    l=m1=m2=0;
    iSetTimer(1000,time);
    iInitialize(1530, 1045, "My First Work on Igraphics");
    return 0;
}
