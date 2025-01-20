package BS;
import java.util.*;

public class bookAllocationProblem {

    public static int countStudents(ArrayList<Integer> arr,int n,int pages){
        int student=1;
        int pagesStudent=0;
        for(int i=0;i<n;i++)
        {
            if(pagesStudent+arr.get(i)<=pages)
            {
                pagesStudent+=arr.get(i);
            }
            else{
                student++;
                pagesStudent=arr.get(i);
            }
        }
        return student;
    }

    public static int maxPages(ArrayList<Integer> arr,int n,int m){
        if(n<m){
            return -1;
        }
        int low=Collections.max(arr);
        int high=arr.stream().mapToInt(i->i).sum();

        for(int i=low;i<=high;i++)
        {
            int student=countStudents(arr,n,i);
            if(student==m){
                return i;
            }
        }
    return low;
    }
    public static void main(String[] args) {
        try(Scanner s=new Scanner(System.in)){
        int n=s.nextInt();
        int m=s.nextInt();
        ArrayList<Integer> arr=new ArrayList<>();
        for(int i=0;i<n;i++){
            arr.add(s.nextInt());
        }
        System.out.println(maxPages(arr,n,m));
        s.close();
    }
    }
}
