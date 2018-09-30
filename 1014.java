import java.io.IOException;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.IllegalFormatPrecisionException;


public class Main {

    public static void main (String[] args) throws IOException {

       BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));

        int xKm;
        float yL, kmPorL;

        xKm = Integer.parseInt(bf.readLine());
        yL  = Float.parseFloat(bf.readLine());

        kmPorL = (xKm/yL);

        System.out.printf("%.3f km/l\n", kmPorL);
    }

}

