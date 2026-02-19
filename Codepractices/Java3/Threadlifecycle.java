class MyThread extends Thread {
    public void run() {
        System.out.println(Thread.currentThread().getName() + " is running");
        try {
            Thread.sleep(1000); // Sleep for 1 second (1000 ms)
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        System.out.println(Thread.currentThread().getName() + " has completed execution");
    }
}

public class Threadlifecycle extends MyThread{
    public static void main(String[] args) {
        MyThread t1 = new MyThread();
        MyThread t2 = new MyThread();
        t1.setName("FirstThread");
        t2.setName("SecondThread");

        System.out.println("Thread 1 state: " + t1.getState()); // NEW
        t1.start(); // Start thread 1

        System.out.println("Thread 1 state: " + t1.getState()); // RUNNABLE or TIMED_WAITING
        try {
            Thread.sleep(100); // Sleep for a short time to allow thread 1 to start
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        System.out.println("Thread 1 state: " + t1.getState()); // RUNNABLE or TIMED_WAITING
        try {
            t1.join(); // Wait for thread 1 to finish
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        System.out.println("Thread 1 state: " + t1.getState()); // TERMINATED
        System.out.println("Thread 2 state: " + t2.getState()); // NEW
    }
}
