public class BinarySearch {
    public static boolean recursiveBinarySearch(int[] array, int x, int left, int right){
        if (left > right){
            return false;
        }
        
        int mid = (left + (right - left)) / 2;
        if (array[mid] == x){
            return true;
        }
        else if (array[mid] > x){
            recursiveBinarySearch(array, x, mid + 1, right);
        }
        else{
            recursiveBinarySearch(array, x, left, mid - 1);
        }
    }
    public static boolean iterativeBinarySearch(int[] array, int x){
        int left = 0;
        int right = array.length - 1;
        
        while(left <= right){
            
            int mid = (left + (right - left)) / 2;
            if (array[mid] == x){
                return true;
            }
            else if (array[mid] > x){
                left = mid + 1;    
            }
            else{
                right = mid -1;    
            }
    }
        return false;
    }



    public static void main(String[] args) throws Exception {
        System.out.println("Hello, World!");
    }
}
