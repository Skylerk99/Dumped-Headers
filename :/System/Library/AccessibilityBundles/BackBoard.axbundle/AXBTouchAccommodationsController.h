/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:45:26 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/BackBoard.axbundle/BackBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AXUIClientDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, AXUIClient, NSString;

@interface AXBTouchAccommodationsController : NSObject <AXUIClientDelegate> {

	BOOL _areTouchAccommodationsInEffect;
	NSObject*<OS_dispatch_queue> _touchAccommodationsQueue;
	AXUIClient* _touchAccommodationsClient;

}

@property (nonatomic,retain) AXUIClient * touchAccommodationsClient;              //@synthesize touchAccommodationsClient=_touchAccommodationsClient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)hideHoldDurationTripleClickHelp;
+(void)showHoldDurationTripleClickHelp;
+(void)initializeMonitor;
-(AXUIClient *)touchAccommodationsClient;
-(void)_registerForTouchAccommodationsAXSettingsUpdate;
-(void)_updateTouchAccommodationsSetting;
-(void)_showHoldDurationTripleClickHelp;
-(void)_hideHoldDurationTripleClickHelp;
-(void)setTouchAccommodationsClient:(AXUIClient *)arg1 ;
-(void)dealloc;
-(id)_clientIdentifier;
-(void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1 ;
@end

