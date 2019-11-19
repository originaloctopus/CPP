namespace songStruc {
	enum Genre
	{
		Blues = 0,
		Country,
		Electronic,
		Folk,
		Hiphop,
		Jazz,
		Latin,
		Pop,
		Rock
	};

	 typedef struct _Song
	{	
		char title[64];
		char artist[32];
		char album[64];
		int track_Num[4];
		int releaseYear[4];
		Genre genre;

	} Song;

}