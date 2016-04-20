/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:23 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSTransaction.h>

@class SBApplication;

@interface SBWaitForAppActivationTransaction : BSTransaction {

	SBApplication* _application;
	BOOL _manualListener;
	BOOL _done;

}
-(void)noteActivationStateChanged:(int)arg1 ;
-(id)initWithApplication:(id)arg1 manualListener:(BOOL)arg2 ;
-(BOOL)_appStateChanged:(int)arg1 ;
-(void)_activationStateChanged:(id)arg1 ;
-(void)dealloc;
-(void)_didComplete;
-(void)_begin;
-(id)initWithApplication:(id)arg1 ;
-(id)application;
@end

