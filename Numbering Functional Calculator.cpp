#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;
void decimalToBinary(int result[],int rs, int result1[], int rs1, int i,int j,float number,
                     int num1,int num);
void binaryToDecimal(int num,int num1,int result[],int rs, int i, int j, float number);
void desimalToOctal(int result[] ,int rs,int result1[],int rs1,int i,int j, float number,
                    int num1, int num);
void octalToDecimal(int num,int num1,int result[],int rs, int i, int j, float number);
void decimaltohexadecimal(int result[] ,int rs,int result1[],int rs1,int i,int j, float number,
                    int num1, int num);
void hexadecimalToDecimal(int num,int num1,int result[],int rs, int i, int j, float number);
void binaryToOctal();
void binaryToHexadecimal();
void octalToBinary();
void hexadecimalToBinary();
void octalToHexadecimal();
void hexadecimalToOctal();
int main()
{
    cout << "Choose one of the number which is given below:" << endl;
    cout << "1. Decimal to binary." << endl ;
    cout << "2. Binary to Decimal," << endl ;
    cout << "3. Decimal to Octal,"  << endl;
    cout << "4. Octal to Decimal," << endl;
    cout << "5. Decimal to Hexadecimal," << endl;
    cout << "6. Hexadecimal to Decimal," << endl ;
    cout << "7. Binary to Octal," << endl ;
    cout << "8. Octal to binary," << endl ;
    cout << "9. Binary to Hexadecimal," << endl;
    cout << "10. Hexadecimal to Binary," << endl;
    cout << "11. Octal to Hexadecimal," << endl;
    cout << "12. Hexadecimal to Octal."<< endl ;
    float number;
    int nm,result[1000],result1[1000],i=0,j=0,num,num1,rs=1000,rs1=1000;
    cout << "Enter your option: ";
    cin >> nm;
// Decimal to binary
    if(nm == 1 )
    {
        cout << "Enter Your Decimal number: ";
    cin >> number;
        decimalToBinary(result,rs,result1,rs1,i=0,j=0,number,num1,num);
    }
// binary to decimal
    else if(nm==2)
    {
        cout << "Enter Your Binary number: ";
    cin >> number;
        binaryToDecimal(num,num1,result,rs,i=0,j=0,number); // problem
    }
// Decimal to octal
    else if(nm==3)
    {
        cout << "Enter Your Decimal number: ";
    cin >> number;
        desimalToOctal(result,rs,result1,rs1,i=0,j=0,number,num1,num);
    }
//Octal to decimal
    else if(nm==4)
    {
        cout << "Enter Your Octal number: ";
    cin >> number;
        octalToDecimal(num,num1,result,rs,i=0,j=0,number);
    }
// decimal to hexa
    else if(nm==5)
    {
        cout << "Enter Your Decimal number: ";
    cin >> number;
        decimaltohexadecimal(result,rs,result1,rs1,i=0,j=0,number,num1,num);
    }
// hexa to decimal
    else if(nm==6)
    {
        cout << "Enter Your Hexadecimal number: ";
    cin >> number;
        //hexadecimalToDecimal(num,num1,result,rs,i=0,j=0,number);
    }
    else if(nm==7)
    {
        binaryToOctal();
    }
    else if(nm==8)
    {
        octalToBinary();
    }
    else if(nm==9)
    {
        binaryToHexadecimal();
    }
    else if (nm==10)
    {
        hexadecimalToBinary();
    }
    else if(nm==11)
    {
        octalToHexadecimal();
    }
    else if (nm==12)
    {
        hexadecimalToOctal();
    }
}
void decimalToBinary(int result[],int rs, int result1[], int rs1, int i,int j,float number,
                     int num1,int num)
{
    num = number;
    num1=num;
    if(num != number)
    {
        while(num!=0)
        {
            result[i++] = num%2;
            num = num / 2;
        }
        number = number - num1;
        while(number!=0)
        {
            float a = number * 2;
            int b=a;
            result1[j++] = b;
            number = a - b;
        }
        for (int k=i-1; k>=0; k--)
        {
            cout << result[k];
        }
        cout << ".";
        for(int l=0; l<=j-1; l++)
        {
            cout << result1[l];
        }
    }
    else
    {
        while(num!=0)
        {
            result[i++] = num%2;
            num = num / 2;
        }
        for (int k=i-1; k>=0; k--)
        {
            cout <<  result[k];
        }
    }
}
void binaryToDecimal(int num,int num1,int result[],int rs, int i, int j, float number)
{
    num = number;
    num1= number;
    if(number!=num)
    {
        int sum =0;
        while(num!=0)
        {
            sum += num%10 * pow(2,i);
            num = num/10;
            i++;
        }
        i=0;
        float nam;
        nam = number-num1;
        while(nam!=0)
        {
            num1 = nam*10;
            result[i++]=num1;
            nam = nam *10 ;
            nam = nam - num1;
        }
        float sum1=0, j=1;
        for(int k=0;k<=i-1;k++)
        {
            int m = j* (-1);
            sum1 += result[k] * pow(2,m);
            j++;
        }
        cout << sum << "." << sum1;
    }
    else
    {
        int sum =0;
        while(num!=0)
        {
            sum = sum + num%10 * pow(2,i);
            num = num/10;
            i++;
        }
        cout << sum;
    }
}

