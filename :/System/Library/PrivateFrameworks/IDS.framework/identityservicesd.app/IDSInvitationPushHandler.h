/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:40 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/IDSPushHandlerDelegate.h>

@class NSMutableArray, NSArray, NSData, NSString;

@interface IDSInvitationPushHandler : NSObject <IDSPushHandlerDelegate> {

	NSMutableArray* _handlers;
	NSArray* _topics;
	BOOL _registeredForPush;
	BOOL _isListening;

}

@property (nonatomic,readonly) NSData * pushToken; 
@property (assign,nonatomic) BOOL registered; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)commandToHandlerBlock;
-(BOOL)registered;
-(void)setRegistered:(BOOL)arg1 ;
-(void)dealloc;
-(id)initWithTopics:(id)arg1 ;
-(id)_pushTopics;
-(id)copyHandlersForEnumerating;
-(void)_updateListenerIfNeeded;
-(void)_acceptIncomingPushes;
-(void)_ignoreIncomingPushes;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(NSData *)pushToken;
-(void)handler:(id)arg1 didReceiveMessage:(id)arg2 forTopic:(id)arg3 fromID:(id)arg4 messageContext:(id)arg5 ;
@end

