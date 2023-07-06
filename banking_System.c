#include<stdio.h>
#include<math.h>
#include<unistd.h>


int main(){
    char name[100];
    char address[100];
    int pincode;

    int sizeofname = 10;
    int sizeofaddress = 10;
    int sizeofdob = 10;
    int sizephonenumber = 10;
    int sizenicnumber = 10;
    int sizesourceofincome = 10;    
    int sizeofpincodes = 10;



    char partners[10][100];
    char addressPeople[10][100];
    char dateofBirthPeople[10][100];
    int phonenumberPeople[10];
    int nICNumberPeople[10];
    char sourceOfIncomePeople[10][100];
    int pincodesPeople[10];

    char dateOfBirth[100];
    int phoneNumber;
    int nICNumber;
    char sourceOfIncome[100];

    

    int savingsper = 5000;
    int savings = 1000000;

    char select2;
    int select;
    int repeat1=1;
    sleep(1);
    printf("\n");
    printf("-------------------------------------------------------------------------------------------\n");
    printf("_________________________________Welcome_to_Al-Safar_Bank__________________________________\n");   
    printf("-------------------------------------------------------------------------------------------\n");
    printf("\n\n");
while(repeat1){
    savingsper = savingsper;
    printf("1)Create Account\n\n2)ATM\n\n3)Pay Fees\n\n4)Western Union\n\n5)Send Money\n\n6)Recieve Money\n\n7)Admin Mode\n\n8)Exit\n\n");
    printf("Select: ");
    scanf("%d",&select);
    printf("\n");
    if(select==1){
        printf("-------------------------------------------------------------------------------------------\n");
        printf("_________________________________Welcome_to_Al-Safar_Bank__________________________________\n");   
        printf("--------------------------------_Creating_Account_Section_---------------------------------\n");
        printf("\n\n");
        printf("We need some information to create a account for you.\n");
        printf("Do you agree with that ? (press y for yes or press n for no)\n");
        printf("\n");
        printf("Select: ");
        scanf(" %c",&select2);
        if(select2=='y'){
            printf("Great!\n");
            printf("\n");

            printf("Enter Your Name: ");
            scanf("%s",name);

            int found = 0;
            for (int i = 0; i < 10; i++) {
                if (strcmp(name, partners[i]) == 0) {
                    found = 1;
                    break;
                    }
                else{
                    found=0;
                    break;
                    }
                }
                if(found==1){
                        printf("Account Already Created..\n");
                    }
                else if(found==0){
                    printf("Not available..\n");
                    printf("You can create now!.\n");
                    printf("\n");
                    for (int i = 1; i < sizeofname; i++) {
                        printf("Enter Your Full Name: ");
                        int c;
                        while ((c = getchar()) != '\n' && c != EOF) {}
                        fgets(partners[i], sizeof(partners[i]), stdin);
                        printf("\n");
                        break;
                    }
                    for (int i = 1; i < sizeofaddress; i++) {
                        printf("Enter Your Address: ");
                        int d;
                        while ((d = getchar()) != '\n' && d != EOF) {}
                        fgets(addressPeople[i], sizeof(addressPeople[i]), stdin);
                        break;
                    }
                    printf("\n");
                    for (int i = 1; i < sizeofdob; i++) {
                        printf("Enter Your Date Of Birth: ");
                        int e;
                        while ((e = getchar()) != '\n' && e != EOF) {}
                        fgets(dateofBirthPeople[i], sizeof(dateofBirthPeople[i]), stdin);
                        break;
                    }
                    printf("\n");
                    for (int i = 1; i < sizephonenumber; i++) {
                        printf("Enter Your Phone Number: ");
                        scanf("%lld",&phonenumberPeople[i]);
                        break;
                    }
                    printf("\n");
                    for (int i = 1; i < sizenicnumber; i++) {
                        printf("Enter Your NIC Number: ");
                        scanf("%lld",&nICNumberPeople[i]);
                        break;
                    }
                    printf("\n");
                    for (int i = 1; i < sizesourceofincome; i++) {
                        printf("Enter Your Source Of Income: ");
                        int f;
                        while ((f = getchar()) != '\n' && f != EOF) {}
                        fgets(sourceOfIncomePeople[i], sizeof(sourceOfIncomePeople[i]), stdin);
                        break;
                    }
                    printf("\n");
                    while(repeat1){
                        printf("Set Your Pincode: ");
                        scanf("%d",&pincode);
                        if(pincode > 9999){
                            printf("More Than 4 digits are not allowed.");
                            printf("\n\n");
                            continue;
                        }else{
                            for (int i = 1; i < sizeofpincodes; i++) {
                                printf("Confirm Your Pin Code: ");
                                scanf("%d",&pincodesPeople[i]);
                                break;
                            }
                            printf("Account Created Succesfully...\n");
                            sleep(1);
                            printf("The credit will be send to your address soon :)...\n");
                            sleep(2);

                            sizeofname = sizeofname - 1 ;
                            sizeofaddress = sizeofaddress - 1;
                            sizeofdob = sizeofdob - 1;
                            sizephonenumber = sizephonenumber - 1;
                            sizenicnumber = sizenicnumber - 1;
                            sizesourceofincome = sizesourceofincome - 1;
                            printf("-------------------------------------------------------------------------------------------\n");
                            printf("___________________________________________________________________________________________\n");
                            printf("-------------------------------------------------------------------------------------------\n");
                            break;
                        }
                    }
                    
                   }
            printf("\n");
            
            
        }
        else{
            printf("-------------------------------------------------------------------------------------------\n");
            printf("___________________________________________________________________________________________\n");
            printf("-------------------------------------------------------------------------------------------\n");
            continue;
        }


    // End of select 1
    }

    else if(select==2){
        printf("-------------------------------------------------------------------------------------------\n");
        printf("_________________________________Welcome_to_Al-Safar_Bank__________________________________\n");   
        printf("--------------------------------------_ATM__MACHINE_---------------------------------------\n");
        printf("\n");
        printf("- - - -\n");
        printf("");
        scanf("%d",&pincode);
        int found1 = 0;
        for (int i = 1; i < 3; i++) {
            if (pincode == pincodesPeople[i]) {
                found1 = 1;
                break;
                }
            }
            if(found1==1){
                printf("_______________\n");    
                printf("Access Granted.\n");
                printf("---------------\n");
                int selectLang;
                printf("Please select your language:\n");
                printf("1)English\n2)Urdu\n\n");
                while(repeat1){
                    printf("Select: ");
                    scanf("%d",&selectLang);
                    if(selectLang==1){
                        break;
                    }
                    else if(selectLang==2){
                        printf("Urdu Language Selected but theres a issue in encoding that sorry....\n\n\n");
                        continue;
                    }
                    else{
                        printf("Sorry sir Please Enter Right Command....\n\n\n");
                        continue;
                    }
                }
                int selectopt;
                int selectamount;
                printf("English Language Selected.\n\n");
                printf("-----------------------------------------------------|Name: %s|\n",partners[1]);
                while(repeat1){
                    printf("Following Actions You can perform:\n");
                    printf("1)Cash Withdrawl\n2)Balance Inquiry\n3)Cash Deposit\n4)Back\n");
                    printf("Select: ");
                    scanf("%d",&selectopt);
                    if(selectopt==1){
                        printf("1000                       ");
                        printf("5000");
                        printf("\n2000                     ");
                        printf("10000");
                        printf("\nSelect Amount: ");
                        scanf("%d",&selectamount);
                        if(selectamount==1000){
                            printf("Take Money....\n");
                            savingsper = savingsper - selectamount;
                            printf("Do you want to take a receipt ?\n");
                            printf("NOTE: press 1 for yes or 2 for no\n\n");
                            int selectyorn;
                            while(repeat1){
                                printf("Select: ");
                                scanf("%d",&selectyorn);
                                if(selectyorn == 1){
                                    printf("Generating Receipt.....\n");
                                    sleep(1);
                                    printf("\n");
                                    printf("| %s",partners[1]);
                                    printf("\n|-----------------\n");
                                    printf("\n|Total Balance: %d Rupees.\n",savingsper);
                                    printf("\n|-----------------\n");
                                    printf("\n----Al-Safar Bank-----\n");
                                    printf("\n----Thank You-----\n");
                                    printf("\n");
                                    break;

                                }
                                else if(selectyorn == 2){
                                    printf("Ok Sir, Have A nice Day! :)");
                                    break;
                                }
                                else if(selectyorn != 1 || selectyorn != 2){
                                    printf("Enter Correct Requirement!!\n\n");
                                    continue;
                                }
                            }

                        }
                        if(selectamount==2000){
                            printf("Take Money....\n");
                            savingsper = savingsper - selectamount;
                            printf("Do you want to take a receipt ?\n");
                            printf("NOTE: press 1 for yes or 2 for no\n\n");
                            int selectyorn;
                            while(repeat1){
                                printf("Select: ");
                                scanf("%d",&selectyorn);
                                if(selectyorn == 1){
                                    printf("Generating Receipt.....\n");
                                    sleep(1);
                                    printf("\n");
                                    printf("| %s",partners[1]);
                                    printf("\n|-----------------\n");
                                    printf("\n|Total Balance: %d Rupees.\n",savingsper);
                                    printf("\n|-----------------\n");
                                    printf("\n----Al-Safar Bank-----\n");
                                    printf("\n----Thank You-----\n");
                                    printf("\n");
                                    break;

                                }
                                else if(selectyorn == 2){
                                    printf("Ok Sir, Have A nice Day! :)");
                                    break;
                                }
                                else if(selectyorn != 1 || selectyorn != 2){
                                    printf("Enter Correct Requirement!!\n\n");
                                    continue;
                                }
                            }

                        }
                        if(selectamount==5000){
                            printf("Take Money....\n");
                            savingsper = savingsper - selectamount;
                            printf("Do you want to take a receipt ?\n");
                            printf("NOTE: press 1 for yes or 2 for no\n\n");
                            int selectyorn;
                            while(repeat1){
                                printf("Select: ");
                                scanf("%d",&selectyorn);
                                if(selectyorn == 1){
                                    printf("Generating Receipt.....\n");
                                    sleep(1);
                                    printf("\n");
                                    printf("| %s",partners[1]);
                                    printf("\n|-----------------\n");
                                    printf("\n|Total Balance: %d Rupees.\n",savingsper);
                                    printf("\n|-----------------\n");
                                    printf("\n----Al-Safar Bank-----\n");
                                    printf("\n----Thank You-----\n");
                                    printf("\n");
                                    break;

                                }
                                else if(selectyorn == 2){
                                    printf("Ok Sir, Have A nice Day! :)");
                                    break;
                                }
                                else if(selectyorn != 1 || selectyorn != 2){
                                    printf("Enter Correct Requirement!!\n\n");
                                    continue;
                                }
                            }

                        }
                        if(selectamount==10000){
                            printf("Take Money....\n");
                            savingsper = savingsper - selectamount;
                            printf("Do you want to take a receipt ?\n");
                            printf("NOTE: press 1 for yes or 2 for no\n\n");
                            int selectyorn;
                            while(repeat1){
                                printf("Select: ");
                                scanf("%d",&selectyorn);
                                if(selectyorn == 1){
                                    printf("Generating Receipt.....\n");
                                    sleep(1);
                                    printf("\n");
                                    printf("| %s",partners[1]);
                                    printf("\n|-----------------\n");
                                    printf("\n|Total Balance: %d Rupees.\n",savingsper);
                                    printf("\n|-----------------\n");
                                    printf("\n----Al-Safar Bank-----\n");
                                    printf("\n----Thank You-----\n");
                                    printf("\n");
                                    break;
                                    

                                }
                                else if(selectyorn == 2){
                                    printf("Ok Sir, Have A nice Day! :)");
                                    break;
                                }
                                else if(selectyorn != 1 || selectyorn != 2){
                                    printf("Enter Correct Requirement!!\n\n");
                                    continue;
                                }
                            }

                        }
                    }
                    else if(selectopt==2){
                        printf("------------------------------------------\n");
                        printf("\nYour Current Account Balance is: %d Rupees.\n",savingsper);
                        printf("\n------------------------------------------\n");
                        printf("This account is registered on the Name of : %s",partners[1]);
                        printf("\n------------------------------------------\n");
                        printf("\n----Al-Safar Bank-----\n");
                        printf("\n----Thank You-----\n");
                        printf("\n\n\n");
                        break;
                    }
                    else if(selectopt==3){
                        printf("How Much Cash You want to deposit ?\n");
                        printf("Enter Amount: ");
                        scanf("%d",&selectamount);
                        printf("Adding Amount To your account.....\n");
                        sleep(2);
                        printf("Amount Added Successfully!\n\n");
                        savingsper = savingsper + selectamount;
                        printf("Your new balance is: %d Rupees.",savingsper);
                        printf("\n\n\n");
                        break;
                    }
                    else if(selectopt==4){
                        printf("-----------------------------------------------------------------\n");
                        printf("_________________________________________________________________\n");
                        break;
                    }
                    else if (selectopt != 1 || selectopt != 2 || selectopt != 3 || selectopt != 4){
                        printf("Invalid Command....\n\n");
                        continue;
                    }
                }

            }
            else if(pincode==6969){
                int selectopt;
                int selectamount;
                int savings = 1000000;
                printf("_______________\n");
                printf("Access Granted.\n");
                printf("---------------\n\n");
                printf("-----------------------------------------------------|Name: Okasha Nadeem |\n");
                printf("Following Actions You can perform:\n");
                int repeat1 = 1;
                while(repeat1){
                    printf("Following Actions You can perform:\n");
                    printf("1)Cash Withdrawl\n2)Balance Inquiry\n3)Cash Deposit\n4)Back\n");
                    printf("Select: ");
                    scanf("%d",&selectopt);
                    if(selectopt==1){
                        printf("1000                       ");
                        printf("5000");
                        printf("\n2000                     ");
                        printf("10000");

                        printf("\nSelect Amount: ");
                        scanf("%d",&selectamount);
                        if(selectamount==1000){
                            printf("Take Money....\n");
                            savings = savings - 1000;
                            printf("Do you want to take a receipt ?\n");
                            printf("NOTE: press 1 for yes or 2 for no\n\n");
                            int selectyorn;
                            while(repeat1){
                                printf("Select: ");
                                scanf("%d",&selectyorn);
                                if(selectyorn == 1){
                                    printf("Generating Receipt.....\n");
                                    sleep(1);
                                    printf("\n");
                                    printf("|Name: Okasha Nadeem\n");
                                    printf("\n|-----------------\n");
                                    printf("\n|Total Balance: %d Rupees.",savings);
                                    printf("\n|-----------------\n");
                                    printf("\n----Al-Safar Bank-----\n");
                                    printf("\n----Thank You-----\n");
                                    printf("\n");
                                    break;
                                }
                                else if(selectyorn == 2){
                                    printf("\nOk, Take Care Okasha Nadeem!\n\n");
                                    break;
                                }
                                else{
                                    printf("Wrong Command!\n");
                                    continue;
                                }
                            }
                        }
                        if(selectamount==2000){
                            printf("Take Money....\n");
                            savings = savings - 2000;
                            printf("Do you want to take a receipt ?\n");
                            printf("NOTE: press 1 for yes or 2 for no\n\n");
                            int selectyorn;
                            
                
                            while(repeat1){
                                printf("Select: ");
                                scanf("%d",&selectyorn);
                                if(selectyorn == 1){
                                    printf("Generating Receipt.....\n");
                                    sleep(1);
                                    printf("\n");
                                    printf("|Name: Okasha Nadeem\n");
                                    printf("\n|-----------------\n");
                                    printf("\n|Total Balance: %d Rupees.",savings);
                                    printf("\n|-----------------\n");
                                    printf("\n----Al-Safar Bank-----\n");
                                    printf("\n----Thank You-----\n");
                                    printf("\n");
                                    break;

                                }
                                else if(selectyorn == 2){
                                    printf("\nOk, Take Care Okasha Nadeem!\n\n");
                                    break;
                                }
                                else{
                                    printf("Wrong Command!\n");
                                    continue;
                                }
                            }
                        }
                        if(selectamount==5000){
                            printf("Take Money....\n");
                            savings = savings - 5000;
                            printf("Do you want to take a receipt ?\n");
                            printf("NOTE: press 1 for yes or 2 for no\n\n");
                            int selectyorn;
                            
                
                            while(repeat1){
                                printf("Select: ");
                                scanf("%d",&selectyorn);
                                if(selectyorn == 1){
                                    printf("Generating Receipt.....\n");
                                    sleep(1);
                                    printf("\n");
                                    printf("|Name: Okasha Nadeem\n");
                                    printf("\n|-----------------\n");
                                    printf("\n|Total Balance: %d Rupees.",savings);
                                    printf("\n|-----------------\n");
                                    printf("\n----Al-Safar Bank-----\n");
                                    printf("\n----Thank You-----\n");
                                    printf("\n");
                                    break;

                                }
                                else if(selectyorn == 2){
                                    printf("\nOk, Take Care Okasha Nadeem!\n\n");
                                    break;
                                }
                                else{
                                    printf("Wrong Command!\n");
                                    continue;
                                }
                            }
                        }
                        if(selectamount==10000){
                            printf("Take Money....\n");
                            savings = savings - 10000;
                            printf("Do you want to take a receipt ?\n");
                            printf("NOTE: press 1 for yes or 2 for no\n\n");
                            int selectyorn;
                            
                
                            while(repeat1){
                                printf("Select: ");
                                scanf("%d",&selectyorn);
                                if(selectyorn == 1){
                                    printf("Generating Receipt.....\n");
                                    sleep(1);
                                    printf("\n");
                                    printf("|Name: Okasha Nadeem\n");
                                    printf("\n|-----------------\n");
                                    printf("\n|Total Balance: %d Rupees.",savings);
                                    printf("\n|-----------------\n");
                                    printf("\n----Al-Safar Bank-----\n");
                                    printf("\n----Thank You-----\n");
                                    printf("\n");
                                    break;

                                }
                                else if(selectyorn == 2){
                                    printf("\nOk, Take Care Okasha Nadeem!\n\n");
                                    break;
                                }
                                else{
                                    printf("Wrong Command!\n");
                                    continue;
                                }
                            }
                        }
                    }
                    
                    else if(selectopt==2){
                        printf("------------------------------------------\n");
                        printf("Your Current Account Balance is: %d Rupees.\n",savings);
                        printf("------------------------------------------\n");
                        printf("This account is registered on the Name of : Okasha Nadeem");
                        printf("\n------------------------------------------\n");
                        printf("\n----Al-Safar Bank-----");
                        printf("\n----Thank You-----\n");
                        printf("\n\n\n");
                        break;
                    }
                    else if(selectopt==3){
                        printf("How Much Cash You want to deposit ?\n");
                        printf("Enter Amount: ");
                        scanf("%d",&selectamount);
                        printf("Adding Amount To your account.....\n");
                        sleep(2);
                        printf("Amount Added Successfully!\n\n");
                        printf("Your new balance is: %d Rupees.",savings + selectamount);
                        printf("\n\n\n");
                        break;
                    }
                    else if(selectopt==4){
                        printf("-----------------------------------------------------------------\n");
                        printf("_________________________________________________________________\n");
                        break;
                    }
                    else if (selectopt != 1 || selectopt != 2 || selectopt != 3 || selectopt == 4){
                        printf("Invalid Command....\n\n");
                        continue;
                    }
                }
            }
            else{
                printf("Sorry Sir you dont have account....\n\n\n");
                printf("-------------------------------------------------------------------------------------------\n");
                printf("___________________________________________________________________________________________\n");
                printf("-------------------------------------------------------------------------------------------\n");
            
            }

    }
    else if(select==3){
        printf("-------------------------------------------------------------------------------------------\n");
        printf("_________________________________Welcome_to_Al-Safar_Bank__________________________________\n");   
        printf("------------------------------------_Pay__Fees__Section_-----------------------------------\n");
        printf("\n");
        while(repeat1){
            printf("1) College Fees\n2) University Fees\n3)School Fees\n4)Back\n");
            int fees = 10000;
            int select5;
            printf("Select: ");
            scanf("%d",&select5);
            if(select5==1){
                printf("\n");
                printf("1# Bahria College\n2# Beacon College\n3# Allied College\n");
                int select6;
                printf("\n");
                printf("Select: ");
                scanf("%d",&select6);
                if(select6==1){
                    int id;
                    printf("Enter ID number of College: ");
                    scanf("%d",&id);
                    if(id==1111){
                        printf("Your Total Fees is %d Rupees.\n",fees);
                        printf("Enter Pincode Of your Account: ");
                        scanf("%d",&pincode);
                        int found1 = 0;
                        for (int i = 1; i < 3; i++) {
                            if (pincode == pincodesPeople[i]) {
                                found1 = 1;
                                break;
                                }
                            }
                            if(found1==1){
                                printf("Processing....\n");
                                savingsper = savingsper - fees;
                                sleep(2);
                                printf("Fee Submitted, Thank You :)\n\n");
                            }
                            else if(pincode==6969){
                                printf("Processing....\n");
                                savings = savings - fees;
                                sleep(2);
                                printf("Fee Submitted, Thank You :)\n\n");
                            }
                            else{
                                printf("No account found....\n\n");
                                continue;
                            }
                    }else{
                        printf("No ID found...\n\n");
                    }
                }
                else if(select6==2){
                    int id;
                    printf("Enter ID number of College: ");
                    scanf("%d",&id);
                    if(id==1111){
                        printf("Your Total Fees is %d Rupees.\n",fees);
                        printf("Enter Pincode Of your Account: ");
                        scanf("%d",&pincode);
                        int found1 = 0;
                        for (int i = 1; i < 3; i++) {
                            if (pincode == pincodesPeople[i]) {
                                found1 = 1;
                                break;
                                }
                            }
                            if(found1==1){
                                printf("Processing....\n");
                                savingsper = savingsper - fees;
                                sleep(2);
                                printf("Fee Submitted, Thank You :)\n\n");
                            }
                            else if(pincode==6969){
                                printf("Processing....\n");
                                savings = savings - fees;
                                sleep(2);
                                printf("Fee Submitted, Thank You :)\n\n");
                            }
                            else{
                                printf("No account found....\n\n");
                                continue;
                            }
                    }else{
                        printf("No ID found...\n\n");
                    }
                }
                else if(select6==3){
                    int id;
                    printf("Enter ID number of College: ");
                    scanf("%d",&id);
                    if(id==1111){
                        printf("Your Total Fees is %d Rupees.\n",fees);
                        printf("Enter Pincode Of your Account: ");
                        scanf("%d",&pincode);
                        int found1 = 0;
                        for (int i = 1; i < 3; i++) {
                            if (pincode == pincodesPeople[i]) {
                                found1 = 1;
                                break;
                                }
                            }
                            if(found1==1){
                                printf("Processing....\n");
                                savingsper = savingsper - fees;
                                sleep(2);
                                printf("Fee Submitted, Thank You :)\n\n");
                            }
                            else if(pincode==6969){
                                printf("Processing....\n");
                                savings = savings - fees;
                                sleep(2);
                                printf("Fee Submitted, Thank You :)\n\n");
                            }
                            else{
                                printf("No account found....\n\n");
                                continue;
                            }
                    }else{
                        printf("No ID found...\n\n");
                    }
                }
                else if (select6 != 1 || select6 != 2 || select6 != 3 ){
                    printf("Wrong Command..\n\n");
                }
            }
            if(select5==2){
                printf("\n");
                printf("1# Bahria University\n2# Beacon University\n3# Allied University\n");
                int select6;
                printf("\n");
                printf("Select: ");
                scanf("%d",&select6);
                if(select6==1){
                    int id;
                    printf("Enter ID number of University: ");
                    scanf("%d",&id);
                    if(id==1111){
                        printf("Your Total Fees is %d Rupees.\n",fees);
                        printf("Enter Pincode Of your Account: ");
                        scanf("%d",&pincode);
                        int found1 = 0;
                        for (int i = 1; i < 3; i++) {
                            if (pincode == pincodesPeople[i]) {
                                found1 = 1;
                                break;
                                }
                            }
                            if(found1==1){
                                printf("Processing....\n");
                                savingsper = savingsper - fees;
                                sleep(2);
                                printf("Fee Submitted, Thank You :)\n\n");
                            }
                            else if(pincode==6969){
                                printf("Processing....\n");
                                savings = savings - fees;
                                sleep(2);
                                printf("Fee Submitted, Thank You :)\n\n");
                            }
                            else{
                                printf("No account found....\n\n");
                                continue;
                            }
                    }else{
                        printf("No ID found...\n\n");
                    }
                }
                else if(select6==2){
                    int id;
                    printf("Enter ID number of University: ");
                    scanf("%d",&id);
                    if(id==1111){
                        printf("Your Total Fees is %d Rupees.\n",fees);
                        printf("Enter Pincode Of your Account: ");
                        scanf("%d",&pincode);
                        int found1 = 0;
                        for (int i = 1; i < 3; i++) {
                            if (pincode == pincodesPeople[i]) {
                                found1 = 1;
                                break;
                                }
                            }
                            if(found1==1){
                                printf("Processing....\n");
                                savingsper = savingsper - fees;
                                sleep(2);
                                printf("Fee Submitted, Thank You :)\n\n");
                            }
                            else if(pincode==6969){
                                printf("Processing....\n");
                                savings = savings - fees;
                                sleep(2);
                                printf("Fee Submitted, Thank You :)\n\n");
                            }
                            else{
                                printf("No account found....\n\n");
                                continue;
                            }
                    }else{
                        printf("No ID found...\n\n");
                    }
                }
                else if(select6==3){
                    int id;
                    printf("Enter ID number of University: ");
                    scanf("%d",&id);
                    if(id==1111){
                        printf("Your Total Fees is %d Rupees.\n",fees);
                        printf("Enter Pincode Of your Account: ");
                        scanf("%d",&pincode);
                        int found1 = 0;
                        for (int i = 1; i < 3; i++) {
                            if (pincode == pincodesPeople[i]) {
                                found1 = 1;
                                break;
                                }
                            }
                            if(found1==1){
                                printf("Processing....\n");
                                savingsper = savingsper - fees;
                                sleep(2);
                                printf("Fee Submitted, Thank You :)\n\n");
                            }
                            else if(pincode==6969){
                                printf("Processing....\n");
                                savings = savings - fees;
                                sleep(2);
                                printf("Fee Submitted, Thank You :)\n\n");
                            }
                            else{
                                printf("No account found....\n\n");
                                continue;
                            }
                    }else{
                        printf("No ID found...\n\n");
                    }
                }
                else if (select6 != 1 || select6 != 2 || select6 != 3 ){
                    printf("Wrong Command..\n\n");
                }
            }
            if(select5==3){
                printf("\n");
                printf("1# Bahria School\n2# Beacon School\n3# Allied School\n");
                int select6;
                printf("\n");
                printf("Select: ");
                scanf("%d",&select6);
                if(select6==1){
                    int id;
                    printf("Enter ID number of School: ");
                    scanf("%d",&id);
                    if(id==1111){
                        printf("Your Total Fees is %d Rupees.\n",fees);
                        printf("Enter Pincode Of your Account: ");
                        scanf("%d",&pincode);
                        int found1 = 0;
                        for (int i = 1; i < 3; i++) {
                            if (pincode == pincodesPeople[i]) {
                                found1 = 1;
                                break;
                                }
                            }
                            if(found1==1){
                                printf("Processing....\n");
                                savingsper = savingsper - fees;
                                sleep(2);
                                printf("Fee Submitted, Thank You :)\n\n");
                            }
                            else if(pincode==6969){
                                printf("Processing....\n");
                                savings = savings - fees;
                                sleep(2);
                                printf("Fee Submitted, Thank You :)\n\n");
                            }
                            else{
                                printf("No account found....\n\n");
                                continue;
                            }
                    }else{
                        printf("No ID found...\n\n");
                    }
                }
                else if(select6==2){
                    int id;
                    printf("Enter ID number of School: ");
                    scanf("%d",&id);
                    if(id==1111){
                        printf("Your Total Fees is %d Rupees.\n",fees);
                        printf("Enter Pincode Of your Account: ");
                        scanf("%d",&pincode);
                        int found1 = 0;
                        for (int i = 1; i < 3; i++) {
                            if (pincode == pincodesPeople[i]) {
                                found1 = 1;
                                break;
                                }
                            }
                            if(found1==1){
                                printf("Processing....\n");
                                savingsper = savingsper - fees;
                                sleep(2);
                                printf("Fee Submitted, Thank You :)\n\n");
                            }
                            else if(pincode==6969){
                                printf("Processing....\n");
                                savings = savings - fees;
                                sleep(2);
                                printf("Fee Submitted, Thank You :)\n\n");
                            }
                            else{
                                printf("No account found....\n\n");
                                continue;
                            }
                    }else{
                        printf("No ID found...\n\n");
                    }
                }
                else if(select6==3){
                    int id;
                    printf("Enter ID number of School: ");
                    scanf("%d",&id);
                    if(id==1111){
                        printf("Your Total Fees is %d Rupees.\n",fees);
                        printf("Enter Pincode Of your Account: ");
                        scanf("%d",&pincode);
                        int found1 = 0;
                        for (int i = 1; i < 3; i++) {
                            if (pincode == pincodesPeople[i]) {
                                found1 = 1;
                                break;
                                }
                            }
                            if(found1==1){
                                printf("Processing....\n");
                                savingsper = savingsper - fees;
                                sleep(2);
                                printf("Fee Submitted, Thank You :)\n\n");
                            }
                            else if(pincode==6969){
                                printf("Processing....\n");
                                savings = savings - fees;
                                sleep(2);
                                printf("Fee Submitted, Thank You :)\n\n");
                            }
                            else{
                                printf("No account found....\n\n");
                                continue;
                            }
                    }else{
                        printf("No ID found...\n\n");
                    }
                }
                else if (select6 != 1 || select6 != 2 || select6 != 3 ){
                    printf("Wrong Command..\n\n");
                }
            }
            else{
                printf("--------------------------------------------------\n\n");
                break;
            }
        }
    }
    else if(select==4){
        printf("-------------------------------------------------------------------------------------------\n");
        printf("_________________________________Welcome_to_Al-Safar_Bank__________________________________\n");   
        printf("----------------------------------_Western_Union_Section_----------------------------------\n");
        printf("\n");
        printf("\nEnter Your Pincode: ");
        scanf("%d",&pincode);
        int found1 = 0;
        for (int i = 1; i < 3; i++) {
            if (pincode == pincodesPeople[i]) {
                found1 = 1;
                break;
            }
        }
            if(found1==1){
                while(repeat1){
                    printf("Select From The Following:\n\n");
                    printf("1)United States Dollar\n2)Euro\n3)Pound Sterling\n4)Turkish lira\n5)Australlian Dollar\n6)Kuwaiti Dinar\n7)Saudi Riyal\n8)Back");
                    int select7;
                    int selectamount;
                    int dollar = 277;
                    int euro = 301;
                    int poundSterling = 353;
                    int turkishlira = 10;
                    int aud = 185;
                    int kuwaitidinar = 903;
                    int saudiRiyal = 74;
                    printf("\nSelect: ");
                    scanf("%d",&select7);
                    if(select7==1){
                        printf("Enter Amount: ");
                        scanf("%d",&selectamount);
                        float formula = selectamount / dollar; 
                        if(selectamount<savingsper){
                            savingsper = savingsper - selectamount;
                            printf("Amount Converted From Pkr to United States Dollar.\n");
                            printf("Current PKR Balance: %d Rupees",savingsper);
                            printf("\n");
                            printf("-----------------------------------------------\n\n");
                            printf("Current USD balance: %f US Dollars",formula);
                            printf("\n");
                            printf("-----------------------------------------------\n\n");
                            break;
                        }
                        else if(selectamount>savingsper){
                            printf("You dont have sufficient money...\n\n");
                            break;
                        }else{
                            printf("Invalid Command\n\n");
                            continue;
                        }
                    }
                    else if(select7==2){
                        printf("Enter Amount: ");
                        scanf("%d",&selectamount);
                        float formula = selectamount / euro; 
                        if(selectamount<savingsper){
                            savingsper = savingsper - selectamount;
                            printf("Amount Converted From Pkr to Euro.\n");
                            printf("Current PKR Balance: %d Rupees",savingsper);
                            printf("\n");
                            printf("-----------------------------------------------\n\n");
                            printf("Current Euro balance: %f Euros",formula);
                            printf("\n");
                            printf("-----------------------------------------------\n\n");
                            break;
                        }
                        else if(selectamount>savingsper){
                            printf("You dont have sufficient money...\n\n");
                            break;
                        }else{
                            printf("Invalid Command\n\n");
                            continue;
                        }
                    }
                    else if(select7==3){
                        printf("Enter Amount: ");
                        scanf("%d",&selectamount);
                        float formula = selectamount / poundSterling; 
                        if(selectamount<savingsper){
                            savingsper = savingsper - selectamount;
                            printf("Amount Converted From Pkr to Pound Sterling.\n");
                            printf("Current PKR Balance: %d Rupees",savingsper);
                            printf("\n");
                            printf("-----------------------------------------------\n\n");
                            printf("Current Pound Sterling balance: %f Pounds",formula);
                            printf("\n");
                            printf("-----------------------------------------------\n\n");
                            break;
                        }
                        else if(selectamount>savingsper){
                            printf("You dont have sufficient money...\n\n");
                            break;
                        }else{
                            printf("Invalid Command\n\n");
                            continue;
                        }
                    }
                    else if(select7==4){
                        printf("Enter Amount: ");
                        scanf("%d",&selectamount);
                        float formula = selectamount / turkishlira; 
                        if(selectamount<savingsper){
                            savingsper = savingsper - selectamount;
                            printf("Amount Converted From Pkr to Turkish lira.\n");
                            printf("Current PKR Balance: %d Rupees",savingsper);
                            printf("\n");
                            printf("-----------------------------------------------\n\n");
                            printf("Current Turkish lira balance: %f Turkish lira",formula);
                            printf("\n");
                            printf("-----------------------------------------------\n\n");
                            break;
                        }
                        else if(selectamount>savingsper){
                            printf("You dont have sufficient money...\n\n");
                            break;
                        }else{
                            printf("Invalid Command\n\n");
                            continue;
                        }
                    }
                    else if(select7==5){
                        printf("Enter Amount: ");
                        scanf("%d",&selectamount);
                        float formula = selectamount / aud; 
                        if(selectamount<savingsper){
                            savingsper = savingsper - selectamount;
                            printf("Amount Converted From Pkr to AUD.\n");
                            printf("Current PKR Balance: %d Rupees",savingsper);
                            printf("\n");
                            printf("-----------------------------------------------\n\n");
                            printf("Current Australlian Dollar balance: %f AUD.",formula);
                            printf("\n");
                            printf("-----------------------------------------------\n\n");
                            break;
                        }
                        else if(selectamount>savingsper){
                            printf("You dont have sufficient money...\n\n");
                            break;
                        }else{
                            printf("Invalid Command\n\n");
                            continue;
                        }
                    }
                    else if(select7==6){
                        printf("Enter Amount: ");
                        scanf("%d",&selectamount);
                        float formula = selectamount / kuwaitidinar; 
                        if(selectamount<savingsper){
                            savingsper = savingsper - selectamount;
                            printf("Amount Converted From Pkr to Kuwaiti Dinar.\n");
                            printf("Current PKR Balance: %d Rupees",savingsper);
                            printf("\n");
                            printf("-----------------------------------------------\n\n");
                            printf("Current Kuwaiti Dinar balance: %f Kuwaiti Dinar.",formula);
                            printf("\n");
                            printf("-----------------------------------------------\n\n");
                            break;
                        }
                        else if(selectamount>savingsper){
                            printf("You dont have sufficient money...\n\n");
                            break;
                        }else{
                            printf("Invalid Command\n\n");
                            continue;
                        }
                    }
                    else if(select7==7){
                        printf("Enter Amount: ");
                        scanf("%d",&selectamount);
                        float formula = selectamount / saudiRiyal; 
                        if(selectamount<savingsper){
                            savingsper = savingsper - selectamount;
                            printf("Amount Converted From Pkr to Saudi Riyal.\n");
                            printf("Current PKR Balance: %d Rupees",savingsper);
                            printf("\n");
                            printf("-----------------------------------------------\n\n");
                            printf("Current Saudi Riyal balance: %f Saudi Riyal.",formula);
                            printf("\n");
                            printf("-----------------------------------------------\n\n");
                            break;
                        }
                        else if(selectamount>savingsper){
                            printf("You dont have sufficient money...\n\n");
                            break;
                        }else{
                            printf("Invalid Command\n\n");
                            continue;
                        }
                    }
                    else{
                        printf("------------------------------------------------------\n\n");
                        break;
                    }
                }
            }
            else if(pincode==6969){
                while(repeat1){
                    printf("Select From The Following:\n\n");
                    printf("1)United States Dollar\n2)Euro\n3)Pound Sterling\n4)Turkish lira\n5)Australlian Dollar\n6)Kuwaiti Dinar\n7)Saudi Riyal\n8)Back");
                    int select7;
                    int selectamount;
                    int dollar = 277;
                    int euro = 301;
                    int poundSterling = 353;
                    int turkishlira = 10;
                    int aud = 185;
                    int kuwaitidinar = 903;
                    int saudiRiyal = 74;
                    printf("\nSelect: ");
                    scanf("%d",&select7);
                    if(select7==1){
                        printf("Enter Amount: ");
                        scanf("%d",&selectamount);
                        float formula = selectamount / dollar; 
                        if(selectamount<savingsper){
                            savings = savings - selectamount;
                            printf("Amount Converted From Pkr to United States Dollar.\n");
                            printf("Current PKR Balance: %d Rupees",savings);
                            printf("\n");
                            printf("-----------------------------------------------\n\n");
                            printf("Current USD balance: %f US Dollars",formula);
                            printf("\n");
                            printf("-----------------------------------------------\n\n");
                            break;
                        }
                        else if(selectamount>savings){
                            printf("You dont have sufficient money...\n\n");
                            break;
                        }else{
                            printf("Invalid Command\n\n");
                            continue;
                        }
                    }
                    else if(select7==2){
                        printf("Enter Amount: ");
                        scanf("%d",&selectamount);
                        float formula = selectamount / euro; 
                        if(selectamount<savingsper){
                            savings = savings - selectamount;
                            printf("Amount Converted From Pkr to Euro.\n");
                            printf("Current PKR Balance: %d Rupees",savings);
                            printf("\n");
                            printf("-----------------------------------------------\n\n");
                            printf("Current Euro balance: %f Euros",formula);
                            printf("\n");
                            printf("-----------------------------------------------\n\n");
                            break;
                        }
                        else if(selectamount>savings){
                            printf("You dont have sufficient money...\n\n");
                            break;
                        }else{
                            printf("Invalid Command\n\n");
                            continue;
                        }
                    }
                    else if(select7==3){
                        printf("Enter Amount: ");
                        scanf("%d",&selectamount);
                        float formula = selectamount / poundSterling; 
                        if(selectamount<savings){
                            savings = savings - selectamount;
                            printf("Amount Converted From Pkr to Pound Sterling.\n");
                            printf("Current PKR Balance: %d Rupees",savings);
                            printf("\n");
                            printf("-----------------------------------------------\n\n");
                            printf("Current Pound Sterling balance: %f Pounds",formula);
                            printf("\n");
                            printf("-----------------------------------------------\n\n");
                            break;
                        }
                        else if(selectamount>savings){
                            printf("You dont have sufficient money...\n\n");
                            break;
                        }else{
                            printf("Invalid Command\n\n");
                            continue;
                        }
                    }
                    else if(select7==4){
                        printf("Enter Amount: ");
                        scanf("%d",&selectamount);
                        float formula = selectamount / turkishlira; 
                        if(selectamount<savings){
                            savings = savings - selectamount;
                            printf("Amount Converted From Pkr to Turkish lira.\n");
                            printf("Current PKR Balance: %d Rupees",savings);
                            printf("\n");
                            printf("-----------------------------------------------\n\n");
                            printf("Current Turkish lira balance: %f Turkish lira",formula);
                            printf("\n");
                            printf("-----------------------------------------------\n\n");
                            break;
                        }
                        else if(selectamount>savings){
                            printf("You dont have sufficient money...\n\n");
                            break;
                        }else{
                            printf("Invalid Command\n\n");
                            continue;
                        }
                    }
                    else if(select7==5){
                        printf("Enter Amount: ");
                        scanf("%d",&selectamount);
                        float formula = selectamount / aud; 
                        if(selectamount<savings){
                            savings = savings - selectamount;
                            printf("Amount Converted From Pkr to AUD.\n");
                            printf("Current PKR Balance: %d Rupees",savings);
                            printf("\n");
                            printf("-----------------------------------------------\n\n");
                            printf("Current Australlian Dollar balance: %f AUD.",formula);
                            printf("\n");
                            printf("-----------------------------------------------\n\n");
                            break;
                        }
                        else if(selectamount>savings){
                            printf("You dont have sufficient money...\n\n");
                            break;
                        }else{
                            printf("Invalid Command\n\n");
                            continue;
                        }
                    }
                    else if(select7==6){
                        printf("Enter Amount: ");
                        scanf("%d",&selectamount);
                        float formula = selectamount / kuwaitidinar; 
                        if(selectamount<savings){
                            savings = savings - selectamount;
                            printf("Amount Converted From Pkr to Kuwaiti Dinar.\n");
                            printf("Current PKR Balance: %d Rupees",savings);
                            printf("\n");
                            printf("-----------------------------------------------\n\n");
                            printf("Current Kuwaiti Dinar balance: %f Kuwaiti Dinar.",formula);
                            printf("\n");
                            printf("-----------------------------------------------\n\n");
                            break;
                        }
                        else if(selectamount>savings){
                            printf("You dont have sufficient money...\n\n");
                            break;
                        }else{
                            printf("Invalid Command\n\n");
                            continue;
                        }
                    }
                    else if(select7==7){
                        printf("Enter Amount: ");
                        scanf("%d",&selectamount);
                        float formula = selectamount / saudiRiyal; 
                        if(selectamount<savings){
                            savings = savings - selectamount;
                            printf("Amount Converted From Pkr to Saudi Riyal.\n");
                            printf("Current PKR Balance: %d Rupees",savings);
                            printf("\n");
                            printf("-----------------------------------------------\n\n");
                            printf("Current Saudi Riyal balance: %f Saudi Riyal.",formula);
                            printf("\n");
                            printf("-----------------------------------------------\n\n");
                            break;
                        }
                        else if(selectamount>savings){
                            printf("You dont have sufficient money...\n\n");
                            break;
                        }else{
                            printf("Invalid Command\n\n");
                            continue;
                        }
                    }
                    else{
                        printf("------------------------------------------------------\n\n");
                        break;
                    }
                }
            }
                else{
                    printf("No Account Found...\n\n\n");
                    continue;
                }
    }
    else if(select==5){
        printf("-------------------------------------------------------------------------------------------\n");
        printf("_________________________________Welcome_to_Al-Safar_Bank__________________________________\n");   
        printf("-----------------------------------_Send_Money_Section_------------------------------------\n"); 
        int accNumPublic[10] = {123456789,789456123};
        printf("\n");
        while(repeat1){
            printf("Enter Your Pincode: ");
            scanf("%d",&pincode);
            int found1 = 0;
            for (int i = 1; i < 3; i++) {
                if (pincode == pincodesPeople[i]) {
                    found1 = 1;
                    break;
                }
            }
            if(found1==1){
                printf("\n");
                sleep(1);
                printf("Verified.\n");
                int accNum;
                printf("Enter Account Number: ");
                scanf("%d",&accNum);
                int found1 = 0;
                for (int i = 0; i < 3; i++) {
                    if (accNum == accNumPublic[i]) {
                    found1 = 1;
                    break;
                    }
                }
                if(found1==1){
                    printf("Verified..\n");
                    int amount;
                    printf("Enter Amount: ");
                    scanf("%d",&amount);
                    if(amount<savingsper){
                            savingsper = savingsper-amount;
                            printf("-----------------------\n");
                            printf("Money Sent Successfully.\n");
                            printf("-----------------------\n");
                            break;
                    }
                    else if(amount>savingsper){
                        printf("----------------------------\n");
                        printf("You dont have sufficent money.\n\n\n");
                        printf("----------------------------\n");
                        break;
                    }
                }
                else{
                    printf("\n");
                    printf("There is no such account..\n");
                    printf("__________________________\n\n");
                    continue;
                }

            }
            else if(pincode==6969){
                printf("\n");
                sleep(1);
                printf("Verified.\n");
                int accNum;
                printf("Enter Account Number: ");
                scanf("%d",&accNum);
                int found1 = 0;
                for (int i = 0; i < 3; i++) {
                    if (accNum == accNumPublic[i]) {
                    found1 = 1;
                    break;
                    }
                }
                if(found1==1){
                    printf("Verified..\n");
                    int amount;
                    printf("Enter Amount: ");
                    scanf("%d",&amount);
                    if(amount<savings){
                            savings = savings - amount;
                            printf("-----------------------\n");
                            printf("Money Sent Successfully.\n");
                            printf("-----------------------\n");
                            break;
                    }
                    else if (amount>savings){
                        printf("----------------------------\n");
                        printf("You dont have sufficent money.\n\n\n");
                        printf("----------------------------\n");
                        break;
                    }
                }
                else{
                    printf("\n");
                    printf("There is no such account..\n");
                    printf("__________________________\n\n");
                    continue;
                }            
            }
            else{
                printf("Wrong Pincode!!\n");
                printf("______________\n\n");
                continue;
            }
        }
    }
    else if(select==6){
        printf("-------------------------------------------------------------------------------------------\n");
        printf("_________________________________Welcome_to_Al-Safar_Bank__________________________________\n");   
        printf("----------------------------------_Recieve_Money_Section_----------------------------------\n");
        int accNumPublic[10] = {123456789,789456123};
        printf("\n");
        while(repeat1){
            printf("Enter Your Pincode: ");
            scanf("%d",&pincode);
            int found1 = 0;
            for (int i = 1; i < 3; i++) {
                if (pincode == pincodesPeople[i]) {
                    found1 = 1;
                    break;
                }
            }
            if(found1==1){
                printf("\n");
                sleep(1);
                printf("Verified.\n");
                int accNum;
                printf("Enter Account Number: ");
                scanf("%d",&accNum);
                int found1 = 0;
                for (int i = 0; i < 3; i++) {
                    if (accNum == accNumPublic[i]) {
                    found1 = 1;
                    break;
                    }
                }
                if(found1==1){
                    printf("Verified..\n");
                    int amount;
                    int recieve = 1000;
                    printf("Enter Amount: ");
                    scanf("%d",&amount);
                    if(amount==recieve){
                            savingsper = savingsper+amount;
                            printf("-----------------------\n");
                            printf("Money Recieved Successfully.\n");
                            printf("-----------------------\n");
                            break;
                    }
                    else if(amount!=recieve){
                        printf("----------------------------\n");
                        printf("No money to Recieve..\n\n\n");
                        printf("----------------------------\n");
                        break;
                    }
                }
                else{
                    printf("\n");
                    printf("There is no such account..\n");
                    printf("__________________________\n\n");
                    continue;
                }

            }
            else if(pincode==6969){
                printf("\n");
                sleep(1);
                printf("Verified.\n");
                int accNum;
                printf("Enter Account Number: ");
                scanf("%d",&accNum);
                int found1 = 0;
                for (int i = 0; i < 3; i++) {
                    if (accNum == accNumPublic[i]) {
                    found1 = 1;
                    break;
                    }
                }
                if(found1==1){
                    printf("Verified..\n");
                    int amount;
                    int recieve = 10000;
                    printf("Enter Amount: ");
                    scanf("%d",&amount);
                    if(amount==recieve){
                            savings = savings + amount;
                            printf("-----------------------\n");
                            printf("Money Recieved Successfully.\n");
                            printf("-----------------------\n");
                            break;
                    }
                    else if(amount != recieve){
                        printf("----------------------------\n");
                        printf("No money To Recieve...\n\n\n");
                        printf("----------------------------\n");
                        break;
                    }
                }
                else{
                    printf("\n");
                    printf("There is no such account..\n");
                    printf("__________________________\n\n");
                    continue;
                }            
            }
            else{
                printf("Wrong Pincode!!\n");
                printf("______________\n\n");
                continue;
            }
        }
    }
    else if(select==7){
        printf("-------------------------------------------------------------------------------------------\n");
        printf("_________________________________Welcome_to_Al-Safar_Bank__________________________________\n");   
        printf("-----------------------------------_Admin_Mode_Section_------------------------------------\n");
        printf("\n\n");
        int adminId;
        int adminSecKey;
        int selectAdmin;
        printf("You've Entered Admin Mode Successfully....\n\n");
        printf("Enter Admin ID: ");
        scanf("%d",&adminId);
        printf("Enter Security Key: ");
        scanf("%d",&adminSecKey);
        if(adminSecKey==2121){
            printf("Access Granted!..\n\n");
            printf("1)Public View\n2)Staff View\n");
            printf("Select: ");
            scanf("%d",&selectAdmin);
            if(selectAdmin==1){
                printf("------------------------------------------------------------------\n");
                printf("Following are the persons who have their accounts in Al-Safar Bank.\n\n");
                for (int i = 1; i < 10; i++)
                {
                    printf("PERSON %d : %s",i,partners[i]);
                    printf("\n");
                }
                printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n\n");
            }
            else if(selectAdmin==2){
                printf("------------------------------------------------------------------\n");
                printf("Following are the staff who have their accounts in Al-Safar Bank.\n\n");
                printf("1)Okasha Nadeem Jafri\n2)Hurraira Junaid\n3)Mustafa\n4)Shehryar Khan\n5)Muhammad Zain\n6)Ahsan Jarral\n\n");
                printf("Note: Hey Im Zain, The Owner of this project and these are my friends :)!\n");
                printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n\n");
            }
        }
        else{
            printf("-------------------------------------\n");
            printf("Access Denied, Reporting to staff 4515.\n");
            printf("!RED ALERT ACTIVATED!\n\n");
            printf("-------------------------------------\n\n");
        }
        
    }
    else if(select==8){
        printf("_______________________\n");
        printf("Take Care, Allah Hafiz.\n");
        printf("_______________________\n");
        printf("\n");
        break;
    }
    else{
        printf("Invalid Command!..\n\n\n");
        sleep(2);
        printf("-------------------------------------------------------------------------------------------\n");
        printf("___________________________________________________________________________________________\n");
        printf("-------------------------------------------------------------------------------------------\n");
        continue;
    }
}
    return 0;
}