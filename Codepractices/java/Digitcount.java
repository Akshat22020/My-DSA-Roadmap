/*Find number of digits of"n" that divide n evenly*/

public class Digitcount{
    public static  void main(String[]args){
int n=290;
// int count=0;
for(int i=1;i<=n;i++){
    if(n%i==0){
        System.out.println("Kat gaya bc"+ i);
        
    }
    else{
        System.out.println("Naah Bro!");
    }
}
    }
}