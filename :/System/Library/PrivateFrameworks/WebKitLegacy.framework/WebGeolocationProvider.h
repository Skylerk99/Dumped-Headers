/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:00 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WebGeolocationProvider <NSObject>
@required
-(void)registerWebView:(id)arg1;
-(void)unregisterWebView:(id)arg1;
-(void)setEnableHighAccuracy:(BOOL)arg1;
-(void)initializeGeolocationForWebView:(id)arg1 listener:(id)arg2;
-(id)lastPosition;
-(void)stopTrackingWebView:(id)arg1;

@end

