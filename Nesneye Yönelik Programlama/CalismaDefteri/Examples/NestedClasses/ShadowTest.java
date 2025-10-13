package NestedClasses;

public class ShadowTest {

	public int x = 0;

	class FirstLevel {

		public int x = 1;

		void methodInFirstLevel(int x) {
			System.out.println("metoddaki (parametre) degisken x = " + x);// parametre olarak gelen x
			System.out.println("metodun bulundugu classtaki class variable x =" + this.x);
			System.out.println("kapsayan classtaki x e eririsim x =" + ShadowTest.this.x);
		}

	}

	public static void main(String... args) {
		ShadowTest sTest = new ShadowTest();

		ShadowTest.FirstLevel fLevel = sTest.new FirstLevel();
		fLevel.methodInFirstLevel(23);

	}

}
