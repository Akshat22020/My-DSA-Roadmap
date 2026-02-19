class Inheritance1 extends Baccha {
    public static void main(String args[]) {
        Baccha obj = new Baccha();
        int result = obj.add(4, 5);
        System.out.println("The result is: " + result);
    }
}

class Baccha {
    int add(int a, int b) {
        return a + b;
    }
}
