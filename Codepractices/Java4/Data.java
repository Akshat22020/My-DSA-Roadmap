//interthread communication

class Data1 extends Thread{
    void produce()throws InterruptedException{
        synchronized(this){
            System.out.println(getName()+" produced data");
            // Thread.sleep(1000);
            wait();
            System.out.println("Back to produce!");
        }

    }
    void consume()throws InterruptedException{
        synchronized(this){
            System.out.println(getName()+" consumed data");
            // Thread.sleep(1000);
            notify();
            System.out.println("Back to consume!");
        }
    }
}
public class Data extends Thread {
    public static void main(String args[])throws InterruptedException{
        Data1 d= new Data1();
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