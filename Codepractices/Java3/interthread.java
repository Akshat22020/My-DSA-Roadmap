class MyData{
    void produce() throws Exception{
        synchronized(this){
            System.out.println("Produce method");
            wait();
            System.out.println("Back to produce");;
        }
    }
    void consume() throws Exception{
        synchronized(this){
            System.out.println("consume method");
            notify();
        }
    }
}
public class interthread {
    public static void main(String[] args) throws InterruptedException{
      MyData d=new MyData();
      Thread t1=new Thread(
         new Runnable(){
            public void run(){
                try{
                    d.produce();
                }
                catch(Exception e){
                    e.printStackTrace();
                }
            }
        }
         );
         Thread t2=new Thread(
            new Runnable(){
               public void run(){
                   try{
                    Thread.sleep(1000);
                       d.consume();
                   }
                   catch(Exception e){
                       e.printStackTrace();
                   }
               }
           }
            );
        t1.start();
        t2.start();
}
}
