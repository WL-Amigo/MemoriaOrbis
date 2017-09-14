'define local constants
!define THEME_COLOR_BACKGROUND #E2EAFF
!define THEME_COLOR_BORDER #0B265E
!define THEME_COLOR_FONTS black
!define THEME_COLOR_ARROW #3075FF

skinparam {
	defaultFontName "S2G月フォント"
	defaultFontSize 14
	defaultFontColor THEME_COLOR_FONTS

	arrowColor THEME_COLOR_ARROW

	noteFontStyle bold
	noteFontColor #ffffff
	noteBackgroundColor #7f8c8d
	noteBorderColor #7f8c8d

    noteBackgroundColor<<q>> #f39c12
	noteBorderColor<<q>> #f39c12

	componentStyle uml2
	shadowing false
	handwritten true
}

skinparam activity {
	ArrowColor #000000
	BackgroundColor #eeeeee
	BorderColor #999999
	StartColor #000000
	EndColor #000000
	BarColor #000000
	
	FontColor<<page>> #ffffff
	FontStyle<<page>> bold
	BorderColor<<page>> #2980b9
	BackgroundColor<<page>> #3498db

	FontColor<<error>> #ffffff
	FontStyle<<error>> bold
	BorderColor<<error>> #c0392b
	BackgroundColor<<error>> #e74c3c

	FontColor<<input>> #ffffff
	FontStyle<<input>> bold
	BorderColor<<input>> #16a085
	BackgroundColor<<input>> #1abc9c

	FontColor<<end>> #ffffff
	FontStyle<<end>> bold
	BorderColor<<end>> #2c3e50
	BackgroundColor<<end>> #34495e

	FontColor<<fail>> #ffffff
	FontStyle<<fail>> bold
	BorderColor<<fail>> #333333
	BackgroundColor<<fail>> #555555
}

skinparam component {
	BackgroundColor THEME_COLOR_BACKGROUND
	BorderColor THEME_COLOR_BORDER
}

skinparam interface {
	BackgroundColor THEME_COLOR_BACKGROUND
	BorderColor THEME_COLOR_BORDER
}

skinparam rectangle {
    BackgroundColor THEME_COLOR_BACKGROUND
	BorderColor THEME_COLOR_BORDER
}

skinparam class {
	BackgroundColor THEME_COLOR_BACKGROUND
	BorderColor THEME_COLOR_BORDER
}

'undefine local constants
!undef THEME_COLOR_ARROW
!undef THEME_COLOR_BACKGROUND
!undef THEME_COLOR_BORDER
!undef THEME_COLOR_FONTS