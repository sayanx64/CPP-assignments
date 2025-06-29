import java.util.Scanner; 
public class multiarr {

    public static void main(String a[]){
        int rows,coloumns;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the no of rows:");
        rows=sc.nextInt();
        System.out.println("Enter the no of coloumns:");
        coloumns=sc.nextInt();

        int[][] arr1=new int[rows][coloumns];
        System.out.println("Enter the elements: ");
        for( int i=0 ; i<rows ; i++){
            for( int j=0;j<coloumns;j++){
                System.out.print(" elements at: ["  +i+  "]["  +j+  "]: ");
                arr1[i][j]=sc.nextInt();
            }
        }
        System.out.println("The elements are:     ");
        for(int i=0;i<rows;i++){
            for ( int j=0;j<coloumns;j++){
                System.out.print(arr1[i][j]+"     ");
                }
            System.out.println();
            }
        sc.close();
         }
    
    }
}