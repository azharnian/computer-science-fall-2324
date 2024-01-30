public class Soal4{

    public int abs(int n){
        if (n < 0)
            return -n;
        return n;
    }

    public int abs(String n){
        int res = Integer.parseInt(n);
        if (res < 0)
            return -res;
        return res;
    }

    public static void main(String args[]){



    }

}