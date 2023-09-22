package pack3;

import pack1.Alpha;
import pack1.Gamma;
import pack2.Beta;

public class Delta {
    Alpha alpha = new Alpha();
    Beta beta = new Beta();
    Gamma gamma = new Gamma();

    public Delta() {
        alpha.show(gamma);
        beta.show(gamma);
        gamma.show(alpha);
    }

    public static void main(String[] args) {
        new Delta();
    }
}