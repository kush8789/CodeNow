package String;
import java.util.*;
public class ReverseWordsString {

    public static String reverseWords(String s) {
        // String ans = "";
        // String word = "";
        // for (int i = 0; i < s.length(); i++) {
        //     if (s.charAt(i) == ' ') {
        //         ans = word + " " + ans;
        //         word = "";
        //     } else {
        //         word = word+s.charAt(i);
        //     }
        // }
        // return word + " " + ans;

        Stack<String> st = new Stack<String>();
        String str="";
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)==' '){
                if(!str.isEmpty()){
                    st.push(str);
                    str="";
                }
            }
            else{
                str+=s.charAt(i);
            }
        }
        if(!str.isEmpty()){
            st.push(str);
        }
        String ans="";
        while(st.size()!=1){
            ans+=st.pop()+" ";
        }
        return ans+st.pop();
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        String ans = reverseWords(s);
        System.out.println(ans);
        sc.close();
    }
}
