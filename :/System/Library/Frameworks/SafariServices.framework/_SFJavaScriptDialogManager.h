/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:27 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface _SFJavaScriptDialogManager : NSObject {

	double _shortInterval;
	NSDate* _lastDismissalDate;
	unsigned long long _numberOfConsecutiveShortDialoglessIntervals;
	unsigned long long _allowedNumberOfConsecutiveShortDialoglessIntervals;
	BOOL _suppressing;

}
-(BOOL)mayShowDialogFromSecurityOrigin:(id)arg1 inViewController:(id)arg2 ;
-(void)didDismissDialog;
-(void)willShowDialog;
-(void)_updateShortInterval;
-(void)_accessibilityOptionsChanged:(id)arg1 ;
-(id)init;
-(void)reset;
@end

