/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:19 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IKAppContextDelegate <NSObject>
@optional
-(void)appContextNeedsRestart:(id)arg1;
-(void)appContext:(id)arg1 needsReloadWithUrgency:(unsigned long long)arg2;
-(id)navigationControllerForContext:(id)arg1;
-(id)tabBarForContext:(id)arg1;
-(id)modalControllerForContext:(id)arg1;
-(id)objectForPlayer:(id)arg1;
-(id)objectForPlaylist:(id)arg1;
-(id)objectForMediaItem:(id)arg1;
-(void)appContext:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;
-(BOOL)appContext:(id)arg1 validateDOMDocument:(id)arg2 inContext:(id)arg3 error:(id*)arg4;
-(void)appContext:(id)arg1 didStartWithOptions:(id)arg2;
-(void)appContext:(id)arg1 didFailWithError:(id)arg2;
-(void)appContext:(id)arg1 didStopWithOptions:(id)arg2;

@required
-(id)deviceConfigForContext:(id)arg1;

@end

