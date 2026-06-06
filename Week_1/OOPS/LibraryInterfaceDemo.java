public class LibraryInterfaceDemo {
    public static void main(String[] args) {

        //test case 1 
        System.out.println("=== KidUsers Test ===");

        KidUsers kid_1 = new KidUsers();
        kid_1.setAge(10);
        kid_1.registerAccount();
        kid_1.setBookType("Kids");
        kid_1.requestBook();

        System.out.println();

        KidUsers kid_2 = new KidUsers();
        kid_2.setAge(18);
        kid_2.registerAccount();
        kid_2.setBookType("Fiction");
        kid_2.requestBook();

        System.out.println("\n=== AdultUsers Test ===");

        // test case 2
        AdultUser adult_1 = new AdultUser();
        adult_1.setAge(5);
        adult_1.registerAccount();
        adult_1.setBookType("Kids");
        adult_1.requestBook();

        System.out.println();

        AdultUser adult_2 = new AdultUser();
        adult_2.setAge(23);
        adult_2.registerAccount();
        adult_2.setBookType("Fiction");
        adult_2.requestBook();
    }
}