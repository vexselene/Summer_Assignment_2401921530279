package live;

import music.Playable;
import music.string.Veena;
import music.wind.Saxophone;

public class Test {
    public static void main(String args[]) {
        Veena v = new Veena();
        v.play();
        Saxophone s = new Saxophone();
        s.play();
        
        System.out.println("\n--- Using Playable reference ---");
        Playable p_v = new Veena();
        p_v.play();
        Playable p_s = new Saxophone();
        p_s.play();
    }
}