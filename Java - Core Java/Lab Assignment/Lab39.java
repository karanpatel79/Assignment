

class SharedResource {
    private boolean available = false;

    public synchronized void produce() {
        while (available) {
            try {
                wait();
            } catch (InterruptedException e) {}
        }
        System.out.println("Produced an item");
        available = true;
        notify();
    }

    public synchronized void consume() {
        while (!available) {
            try {
                wait();
            } catch (InterruptedException e) {}
        }
        System.out.println("Consumed an item");
        available = false;
        notify();
    }
}

class Producer extends Thread {
    SharedResource resource;
    public Producer(SharedResource resource) {
        this.resource = resource;
    }
    public void run() {
        for (int i = 0; i < 5; i++) resource.produce();
    }
}

class Consumer extends Thread {
    SharedResource resource;
    public Consumer(SharedResource resource) {
        this.resource = resource;
    }
    public void run() {
        for (int i = 0; i < 5; i++) resource.consume();
    }
}

public class Lab39 {
    public static void main(String[] args) {
        SharedResource resource = new SharedResource();
        new Producer(resource).start();
        new Consumer(resource).start();
    }
}