void desimalToOctal(int result[] ,int rs,int result1[],int rs1,int i,int j, float number,
                    int num1, int num)
{
    num = number;
    num1=num;
    if(num != number)
    {
        while(num!=0)
        {
            result[i++] = num%8;
            num = num / 8;
        }
        number = number - num1;
        while(number!=0)
        {
            float a = number * 8;
            int b=a;
            result1[j++] = b;
            number = a - b;
        }
        for (int k=i-1; k>=0; k--)
        {
            cout << result[k];
        }
        cout << ".";
        for(int l=0; l<=j-1; l++)
        {
            cout << result1[l];
        }
    }
    else
    {
        while(num!=0)
        {
            result[i++] = num%8;
            num = num / 8;
        }
        for (int k=i-1; k>=0; k--)
        {
            cout << result[k];
        }
    }
}
void octalToDecimal(int num,int num1,int result[],int rs, int i, int j, float number)
{
    num = number;
    num1= number;
    if(number!=num)
    {
        int sum =0;
        while(num!=0)
        {
            sum += num%10 * pow(8,i);
            num = num/10;
            i++;
        }
        i=0;
        float nam;
        nam = number-num1;
        while(nam!=0)
        {
            num1 = nam*10;
            result[i++]=num1;
            nam = nam *10 ;
            nam = nam - num1;
        }
        float sum1=0, j=1;
        for(int k=0;k<=i-1;k++)
        {
            int m = j* (-1);
            sum1 += result[k] * pow(8,m);
            j++;
        }
        cout << sum << "." << sum1;
    }
    else
    {
        int sum =0;
        while(num!=0)
        {
            sum = sum + num%10 * pow(8,i);
            num = num/10;
            i++;
        }
        cout << sum;
    }
}
void decimaltohexadecimal(int result[] ,int rs,int result1[],int rs1,int i,int j, float number,
                    int num1, int num)
{
    num = number;
    num1=num;
    if(num != number)
    {
        while(num!=0)
        {
            result[i++] = num%16;
            num = num / 16;
        }
        number = number - num1;
        while(number!=0)
        {
            float a = number * 16;
            int b=a;
            result1[j++] = b;
            number = a - b;
        }
        for (int k=i-1; k>=0; k--)
        {
            if(result[k]==10)
                cout << "A";
            else if(result[k]==11)
                cout << "B";
            else if(result[k]==12)
                cout << "C";
            else if(result[k]==13)
                cout << "D";
            else if(result[k]==14)
                cout << "E";
            else if(result[k]==15)
                cout << "F";
            else
                cout << result[k];
        }
        cout << ".";
        for(int l=0; l<=j-1; l++)
        {

            if(result[l]==10)
                cout << "A";
            else if(result[l]==11)
                cout << "B";
            else if(result[l]==12)
                cout << "C";
            else if(result[l]==13)
                cout << "D";
            else if(result[l]==14)
                cout << "E";
            else if(result[l]==15)
                cout << "F";
            else
                cout << result[l];
        }
    }
    else
    {
        while(num!=0)
        {
            result[i++] = num%16;
            num = num / 16;
        }
        for (int k=i-1; k>=0; k--)
        {

            if(result[k]==10)
                cout << "A";
            else if(result[k]==11)
                cout << "B";
            else if(result[k]==12)
                cout << "C";
            else if(result[k]==13)
                cout << "D";
            else if(result[k]==14)
                cout << "E";
            else if(result[k]==15)
                cout << "F";
            else
                cout << result[k];
        }
    }
}
void hexadecimalToDecimal(int num,int num1,int result[],int rs, int i, int j, float number)
{
    num = number;
    num1= number;
    if(number!=num)
    {
        int sum =0;
        while(num!=0)
        {

            sum += num%10 * pow(8,i);
            num = num/10;
            i++;
        }
        i=0;
        float nam;
        nam = number-num1;
        while(nam!=0)
        {
            num1 = nam*10;
            result[i++]=num1;
            nam = nam *10 ;
            nam = nam - num1;
        }
        float sum1=0, j=1;
        for(int k=0;k<=i-1;k++)
        {
            int m = j* (-1);
            sum1 += result[k] * pow(8,m);
            j++;
        }
        cout << sum << "." << sum1;
    }
    else
    {
        int sum =0;
        while(num!=0)
        {
            sum = sum + num%10 * pow(8,i);
            num = num/10;
            i++;
        }
        cout << sum;
    }
}
void binaryToOctal()
{
    string n;
    cout << "Enter your Binary number: ";
    cin >> n;
    int b=0,sum[1000];
    for(int i=0; i< 1000; i++)
        sum[i]=0;
    for(int i=0;i<= n.size();i++)
    {
        if(n[i]=='.')
        {
            b=i;
        }
    }
    int a=0;
    if(b==0)
    {
        for(int i=0;i<=n.size()-1;i+=3)
        {
            b=i;
            int c=1;
            for(int b=i;b<=i+3;b++)
            {
                if(n[b]=='1')
                {
                    sum[a]= c + sum[a];
                }
                else
                {
                    sum[a]= sum[a]+0;
                }
                c=c*2;
            }
            a++;
        }
    }
    for(int i=0; i<=a-1;i++)
    {
        cout << sum[i];
    }
}
void binaryToHexadecimal()
{
    string n;
    cout << "Enter your Binary number: ";
    cin >> n;
    int b=0,sum[1000];
    for(int i=0; i< 1000; i++)
        sum[i]=0;
    for(int i=0;i<= n.size();i++)
    {
        if(n[i]=='.')
        {
            b=i;
        }
    }
    int a=0;
    if(b==0)
    {
        for(int i=0;i<=n.size()-1;i+=4)
        {
            b=i;
            int c=1;
            for(int b=i;b<=i+4;b++)
            {
                if(n[b]=='1')
                {
                    sum[a]= c + sum[a];
                }
                else
                {
                    sum[a]= sum[a]+0;
                }
                c=c*2;
            }
            a++;
        }
    }
    for(int i=0; i<=a-1;i++)
    {
            if(sum[i]==10)
                cout << "A";
            else if(sum[i]==11)
                cout << "B";
            else if(sum[i]==12)
                cout << "C";
            else if(sum[i]==13)
                cout << "D";
            else if(sum[i]==14)
                cout << "E";
            else if(sum[i]==15)
                cout << "F";
            else
                cout << sum[i];
    }
}
void octalToBinary()
{
    cout << "Enter your Octal number: ";
    string a;
    cin >> a;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]=='0')
            cout << "000";
        else if(a[i]=='1')
            cout << "001";
        else if(a[i]=='2')
            cout << "010";
        else if(a[i]=='3')
            cout << "011";
        else if(a[i]=='4')
            cout << "100";
        else if(a[i]=='5')
            cout << "101";
        else if(a[i]=='6')
            cout << "110";
        else if(a[i]=='7')
            cout << "111";
        else if(a[i]=='.')
            cout << ".";

    }
}
void hexadecimalToBinary()
{
    cout << "Enter your Hexadecimal number: ";
    string a;
    cin >> a;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]=='0')
            cout << "0000";
        else if(a[i]=='1')
            cout << "001";
        else if(a[i]=='2')
            cout << "0010";
        else if(a[i]=='3')
            cout << "0011";
        else if(a[i]=='4')
            cout << "0100";
        else if(a[i]=='5')
            cout << "0101";
        else if(a[i]=='6')
            cout << "0110";
        else if(a[i]=='7')
            cout << "0111";
        else if(a[i]=='8')
            cout << "1000";
        else if(a[i]=='9')
            cout << "1001";
        else if(a[i]=='A')
            cout << "1010";
        else if(a[i]=='B')
            cout << "1011";
        else if(a[i]=='C')
            cout << "1100";
        else if(a[i]=='D')
            cout << "1101";
        else if(a[i]=='E')
            cout << "1110";
        else if(a[i]=='F')
            cout << "1111";
        else if(a[i]=='.')
            cout << ".";
    }
}
void octalToHexadecimal()
{
    int a[20], b[20], rev[20];
    int h, i, j, k, l, x, fra, flag, rem, num1, num3;
    float rem1, num2, num4, dno;
    char s[20];
    x = fra = flag = rem = 0;
    rem1 = 0.0;
    cout<<"Enter tour Octal number: ";
    cin>>s;
    for(i=0,j=0,k=0; i<strlen(s); i++)
    {
            if(s[i]=='.')
            {
                    flag=1;
            }
            else if(flag==0)
            {
                    a[j++]=s[i]-48;
            }
            else if(flag==1)
            {
                    b[k++]=s[i]-48;
            }
    }
    x=j;
    fra=k;
    for(j=0,i=x-1; j<x; j++,i--)
    {
            rem = rem +(a[j] * pow(8,i));
    }
    for(k=0,i=1; k<fra; k++,i++)
    {
            rem1 = rem1 +(b[k] / pow(8,i));
    }
    rem1 = rem + rem1;
    dno = rem1;
    num1 = (int)dno;
    num2 = dno - num1;

    i=0;
    while(num1!=0)
    {
            rem = num1 % 16;
            rev[i] = rem;
            num1 = num1 /16;
            i++;
    }
    j=0;
    while(num2!=0.0)
    {
            num2 = num2 * 16;
            num3 = (int)num2;
            num4 = num2 - num3;
            num2 = num4;
            a[j] = num3;
            j++;
            if(j==4)
            {
                    break;
            }
    }
    l=i;
    for(i=l-1; i>=0; i--)
    {
            if(rev[i]==10)
            {
                    cout<<"A";
            }
            else if(rev[i]==11)
            {
                    cout<<"B";
            }
            else if(rev[i]==12)
            {
                    cout<<"C";
            }
            else if(rev[i]==13)
            {
                    cout<<"D";
            }
            else if(rev[i]==14)
            {
                    cout<<"E";
            }
            else if(rev[i]==15)
            {
                    cout<<"F";
            }
            else
            {
                    cout<<rev[i];
            }
    }
    h=j;
    cout<<".";
    for(k=0; k<h; k++)
    {
            if(a[k]==10)
            {
                    cout<<"A";
            }
            else if(a[k]==11)
            {
                    cout<<"B";
            }
            else if(a[k]==12)
            {
                    cout<<"C";
            }
            else if(a[k]==13)
            {
                    cout<<"D";
            }
            else if(a[k]==14)
            {
                    cout<<"E";
            }
            else if(a[k]==15)
            {
                    cout<<"F";
            }
            else
            {
                    cout<<a[k];
            }
        }
}
void hexadecimalToOctal()
{
    string hx;
    cout << "Enter your Hexadecimal number: ";
    cin >> hx;
        int len,dec=0, oct=0;
        len = hx.size();
        for(int i=0; i<= hx.size(); i++)
        {
                if(hx[i]>='0' && hx[i]<='9')
                {
                        dec= dec + (hx[i]-'0')*pow(16,len-1);
                }
                if(hx[i]>='A' && hx[i]<='F')
                {
                        dec = dec + (hx[i]-55)*pow(16,len-1);
                }
                if(hx[i]>='a' && hx[i]<='f')
                {
                        dec = dec + (hx[i]-87)*pow(16,len-1);
                }
                len--;
        }
        int i=1;
        while(dec!=0)
        {
                oct = oct + (dec%8)*i;
                dec = dec/8;
                i = i*10;
        }
        cout << oct;
}
