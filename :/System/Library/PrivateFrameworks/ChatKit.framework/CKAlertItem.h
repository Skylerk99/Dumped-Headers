/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:40 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@interface CKAlertItem : SBAlertItem {

	long long _alignment;
	BOOL _alignmentHasBeenSet;
	BOOL _displayingEntireMessage;
	BOOL _shouldHideSMSPreview;

}
-(id)init;
-(id)name;
-(long long)bodyTextAlignmentForAlertSheet:(id)arg1 displayedLineCount:(int)arg2 ;
-(id)messageText;
-(BOOL)shouldHideSMSPreview;
-(id)alertSheet;
-(void)_deactivateAllTaggedAlertItems;
-(void)didDeactivateForReason:(int)arg1 ;
-(Class)alertSheetClass;
-(void)_tag;
-(void)willActivate;
-(void)_untag;
-(void)_deactivateTaggedAlertItem;
-(id)_taggedAlertItems;
-(id)lockLabel;
-(BOOL)willShowInAwayItems;
-(BOOL)shouldShowInEmergencyCall;
-(BOOL)shouldShowInLockScreen;
-(BOOL)forcesModalAlertAppearance;
@end

