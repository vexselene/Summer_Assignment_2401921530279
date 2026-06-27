import com.assignment.demo.ToTestInt;
import com.assignment.outer.Outer;
import com.assignment.geometry.Box3D;

public class Main {
    public static void main(String[] args) {
        System.out.println("========== TASK 1: Interface test ==========");
        ToTestInt.main(args);
        
        System.out.println("\n========== TASK 2: Outer + Inner Class ==========");
        Outer.main(args);
        
        System.out.println("\n========== TASK 3: Box and Box3D ==========");
        Box3D box3d = new Box3D(5, 3, 4);
        box3d.display();
    }
}