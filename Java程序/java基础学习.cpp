//if 
public class Main {
    public static void main(String[] args) {
        int n = 90;
        if (n > 90) {
            System.out.println("����");
        } else if (n >= 60) {
            System.out.println("������");
        } else {
            System.out.println("�ҿ���");
        }
    }
}

//switch 
option = ����ѡ��
	switch��option��{
	case 1:
		���ܽӿڣ����翪ʼ��
		break;
	case 2:
		 ���ܽӿڣ��������ã�
		 break;
	... 
	default://����������� ��ȱʧ������û�з���ѡ�����˼ 
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


// �ö�ά�����ʾ��ѧ���ɼ�:
        int[][] scores = {
                { 82, 90, 91 },
                { 68, 72, 64 },
                { 95, 91, 89 },
                { 67, 52, 60 },
                { 79, 81, 85 },
        };
        // TODO:
        // �ö�ά�����ʾ��ѧ���ɼ�:
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
        

//��һ��Java���д
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
	public Scores(int[] scores){//���캯�� ��������ͬ�� 
		this.scores = scores;
	}
//	public  printScores(int[] Scores){
//		System.out.println(Scores);
//	}
	public void printScores(){//Ҫ��void 
		System.out.println(Arrays.toString(scores));
	}
	
}

}













 

	


