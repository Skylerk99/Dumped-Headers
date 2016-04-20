/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:20 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SBBulletinListSubsection : NSObject {

	BOOL _showsInLockScreen;
	BOOL _showsMessagePreview;
	NSString* _subsectionID;

}

@property (nonatomic,copy,readonly) NSString * subsectionID;              //@synthesize subsectionID=_subsectionID - In the implementation block
@property (assign,nonatomic) BOOL showsInLockScreen;                      //@synthesize showsInLockScreen=_showsInLockScreen - In the implementation block
@property (assign,nonatomic) BOOL showsMessagePreview;                    //@synthesize showsMessagePreview=_showsMessagePreview - In the implementation block
-(id)initWithBulletinListSection:(id)arg1 subsectionID:(id)arg2 ;
-(void)dealloc;
-(void)setShowsMessagePreview:(BOOL)arg1 ;
-(BOOL)showsInLockScreen;
-(void)setShowsInLockScreen:(BOOL)arg1 ;
-(BOOL)showsMessagePreview;
-(NSString *)subsectionID;
@end

