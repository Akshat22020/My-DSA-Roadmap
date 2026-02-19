class threadlife {
    public static void main(String[] args) {
        // Create a new thread
        Thread thread = new Thread(new Runnable() {
            @Override
            public void run() {
                System.out.println("Thread is running");
            }
        });
        
        // Start the thread
        thread.start();
        
        // Wait for the thread to finish
        try {
            thread.join();
        } catch (InterruptedException e) {
            e.printStackTrace();


}
    }        // Check if the thread is alive
        if (thread.isAlive()) {
            System.out.println("Thread is still alive");
        } else {
            System.out.println("Thread has finished execution");
        }
    }
}