class AdvancedSortingMachine extends SortingMachine {
    protected Strategy strategy;

    public AdvancedSortingMachine(Strategy s) {
        super(s);
        strategy = s;
    }

    public void setStrategy(Strategy s) {
        strategy = s;
    }

    public void sort(int[] data) {
        System.out.println(strategy.getClass().getName());
        long startTime = System.currentTimeMillis();
        strategy.sort(data);
        long endTime = System.currentTimeMillis();
        System.out.println("time :" + (endTime - startTime));
    }
}