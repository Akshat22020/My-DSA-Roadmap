import java.awt.*;
public class line extends Frame{
    public line(){
        setTitle("Line Example");
        setSize(400, 400);
        setVisible(true);
    }
    public void paint(Graphics g){
        g.setColor(Color.RED);
        g.drawLine(50, 50, 200, 200);
        g.setColor(Color.BLUE);
    }
    public static void main(String[] args){
        new line();
    }
}