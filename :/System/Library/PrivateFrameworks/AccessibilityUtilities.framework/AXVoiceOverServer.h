/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:50 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUtilities/AXServer.h>

@interface AXVoiceOverServer : AXServer
+(id)server;
-(BOOL)_connectIfNecessary;
-(id)_serviceName;
-(id)lastSpokenPhrases;
-(id)lastSoundsPlayed;
-(id)currentRotorName;
-(id)lastScreenChange;
-(id)currentFocusedElement;
-(BOOL)triggerCommand:(int)arg1 ;
-(BOOL)triggerCommand:(int)arg1 withArgument:(id)arg2 ;
-(BOOL)isBrailleInputUIShowing;
@end

