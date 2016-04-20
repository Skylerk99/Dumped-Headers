/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:24 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class NSURL, NSArray;

@interface SBManyApplicationsAlertItem : SBAlertItem {

	NSURL* _url;
	NSArray* _applications;
	/*^block*/id _completion;

}

@property (nonatomic,copy,readonly) NSURL * url;                           //@synthesize url=_url - In the implementation block
@property (nonatomic,retain,readonly) NSArray * applications;              //@synthesize applications=_applications - In the implementation block
@property (nonatomic,copy,readonly) id completion;                         //@synthesize completion=_completion - In the implementation block
-(id)initWithURL:(id)arg1 applications:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)init;
-(NSURL *)url;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(id)completion;
-(BOOL)dismissOnLock;
-(BOOL)allowMenuButtonDismissal;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(BOOL)shouldShowInLockScreen;
-(NSArray *)applications;
@end

