/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:33 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class NSMutableArray, FBSDisplayLayoutMonitor;

@interface FigCaptureDisplayLayoutMonitor : NSObject {

	OpaqueFigSimpleMutexRef _layoutObserversLock;
	NSMutableArray* _layoutObservers;
	OpaqueFigSimpleMutexRef _appsLock;
	NSMutableArray* _fullScreenApps;
	NSMutableArray* _nonFullScreenApps;
	int _globalLayoutState;
	FBSDisplayLayoutMonitor* _layoutMonitor;

}
+(id)sharedDisplayLayoutMonitor;
+(int)_openFrontBoardServicesFramework;
-(void)dealloc;
-(id)init;
-(void)addLayoutObserver:(id)arg1 ;
-(void)removeLayoutObserver:(id)arg1 ;
-(void)_updateCurrentLayout:(id)arg1 ;
-(void)_updateObserversWithForegroundApps:(id)arg1 layoutState:(int)arg2 ;
@end

