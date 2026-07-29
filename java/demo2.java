public class demo2 {
    public static void main(String[] args) {
        System.out.println("from the begin of main.......");
        int values[] = { 1, 2,3,4,5,6,7,8,9,10};
        float values1[]={1,2,3,4,5,6,7,8,9,10};
        for(int count=0;count<values.length;count++)
        {
            System.out.println(values[count]);
        }
       
       /* for (int count = 0; count<values.length;count++) {
            System.out.println(values[count]);
        }*/
       for(int i:values){
        System.out.println(i);
       }

        System.out.println("from end of main......");
    }
}
