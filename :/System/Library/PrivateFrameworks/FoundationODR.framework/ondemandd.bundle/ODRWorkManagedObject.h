/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:34 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FoundationODR.framework/ondemandd.bundle/ondemandd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@protocol OS_os_transaction;
@class NSObject, NSString, NSData, NSDictionary;

@interface ODRWorkManagedObject : NSManagedObject {

	NSObject*<OS_os_transaction> transaction;

}

@property (nonatomic,retain) NSString * type; 
@property (nonatomic,retain) NSData * contextData; 
@property (nonatomic,retain) NSString * bundleID; 
@property (nonatomic,retain) NSDictionary * context; 
@property (nonatomic,retain) NSObject*<OS_os_transaction> transaction; 
-(void)markAsCompleted;
-(NSObject*<OS_os_transaction>)transaction;
-(id)description;
-(NSDictionary *)context;
-(void)start;
-(void)setContext:(NSDictionary *)arg1 ;
-(void)setTransaction:(NSObject*<OS_os_transaction>)arg1 ;
@end

