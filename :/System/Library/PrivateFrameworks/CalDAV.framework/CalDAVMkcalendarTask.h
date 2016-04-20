/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:16 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTask.h>

@class NSSet;

@interface CalDAVMkcalendarTask : CoreDAVTask {

	NSSet* _setElements;

}

@property (assign,nonatomic) id<CalDAVMkcalendarTaskDelegate><CoreDAVTaskDelegate> delegate; 
@property (nonatomic,retain) NSSet * setElements;                                                         //@synthesize setElements=_setElements - In the implementation block
-(id)description;
-(id)initWithURL:(id)arg1 ;
-(id)initWithPropertiesToSet:(id)arg1 atURL:(id)arg2 ;
-(void)setSupportForEvents:(BOOL)arg1 tasks:(BOOL)arg2 ;
-(void)setSetElements:(NSSet *)arg1 ;
-(NSSet *)setElements;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(id)httpMethod;
-(id)requestBody;
@end

