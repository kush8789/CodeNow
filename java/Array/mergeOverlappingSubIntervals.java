import java.util.*;
class mergeOverlappingSubIntervals{

    public static List<List<Integer>> merge(List<List<Integer>> ls)
    {
        int n=ls.size();
        List<List<Integer>>ans=new ArrayList<>();
        Collections.sort(ls,new Comparator<List<Integer>>() {
            public int compare(List<Integer> a,List<Integer> b){
                return a.get(0)-b.get(0);
            }
        });
        for(int i=0;i<n;i++)
        {
            // int start=ls.get(i).get(0);
            // int end=ls.get(i).get(1);

            // if(!ans.isEmpty() && end<=ans.get(ans.size()-1).get(1))
            // {
            //     continue;
            // }

            // for(int j=i+1;j<n;j++)
            // {
            //     if(ls.get(j).get(0)<=end)
            //     {
            //         end=Math.max(end,ls.get(j).get(1));
            //     }
            //     else
            //     {
            //         break;
            //     }
            // }
            // ans.add(List.of(start,end));

            if(ans.isEmpty() || ls.get(i).get(0)>ans.get(ans.size()-1).get(1)){
                ans.add(ls.get(i));
            }
            else{
                ans.get(ans.size()-1).set(1,Math.max(ans.get(ans.size()-1).get(1),ls.get(i).get(1)));
            }
        }
        return ans;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        List<List<Integer>> ls=new ArrayList<>();
        for(int i=0;i<n;i++){
            List<Integer> l=new ArrayList<>();
            l.add(sc.nextInt());
            l.add(sc.nextInt());
            ls.add(l);
        }
        List<List<Integer>> ans=merge(ls);
        for(List<Integer> l:ans){
            System.out.println(l.get(0)+" "+l.get(1));
        }
        sc.close();
    }
}