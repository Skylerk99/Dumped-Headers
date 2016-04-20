/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:45 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@interface DCManagedUpload : NSManagedObject
+(id)entityName;
+(id)uploadForPath:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)temporaryUploadFileURLForItemAtPath:(id)arg1 generationIdentifier:(id)arg2 ;
+(id)saveUploadWithPath:(id)arg1 fileURL:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(id)uploadForTaskIdentifier:(long long)arg1 sessionIdentifier:(id)arg2 inManagedObjectContext:(id)arg3 ;
-(void)markAsCancelled;
-(void)resetAndIncrementNumberOfRetries;
-(void)removeTemporaryUploadFileIfNecessary;
@end

