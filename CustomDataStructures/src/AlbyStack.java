/**
 * Implements a custom Stack
 * @author Albert Owusu-Asare
 */
public class AlbyStack<T> {
	
Node frontNode;	

/**
 * Constructs an AlbyStack 
 */
public AlbyStack(){
	this.frontNode = null;
}//AlbyStack()
/**
 * Describes a representation of a Node to be used in the stack
 */
 class Node{
	
	 T val;
	 Node next;
	 
	 /** 
	  * Constructs a new Node
	  */
	 Node(T data , Node next){
		 this.val = data;
		 this.next =next;
	 }//Node()
 }//class Node
 
 /**
  * Adds val to the stack
  * @param val value to be added to the stack
  */
 public void push(T val){
	 this.frontNode = new Node(val,this.frontNode);
 }//push()
 
 public  T pop(Node frontNode){
	T temp = this.frontNode.val;
	this.frontNode = this.frontNode.next;
	 return temp;
 }//pop()
 
public T peek(Node frontNode){
	return this.frontNode.val;
}//peek(Node)

public boolean search(T val){
	//point to the front node
	Node temp = this.frontNode;
	//iterate through to the end of the list 
	
	while(temp.next != null){
		if (temp.val == val){
			return true;
		}//if found the value
	}
	return false;
}//search( T)

public boolean empty(){
	return this.frontNode == null;
}//
 
}//class AlbyStack
