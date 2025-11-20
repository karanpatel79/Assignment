package package2;

import package1.Lab30;

public class Lab32 extends Lab30 {
    public static void main(String[] args) {

        Lab32 obj = new Lab32();

        // System.out.println(obj.privateVar);    
        // System.out.println(obj.defaultVar);    
        System.out.println(obj.protectedVar);    
        System.out.println(obj.publicVar);       
    }
}