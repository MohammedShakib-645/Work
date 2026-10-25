import java.awt.*;
import java.awt.event.*;
public class UIApp {
    public static void main(String[] args) {
        Frame myFrame=new Frame();
        myFrame.setLayout(new FlowLayout());
        Label input= new Label("Input");
        TextField textInput=new TextField("<Give Input here.......");
        Button login=new Button("Login");
        // login.addActionListener(new MyActionListener());
        login.addMouseListener(new MyMouseListener());
        myFrame.add(input);
        myFrame.add(textInput);
        myFrame.add(login);
        myFrame.setTitle("My First UI App");
        myFrame.setSize(600,600);
        myFrame.setVisible(true);
        System.out.println(myFrame);
    }
}

class MyActionListener implements ActionListener{
        public void actionPerformed(ActionEvent event){
        System.out.println("From inside the listener attached to the login button.......");
        }
}

class MyMouseListener extends MouseAdapter{
    public void mouseClicked(MouseEvent me){
        System.out.println("Mouse is Clicked......");
    }
}