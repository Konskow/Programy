package myPkg;

public class MatrixDimensionsException extends Exception {
	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;
	public int [][] matrix;
	public MatrixDimensionsException() {
		// TODO Auto-generated constructor stub
		System.out.println("MatrixDimensionsExceptions");
	}
	public MatrixDimensionsException(int [][] tab){
		matrix = tab;
	}
}
