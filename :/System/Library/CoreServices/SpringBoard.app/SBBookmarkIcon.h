/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:21 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBLeafIcon.h>

@class SBBookmark, UIWebClip, NSURL;

@interface SBBookmarkIcon : SBLeafIcon {

	SBBookmark* _bookmark;

}

@property (nonatomic,retain,readonly) SBBookmark * bookmark;              //@synthesize bookmark=_bookmark - In the implementation block
@property (nonatomic,retain,readonly) UIWebClip * webClip; 
@property (nonatomic,retain,readonly) NSURL * launchURL; 
-(id)folderTitleOptions;
-(id)folderFallbackTitle;
-(id)matchedWebApplication;
-(BOOL)isBookmarkIcon;
-(id)initWithBookmark:(id)arg1 ;
-(id)uninstallAlertTitle;
-(id)uninstallAlertBody;
-(id)uninstallAlertConfirmTitle;
-(id)uninstallAlertCancelTitle;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SBBookmark *)bookmark;
-(UIWebClip *)webClip;
-(NSURL *)launchURL;
@end

