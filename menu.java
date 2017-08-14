import javax.swing.*;
import java.awt.event.*;

public class menu extends JFrame implements ActionListener{
	
	JMenuBar mb;
	JMenu file,edit,help;
	JMenuItem cut,copy,paste,selectAll;//saveAs,save,open;
	JTextArea ta;
	
	public menu(){
		
		cut=new JMenuItem("Cut");
		copy=new JMenuItem("Copy");
		paste=new JMenuItem("Paste");
		selectAll = new JMenuItem("SelectAll");
		
	/*	saveAs=new JMenuItem("SaveAs");
		save=new JMenuItem("Save");
		open=new JMenuItem("Open");
		
		saveAs.addActionListener(this);
		save.addActionlistener(this);
		open.addActionListener(this);*/
		
		cut.addActionListener(this);
		copy.addActionListener(this);
		paste.addActionListener(this);
		selectAll.addActionListener(this);
		
		mb=new JMenuBar();
		mb.setBounds(5,5,400,40);
		
		file=new JMenu("FILE");
		edit=new JMenu("EDIT");
		help=new JMenu("HELP");
		
		edit.add(cut);
		edit.add(copy);
		edit.add(paste);
		edit.add(selectAll);
		
		mb.add(file);
		mb.add(edit);
		mb.add(help);
		
		ta=new JTextArea();
		ta.setBounds(5,30,460,460);
		
		add(mb);add(ta);
		
		setSize(500,500);
		setLayout(null);
		setVisible(true);
		}
		public void actionPerformed(ActionEvent e){
			//if(e.getSource()==saveAs){
				
			if(e.getSource()==cut)
				ta.cut();
			if(e.getSource()==copy)
				ta.copy();
			if(e.getSource()==paste)
				ta.paste();
			if(e.getSource()==selectAll)
				ta.selectAll();
			}				
		public static void main(String args[]){
			menu mn=new menu();
			mn.setDefaultCloseOperation(EXIT_ON_CLOSE);
			}
		}	
