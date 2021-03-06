/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:00 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTask.h>

@class NSArray;

@interface CoreDAVACLTask : CoreDAVTask {

	NSArray* _accessControlEntities;

}

@property (assign,nonatomic) id<CoreDAVACLTaskDelegate> delegate; 
@property (nonatomic,retain) NSArray * accessControlEntities;                  //@synthesize accessControlEntities=_accessControlEntities - In the implementation block
-(void)dealloc;
-(id)description;
-(id)initWithURL:(id)arg1 ;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)httpMethod;
-(NSArray *)accessControlEntities;
-(void)setAccessControlEntities:(NSArray *)arg1 ;
-(id)initWithAccessControlEntities:(id)arg1 atURL:(id)arg2 ;
-(id)requestBody;
@end

