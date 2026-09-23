class a33_enhanced_loop {
    public static void main(String string[]){
        int arr[] = new int[5];
        for(int i=0;i<arr.length;i++){
            arr[i] = (int)(Math.random() * 100);
        }

        for(int i : arr){
            System.out.print(i + " ");
        }
    }    
}
