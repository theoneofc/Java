//if 
public class Main {
    public static void main(String[] args) {
        int n = 90;
        if (n > 90) {
            System.out.println("优秀");
        } else if (n >= 60) {
            System.out.println("及格了");
        } else {
            System.out.println("挂科了");
        }
    }
}

//switch 
option = 输入选择
	switch（option）{
	case 1:
		功能接口，例如开始；
		break;
	case 2:
		 功能接口，例如设置；
		 break;
	... 
	default://其他所有情况 ，缺失，就是没有符合选择的意思 
        System.out.println("Not selected");
        break;
	}
	
	
//import java.util.Arrays//error
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        int[] ns = { 1, 4, 9, 16, 25 };
        Arrays.sort(ns)
//        System.out.println(ns);
        System.out.println(Arrays.toString(ns));
    }
}


// 用二维数组表示的学生成绩:
        int[][] scores = {
                { 82, 90, 91 },
                { 68, 72, 64 },
                { 95, 91, 89 },
                { 67, 52, 60 },
                { 79, 81, 85 },
        };
        // TODO:
        // 用二维数组表示的学生成绩:
        int[][] scores = {
                { 82, 90, 91 },
                { 68, 72, 64 },
                { 95, 91, 89 },
                { 67, 52, 60 },
                { 79, 81, 85 },
        };
        // TODO:
        double average = 0;
        double TotalSco = 0;
        int count = 0;
		for (int[] arr : scores) {
		    for (int n : arr) {
//		        System.out.print(n);
//		        System.out.print(', ');
		        TotalSco += n;
				count++; 
		    }
//		    System.out.println();
		}
		average = TotalSco/count;		
        System.out.println(average);
        

//第一个Java类编写
import java.util.Arrays;

public class Javaclass{
	public static void main(string[]args){
		int[] scores = new int[]{"65,78,95,56,85"};
		Scores s = new Scores(int[] &scores);
		s.printScores();
		scores[3] = 25;
		s.printScores();
	}
//	public class Scores{
//		private scores
//	}
class Scores{
	private in[] Scores;
	public Scores(int[] scores){//构造函数 ，与类名同名 
		this.scores = scores;
	}
//	public  printScores(int[] Scores){
//		System.out.println(Scores);
//	}
	public void printScores(){//要加void 
		System.out.println(Arrays.toString(scores));
	}
	
}

}













 

	


