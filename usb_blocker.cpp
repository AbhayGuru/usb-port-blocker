#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

//void usbportblock();
//void usbportunblock();

void usbportblock()
{
	system("reg add HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Services\\USBSTOR /v Start /t REG_DWORD /d 4 /f");
	// NOTE:- "/v" for vertical tab & "/f" for new page beginning & "/d" for integer number variable. 
}

void usbportunblock()
{
	system("reg add HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Services\\USBSTOR /v Start /t REG_DWORD /d 3 /f");
	 
}

int main()
{
	cout << "Select an Option:" << endl;
	cout << "[1] Block USB Port." << endl;
	cout << "[2] Unblock USB Port." << endl;
	
	char choice=_getche();
	
	if(choice=='1')
	{
		usbportblock();
		cout << "[+] USB PORT BLOCKED SUCCESSFULL!";
	}
	else if(choice=='2')
	{
		usbportunblock();
		cout << "[+] USB PORT UNBLOCKED SUCCESSFULL!";
	}else{
		cout << "[-] Invalid Option!";
		main();
	}
	
	_getch();
	return 0;
}