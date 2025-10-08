public class Main {
    public static void main(String[] args) {
        // Istanziamento oggetto
        Territorio territorio = new Territorio("Alpi", 5000);

        // Applicazione di un metodo
        double densita = territorio.calcolaDensita(100000);  // Metodo calcolaDensita applicato all'oggetto territorio

        // Output
        System.out.println("Densità di popolazione: " + densita + " abitanti per km²");
    }
}
