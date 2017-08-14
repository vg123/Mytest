    import java.awt.*;  
    import javax.swing.*;  
      
    class MyFlowLayout extends JFrame{  
    
     Button buttons[];
    MyFlowLayout(){  
    	buttons =new Button [5];
          for(int i=1;i<5;i++){
          	buttons[i]=new Button("Button"+ i);
          	add(buttons[i]);
          	}
   /*     JButton b1=new JButton("1");  
        JButton b2=new JButton("2");  
        JButton b3=new JButton("3");  
        JButton b4=new JButton("4");  
        JButton b5=new JButton("5");  
                  
        f.add(b1);f.add(b2);f.add(b3);f.add(b4);f.add(b5);  */
         
        setLayout(new FlowLayout(FlowLayout.RIGHT));  
        //setting flow layout of right alignment  
      
        setSize(300,300);  
        setVisible(true);  
    }  
    public static void main(String[] args) {  
        MyFlowLayout m=new MyFlowLayout();  
       // m.setDefaultCloseOperation(EXIT_ON_CLOSE);
    }  
    }  
