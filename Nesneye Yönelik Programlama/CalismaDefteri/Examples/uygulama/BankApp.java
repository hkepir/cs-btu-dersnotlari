package uygulama;

import java.util.Scanner;

public class BankApp {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		Customer customer = new Customer("Ali Veli");
		Account acc1 = new Account(1001, 1500);
		customer.addAccount(acc1);
		
		Account acc2 = new Account(1002, 1500);
		customer.addAccount(acc2);
		
		/*
		customer.addAccount(new Account(1001,1500));
		customer.addAccount(new Account(1002, 5000));
		*/
		
		while (true) {
			System.out.println("\n1. Hesapları Görüntüle");
            System.out.println("2. Para Yatır");
            System.out.println("3. Para Çek");
            System.out.println("4. Çıkış");
            System.out.print("Seçiminiz: ");
            int secim = scanner.nextInt();

            if (secim == 4) {
                System.out.println("Çıkış yapılıyor...");
                break;
            }

            System.out.print("Hesap numarasını girin: ");
            int hesapNo = scanner.nextInt();
            Account account = customer.getAccountByNumber(hesapNo);//Kulanicinin yazdigi hesap numarasina sahip bir account nesnesi varsa onu getirir

            if (account == null) {
                System.out.println("Hesap bulunamadı.");
                continue;
            }

            switch (secim) {
                case 1:
                    customer.displayAccounts();
                    break;
                case 2:
                    System.out.print("Yatırılacak miktar: ");
                    double yatir = scanner.nextDouble();
                    account.deposit(yatir);
                    break;
                case 3:
                    System.out.print("Çekilecek miktar: ");
                    double cek = scanner.nextDouble();
                    if (!account.withdraw(cek)) {
                        System.out.println("Yetersiz bakiye.");
                    }
                    break;
                default:
                    System.out.println("Geçersiz seçim.");
            }
        }

        scanner.close();
		}

	}


