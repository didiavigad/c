int main()
{
    char *srt;
   char l;
   scanf("%s",srt);
    print_line(srt);
    print_simillar_words(srt);
printf("en");
scanf("%s",&l);
   switch(l)
    {
        case 'A':
            print_line(srt);
            break;
        case 'B':
            print_simillar_words(srt);
            break;
       
        default:
            printf("Error! operator is not correct");
    }
    return 0;
}