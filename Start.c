#include <stdio.h>
#include <stdlib.h> 

int menu();
int UBoot();
int LBoot();
int cid();
int hboot();
int FR();
int root();
int verify();
int charger();
int about();
int thanks();
int change();
 int choice;
int main(){
int dis ;
int ac ;
int dc ;
printf("   |===============================================================|\n ");
printf("   |                                                               |\n ");
printf("   |                 Welcome to HTC One X Modder!                  |\n ");
printf("   |                                                               |\n ");
printf("   |                            Disclaimer:                        |\n ");
printf("   | I'm not responsable for bricked devices, burned computers,    |\n ");
printf("   | loss of data. thermonuclear war or any type of disaster.      |\n ");
printf("   | With this disclaimer, you are the only responsable for any    |\n ");
printf("   | damage. You can watch into the batch script, and you're       |\n ");
printf("   | free to modify it at your own risk...If any problem or        |\n ");
printf("   | error appear during any process (example ac loss, hard disk   |\n ");
printf("   | failing or other) I'm happy to help you! Don't worry!         |\n ");
printf("   | If you want to support my work, press thanks button!          |\n ");
printf("   |                                                               |\n ");
printf("   |===============================================================|\n ");
printf(" If you accept them type 1 or type 0\n" );
scanf("%d",&dis);
menu();

}

int menu() {
do  {
   
    printf("   0)  Upgrade HBOOT!\n");
    printf("   1)  Unlock your bootloader\n");
    printf("   2)  Flash a recovery (REQUIRES BOOTLOADER UNLOCKED)\n");
    printf("   3)  Root your device (REQUIRES BOOTLOADER UNLOCKED)\n");
    printf("   4)  Flash a Custom ROM/Build a Custom ROM\n");
    printf("   5)  Verify fastboot/adb status connection/get all info\n");
    printf("   6)  CID/MID Reader\n");
    printf("   7)  Charge your phone (FASTBOOT MODE,when you can't flash anything)\n");
    printf("   8)  Lock your bootloader\n");
    printf("   9)  About this program\n");
    printf("   10) Say thanks for support my work! (will open your browser)\n");
    printf("   11) Open Changelog\n");
    printf("   12) byee\n");

    scanf("%d", &choice);
    switch (choice)
	{
	   case 0: 
               hboot();
		   break;
	   case 2: 
		   UBoot();
		   break;
           case 3: 
		           FR();
                   break;
           case 4: 
	  	   root();
	  	   break;
	   case 5: 
		   verify();
		   break;
	   case 6:
                   cid();
                    break;
	   case 7:
                   charger();
                    break;
           case 8:
                   LBoot();
                    break;
           case 9:
                   about();
                    break;
           case 10:
                   thanks();
                    break;
           case 11:
                   change();
                    break;
        case 12:
            printf("bye");
            
        default:
            printf("Wrong Input");
            break;
            
      } 
    }while (choice != "12");
}

int UBoot() 
{
    printf ("test");
}
int LBoot()
    {
    printf ("test");
}

int cid()
    {
    printf ("test");
}

int hboot()
{
    printf ("test");
}

int FR()
{
    printf ("test");
}

int root()
{
    printf ("test");
}

int verify()
{
    printf ("test");
}

int charger()
{
    printf ("test");
}

int about()
{
    printf ("test");
}

int thanks()
{
    printf ("test");
}

int change()
{
    
    
printf("   =================================================================\n");
printf("   |                                                               |\n");
printf("   |                 Welcome to HTC One X Modder!                  |\n");
printf("   |                                                               |\n");
printf("   |               Changelog! See the lasts changes:               |\n");
printf("   |                                                               |\n");
printf("   =================================================================\n");
printf("   There are all the changes:\n");
printf(".\n");
printf("   V1.0 Stable! (THIS VERSION):\n");
printf("   Planning to make a custom rom autobuilder! (ONLY FOR LINUX USERS)\n");
printf("   Removed 2 junk files unnecessary, added HTC Drivers. Size increased of 12MB.\n");
printf("   Code reworked, -6/-7Kb, now the size is 64KB :D\n");
printf("   Fixed an error with  in the FAQ section\n");
printf("   Added an HTC Driver Installer on boot\n");
printf("   Added a beta of Custom Rom Builder (NOT AVAIBLE, SORRY)\n");
printf("   There's a bug with the HTC Driver Installer. I will fix it soon.\n");
printf("   Added four more functions. You can see them below:\n");
printf("   -Get all info about your phone (5th choice)	\n");
printf("   -Lock/Relock bootloader (8th choice)\n");
printf("   -Kali NetHunter builder&installer! (thanks pleomaxell)(NOT AVAIBLE)\n");
}





















