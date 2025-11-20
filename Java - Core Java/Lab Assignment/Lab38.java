

class Counter {
    private int count = 0;

    public synchronized void increment() {
        count++;
    }

    public int getCount() {
        return count;
    }
}

class SyncThread extends Thread {
    Counter counter;

    public SyncThread(Counter counter) {
        this.counter = counter;
    }

    public void run() {
        for (int i = 0; i < 1000; i++) {
            counter.increment();
        }
    }
}

public class Lab38 {
    public static void main(String[] args) throws InterruptedException {
        Counter counter = new Counter();
        SyncThread t1 = new SyncThread(counter);
        SyncThread t2 = new SyncThread(counter);

        t1.start();
        t2.start();

        t1.join();
        t2.join();

        System.out.println("Final count: " + counter.getCount());
    }
}
