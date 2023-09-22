public class ComputeInitials {
    public static void main(String[] args) {

        String[] Parts = args[0].split(" ");
        StringBuilder init = new StringBuilder();

        for (String part : Parts) {
            if (!part.isEmpty()) {
                init.append(Character.toUpperCase(part.charAt(0)));
            }
        }
        System.out.println("My initials are: " + init);
    }
}
