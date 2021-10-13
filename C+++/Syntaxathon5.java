import java.util.*;


public class Syntaxathon5 {
	public static void elseMain(String[] args) {
		/* Your class should be named Main.
 			* Read input as specified in the question.
 			* Print output as specified in the question.
		*/
		//Scanner sc = new Scanner(System.in);
        //int N = sc.nextInt();
		/*
		String[][] data = new String[3][4];
		System.out.println(data[2].equals(null)+" "+Arrays.toString(data[2]));		//false [null, null, null, null]
		System.out.println(data.equals(null)+" "+Arrays.toString(data));		//false [[Ljava.lang.String;@7291c18f, [Ljava.lang.String;@34a245ab, [Ljava.lang.String;@7cc355be]
		System.out.println((data[2][0]==null)+" "+Arrays.toString(data[2])); //true [null, null, null, null]
		*/
 		// Write your code here

	}
	static String[][] data = new String[26][100];
	
	public static void main(String[] args) {
		/* Your class should be named Main.
 			* Read input as specified in the question.
 			* Print output as specified in the question.
		*/
		Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        
        while(N-->0){
            String s = sc.next();
            String r = reverseOf(s);
            char mid = s.charAt(s.length()/2);
            if(isThere(r,(mid-97))){
                System.out.println(s.length()+" "+mid);
            }
        }
		// Write your code here

	}
	
    static String reverseOf(String s){
        String r = "";int L = s.length();
        for(int i = 0; i<L; i++){
            r =  s.charAt(i) + r;
        }
        return r;
    }
    static boolean isThere(String r, int mid){
        for(int i=0;i<data[mid].length;i++){
            if(data[mid][i]!=null){ 
                if(data[mid][i].equals(r)){
                    return true;
                }
            }else{
                data[mid][i] = r;
                return false;
            }
        }   
        return false;
    }
}
