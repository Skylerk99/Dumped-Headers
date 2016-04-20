/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:39 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSXPCConnection;

@interface WBSSearchHelperConnectionManager : NSObject {

	NSMutableSet* _clients;
	NSXPCConnection* _searchHelperConnection;

}

@property (nonatomic,retain) NSXPCConnection * searchHelperConnection;              //@synthesize searchHelperConnection=_searchHelperConnection - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)removeClient:(id)arg1 ;
-(id)searchHelperConnectionRequestedByClient:(id)arg1 ;
-(void)setSearchHelperConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)searchHelperConnection;
@end

