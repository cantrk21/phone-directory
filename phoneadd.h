int phoneAdd()
{
    Record newRecord;
    FILE* fp;
    fp = fopen("C:\\Users\\EXCALÝBUR\\Desktop\\c dersleri\\TELREHBERI\\telrehberi.txt","a");
    if(fp==NULL)
    {
        return -1;
    }

    printf("\n\n");
    printf("enter a name (max 20 character) :");
    scanf("%s",&newRecord.name);
    printf("enter a surname (max 20 character) :");
    scanf("%s",&newRecord.lastname);
    printf("enter a phone number (max 11 character) :");
    scanf("%s",&newRecord.phone);

    fprintf(fp,"\n%s %s %s",newRecord.name,newRecord.lastname,newRecord.phone);
    fclose(fp);

    return 0;
}

