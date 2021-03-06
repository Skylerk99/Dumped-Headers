/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:45:59 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/StickyKeys.axuiservice/StickyKeys
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AXUIService.h>

@class AXStickyKeysViewController, NSString;

@interface AXStickyKeysUIServer : NSObject <AXUIService> {

	AXStickyKeysViewController* _stickyKeysViewController;

}

@property (nonatomic,retain) AXStickyKeysViewController * stickyKeysViewController;              //@synthesize stickyKeysViewController=_stickyKeysViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setStickyKeysViewController:(AXStickyKeysViewController *)arg1 ;
-(AXStickyKeysViewController *)stickyKeysViewController;
-(void)_handleStickyKeysToggledViaShift;
-(void)_showUIIfNeeded;
-(void)_handleStickyKeyUpdatedWithKeycode:(unsigned short)arg1 usagePage:(unsigned)arg2 state:(long long)arg3 ;
-(void)_playSoundForState:(long long)arg1 ;
-(void)_handleStickyKeysDisabled;
-(id)processMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 fromClientWithIdentifier:(id)arg3 error:(id*)arg4 ;
@end

