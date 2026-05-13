class MyHashSet {

    private List<Integer> set;

    public MyHashSet() {
        set = new ArrayList<Integer>(Collections.nCopies((int)(1e6+1), -1));
    }
    
    public void add(int key) {
        set.set(key, 1);
    }
    
    public void remove(int key) {
        set.set(key, -1);
    }
    
    public boolean contains(int key) {
        int status = set.get(key);
        return status==1;
    }
}

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet obj = new MyHashSet();
 * obj.add(key);
 * obj.remove(key);
 * boolean param_3 = obj.contains(key);
 */