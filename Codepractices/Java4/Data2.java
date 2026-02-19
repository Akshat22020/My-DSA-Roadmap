class Data extends Thread{
    void produce() throws InterruptedException{
        synchronized(this){
            System.out.println("Producing data");
            wait();
            System.out.println("Back to produce!");
        }
    }
    void consume() throws InterruptedException{
        synchronized(this){
            System.out.println("Consuming data");
            notify();
        }
    }
}
public class Data2 extends Data {
    public static void main(String args[]){
        Data d =new Data();
        Thread t1=new Thread(
            new Runnable(){
                public void run(){
                    try{
                        d.produce();
                    }catch(InterruptedException e){
                        System.out.println(e);
                    }
                }
            }
 );
        Thread t2=new Thread(
            new Runnable(){
                public void run(){
                    try{
                        d.consume();
                    }catch(InterruptedException e){
                        System.out.println(e);
                    }
                }
            }
        );
        t1.start(); 
        t2.start();
        
    }
}
