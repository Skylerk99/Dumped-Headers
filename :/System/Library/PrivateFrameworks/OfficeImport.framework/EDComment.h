/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:45 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EDString;

@interface EDComment : NSObject {

	BOOL _visible;
	int _rowIndex;
	int _columnIndex;
	EDString* _author;

}

@property (assign,nonatomic) int rowIndex;                   //@synthesize rowIndex=_rowIndex - In the implementation block
@property (assign,nonatomic) int columnIndex;                //@synthesize columnIndex=_columnIndex - In the implementation block
@property (nonatomic,retain) EDString * author;              //@synthesize author=_author - In the implementation block
@property (assign,nonatomic) BOOL visible;                   //@synthesize visible=_visible - In the implementation block
-(void)dealloc;
-(id)description;
-(BOOL)visible;
-(void)setVisible:(BOOL)arg1 ;
-(int)rowIndex;
-(void)setRowIndex:(int)arg1 ;
-(void)setAuthor:(EDString *)arg1 ;
-(EDString *)author;
-(int)columnIndex;
-(void)setColumnIndex:(int)arg1 ;
@end

