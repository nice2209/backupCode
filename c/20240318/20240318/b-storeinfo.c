//#include <stdio.h>
//
//int main()
//{
//    char song[] = "by the rivers of babylon, there we sat down"
//        "yeah we wept, when we remember zion."
//        "when the wicked carried us away in captivity"
//        "required from us a song"
//        "now how shall we sing the lord's song in a strange land";
//
//    int alpha[26] = { 0, };
//    for (int i = 0; i < sizeof(song) / sizeof(song[0]); i++)
//    {
//        if (song[i] >= 'a' && song[i] <= 'z')
//        {
//            alpha[song[i] - 'a']++;
//        }
//    }
//
//    for (int c = 'a'; c <= 'z'; c++)
//    {
//        printf("%c - %d°³\n", c, alpha[c - 'a']);
//    }
//}