import java.awt.event.*;
import javax.swing.*;
public class MySwingUIApp extends JFrame implements ActionListener{
    //all required ui components are declared here
    private JLabel nameLabel;
    private JTextField nameFiled;
    private JButton loginBtn;
    private JButton openBtn;
    private JButton resetBtn;
    
    public MySwingUIApp(){
        setTitle("My Swing ")
        nameLabel =new JLabel("name:");
        nameFiled =new JTextField();
        loginBtn =new JButton();
        resetBtn =new JButton();
    
        add(nameLabel);
        add(nameFiled);
        add(loginBtn);
        add(resetBtn);
        add(openBtn);

        loginBtn.addActionListener(this);
        resetBtn.addActionListener(this);
        this.setVisible(true);
        openBtn.addListener(this);



    }
    public  void actionPerformed(ActionEvent e){

        object obj=e.getSource();
        if(obj==loginBtn){
            System.out.println(nameFiled.getText());
        }else if(obj==resetBtn){
            nameFiled.setText("");
        }else if(obj==opeBtn){
            openFile();
        }

    }
    public static void main(String[] args){
            MySwingUIApp myapp=new MySwingUIApp();
            //myapp.setVisible(true);
     }
    
}