public class prime {
    public static void main(String args[]) {
        int n;
        //int p=1;
       // double sum1=0;
        for(int k=0;k<args.length;k++) {
            n = Integer.parseInt(args[k]);
             int c=0;

        int i,m=0;
        m=n/2;
        if(n<2){
            System.out.println(n+" is not prime number");
        }else{
            for(i=2;i<=m;i++){
                if(n%i==0){
                    System.out.println(n+" is not prime number");
                    c=1;
                    break;
                }
            }
            if(c==0)
            {
                System.out.println(n+" is prime number");
            }
        }
        }
    }
}
