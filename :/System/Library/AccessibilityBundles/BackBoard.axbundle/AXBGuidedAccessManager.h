/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:45:26 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/BackBoard.axbundle/BackBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AXBGuidedAccessManager : NSObject {

	id _notificationToken;
	id _guidedAccessServer;

}
+(BOOL)allowsTripleClickSheet;
+(BOOL)inGuidedAccess;
+(void)initializeMonitor;
-(id)_guidedAccessServer;
-(void)_loadBackboardServerBundle;
-(void)dealloc;
-(id)init;
@end

