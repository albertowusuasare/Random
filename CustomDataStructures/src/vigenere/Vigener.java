package vigenere;

import java.io.PrintWriter;
import java.util.HashMap;
import java.util.Map;

/**
 * Encodes and Decodes text using the early system of Cipher
 * @author albertowusu-asare
 */
public class Vigener {
	Map<Character,Integer> alphabets = new HashMap<Character,Integer>();
	
	/**
	 * Encodes an input string 
	 * @param inputString
	 * @return plain text, the encoded string
	 */
	public static  String encode(String inputString,String key){
		//convert both string to character arrays
	     char [] input = inputString.toCharArray();
	     char [] keyArr = new char [inputString.length()];
	     int keyLength = key.length();
	     int inputStringLength = inputString.length();

	
	     //populate keyArr with multiple 'key'
	     for(int i = 0 ; i < inputStringLength;i++){
	    	 keyArr[i]= key.charAt(i%keyLength);
	     }
	     //compute encoded String
	    char []  outputString = new char[inputStringLength];
	    for(int i=0; i< inputStringLength; i++){
	    	int result = inputString.charAt(i)+keyArr[i];
	    	
	    	 outputString[i]= (char)  (result < 122 ? result : 97 + (result - 122 ) %26);
	     }//for

		return new String (outputString);
	}

	//use a random number generator to develop key
	public static void testASCII(PrintWriter pen){
		for (int i = 97 ; i< 123 ; i++){
			char ch = (char) i;
			pen.println(ch);
		}
	}//testASCII
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		PrintWriter pen = new PrintWriter(System.out,true);
		//testASCII(pen);
		String result =encode("tobeornottobethatisthequestion","run");
		int a = 't';
		int b = 'r';
		int sum = a+b;
		pen.println(sum);
		pen.println(result);

	}

}
