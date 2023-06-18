int phoneList()
{
    Record currentRecord;
    FILE* fp;
    fp = fopen("C:\\Users\\EXCALÝBUR\\Desktop\\c dersleri\\TELREHBERI\\telrehberi.txt","r");
    if(fp==NULL)
    {
        return -1;
    }

    printf("\n\nNAME\t\t\tSURNAME\t\t\tPHONE\n");
    printf("----\t\t\t-------\t\t\t-------\n\n");

    while(!feof(fp)){

        fscanf(fp,"%s%s%s",currentRecord.name,currentRecord.lastname,currentRecord.phone);
        printf("%s\t\t\t",currentRecord.name);
        printf("%s\t\t\t",currentRecord.lastname);
        printf("%s\n",currentRecord.phone);
    }

    fclose(fp);

    return 0;
}
