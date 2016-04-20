/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:59 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVActionBackedTask.h>

@class NSString;

@interface CoreDAVDeleteTask : CoreDAVActionBackedTask {

	NSString* _previousETag;

}

@property (assign,nonatomic) id<CoreDAVTaskDelegate> delegate; 
@property (nonatomic,retain) NSString * previousETag;                       //@synthesize previousETag=_previousETag - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)previousETag;
-(void)setPreviousETag:(NSString *)arg1 ;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)httpMethod;
-(id)additionalHeaderValues;
-(id)requestBody;
@end

