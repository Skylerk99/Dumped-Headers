/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/XPCClient.h>

@class NSSet, NSMutableDictionary;

@interface ErrorHandlerClient : XPCClient {

	NSSet* _failureTypes;
	NSMutableDictionary* _sessions;

}

@property (copy) NSSet * failureTypes; 
-(id)popAllSessions;
-(id)popSessionWithIdentifier:(long long)arg1 ;
-(void)dealloc;
-(void)addSession:(id)arg1 ;
-(NSSet *)failureTypes;
-(void)setFailureTypes:(NSSet *)arg1 ;
@end

