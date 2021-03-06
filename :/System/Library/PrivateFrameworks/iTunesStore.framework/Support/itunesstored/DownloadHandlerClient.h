/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:07 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/XPCClient.h>

@class NSMutableSet, NSSet;

@interface DownloadHandlerClient : XPCClient {

	NSMutableSet* _disavowedSessionProperties;
	NSSet* _downloadPhasesToIgnore;
	long long _handlerIdentifier;
	BOOL _sessionsNeedPowerAssertion;
	BOOL _sessionsShouldBlockOtherDownloads;

}

@property (assign) long long handlerIdentifier; 
@property (readonly) NSSet * disavowedSessionProperties; 
@property (copy) NSSet * downloadPhasesToIgnore; 
@property (assign) BOOL sessionsNeedPowerAssertion; 
@property (assign) BOOL sessionsShouldBlockOtherDownloads; 
-(id)initWithInputConnection:(id)arg1 ;
-(void)addDisavowedSessionProperties:(id)arg1 ;
-(NSSet *)disavowedSessionProperties;
-(id)resetDisavowedSessionProperties;
-(void)setHandlerIdentifier:(long long)arg1 ;
-(void)setDownloadPhasesToIgnore:(NSSet *)arg1 ;
-(void)setSessionsNeedPowerAssertion:(BOOL)arg1 ;
-(void)setSessionsShouldBlockOtherDownloads:(BOOL)arg1 ;
-(long long)handlerIdentifier;
-(void)dealloc;
-(id)description;
-(NSSet *)downloadPhasesToIgnore;
-(BOOL)sessionsNeedPowerAssertion;
-(BOOL)sessionsShouldBlockOtherDownloads;
@end

