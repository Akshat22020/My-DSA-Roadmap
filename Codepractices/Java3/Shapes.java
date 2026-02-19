import java.awt.*;
import java.awt.geom.*;
public class Shapes extends Frame{
    public Shapes(){
        setTitle("2D shapes");
        setSize(400,300);
        setVisible(true);
    }
    public void paint(Graphics g ){
        Graphics2D g2d = (Graphics2D) g;
        g2d.setColor(Color.RED);
        g2d.draw(new Line2D.Double(50, 50, 200, 200));
        g2d.setColor(Color.BLUE);
        g2d.draw(new Rectangle2D.Double(100, 100, 150, 100));
        g2d.setColor(Color.MAGENTA);
        g2d.fill(new Ellipse2D.Double(150, 150, 100, 50));//fill is used to fill the shape with color
        g2d.setColor(Color.MAGENTA);
        g2d.setColor(Color.YELLOW);
        g2d.draw(new Arc2D.Double(200, 200, 100, 50, 0, 90, Arc2D.OPEN));
        g2d.setColor(Color.YELLOW);
    }
    public static void main(String[] args){
        new Shapes();
    }
}
