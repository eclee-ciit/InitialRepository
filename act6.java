class act6 {
    public static void main(String[] args) {
        int cnt=0;  
        System.out.println("1. Right angle pattern");
        for(int a=0;a<5;a++){
            // System.out.println(a);
            cnt+=1;
            for(int b=0;b<=a;b++){
                System.out.print(cnt);
            }
            System.out.println();
        }
        System.out.println("===================");
        System.out.println("2. 5x5 star pattern");
        for(int a=0;a<5;a++){
            for(int b=0;b<5;b++){
                System.out.print("*");
            }
            System.out.println();
        }
        System.out.println("===================");
        System.out.println("3. Identity matrix pattern");
        for(int a=0;a<5;a++){
            for(int b=0;b<5;b++){
                if(a==b){
                    System.out.print("1");
                } else {
                    System.out.print("0");
                }
            }
            System.out.println();
        }
    }
}