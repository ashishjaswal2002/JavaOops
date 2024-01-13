public class TreeRepersentation {

  static class Node {

    int data;
    Node left;
    Node right;

    Node(int d) {
      this.data = d;
    }

  }

  public static void main(String[] args) {
    Node root = new Node(1);

    root.left = new Node(2); //          1

    root.right = new Node(3); //        2 3
    root.left.left = new Node(4); //   4 5 6 7
    root.left.right = new Node(5);
    root.right.left = new Node(6);
    root.right.right = new Node(7);

    traverse(root);

  }

  static void traverse(Node root){

    if(root!=null){
      
        //Postorder traversal

          traverse(root.left);
          traverse(root.right);
      System.out.print(root.data+" "); 


     //Preorder traversal
    //  System.out.print(root.data+" "); 
    //     traverse(root.left);
    //   traverse(root.right);


      // Inorder Traversal...
      // traverse(root.left);
      // System.out.print(root.data+" "); 
      // traverse(root.right);

    }
  }

}
