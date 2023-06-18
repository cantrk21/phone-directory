int phoneSearch(char* psearch)
{
    Record currentRecord;
    FILE* fp;
    int i=0;
    fp = fopen("C:\\Users\\EXCALÝBUR\\Desktop\\c dersleri\\TELREHBERI\\telrehberi.txt","r");
    if(fp==NULL)
    {
        return -1;
    }

    while(!feof(fp)){

        fscanf(fp,"%s%s%s",currentRecord.name,currentRecord.lastname,currentRecord.phone);
         if(!strcmp(psearch,currentRecord.name)){
        printf("%s\t\t\t",currentRecord.name);
        printf("%s\t\t\t",currentRecord.lastname);
        printf("%s\n",currentRecord.phone);
        i++;
        }
    }

    fclose(fp);

    return i;
}
