

class MyThread extends Thread {
    private String threadName;

    public MyThread(String threadName) {
        this.threadName = threadName;
    }

    public void run() {
        for (int i = 1; i <= 5; i++) {
            System.out.println(threadName + " is running: " + i);
            try {
                Thread.sleep(500); // sleep for half a second
            } catch (InterruptedException e) {
                System.out.println(threadName + " interrupted.");
            }
        }
        System.out.println(threadName + " has finished execution.");
    }
}

public class Lab37 {
    public static void main(String[] args) {
        MyThread t1 = new MyThread("Thread-1");
        MyThread t2 = new MyThread("Thread-2");
        MyThread t3 = new MyThread("Thread-3");

        // Start all threads
        t1.start();
        t2.start();
        t3.start();

        System.out.println("Main thread execution completed.");
    }
}
