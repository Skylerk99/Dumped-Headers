/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:15 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BLTPingSubscribing.h>

@class NSXPCConnection, NSString;

@interface BLTSubscriberRemoteClient : NSObject <BLTPingSubscribing> {

	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2 ;
-(void)pingWithBulletin:(id)arg1 ;
-(id)sectionIDs;
-(id)sectionIDsForPings;
-(id)sectionIDsForBulletins;
-(void)pingSubscriberDidLoad;
-(id)initWithConnection:(id)arg1 ;
@end

