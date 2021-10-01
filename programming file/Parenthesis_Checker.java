package DSA.week_5.stack;

import java.util.Scanner;
import java.util.Stack;

public class Parenthesis_Checker {
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        //Reading total number of testcases
        int t= sc.nextInt();

        while(t-- >0)
        {
            //reading the string
            String st = sc.next();

            //calling ispar method of Paranthesis class
            //and printing "balanced" if it returns true
            //else printing "not balanced"
            if(new Solution5().ispar(st) == true)
                System.out.println("balanced");
            else
                System.out.println("not balanced");

        }
    }
}
class Solution5
{
    //Function to check if brackets are balanced or not.
    static boolean ispar(String x)
    {
        // add your code here
        Stack<Character> s=new Stack<>();

        for (int i = 0; i < x.length(); i++) {
            if(x.charAt(i)=='(' || x.charAt(i)=='[' ||x.charAt(i)=='{' ){
                s.push(x.charAt(i));
                continue;
            }
            if(s.isEmpty())
                return false;
            char b;
            switch (x.charAt(i)){
                case ')':{
                   b=s.pop();
                    if(b=='{' || b=='[')
                        return false;
                    break;
                }
                case ']':{
                    b=s.pop();
                    if(b=='{' || b=='(')
                        return false;
                    break;
                }
                case '}':{
                     b=s.pop();
                    if(b=='[' || b=='(')
                        return false;
                    break;

                }
            }
        }

        return (s.isEmpty());
    }
}