/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:00 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSError;


@protocol CoreDAVSubmittable <NSObject>
@property (nonatomic,copy) id completionBlock; 
@property (assign,nonatomic) id<CoreDAVTaskManager> taskManager; 
@property (assign,nonatomic) id<CoreDAVAccountInfoProvider> accountInfoProvider; 
@property (nonatomic,readonly) NSError * error; 
@property (assign,nonatomic) double timeoutInterval; 
@required
-(NSError *)error;
-(id)completionBlock;
-(void)setCompletionBlock:(/*^block*/id)arg1;
-(void)setAccountInfoProvider:(id)arg1;
-(id<CoreDAVAccountInfoProvider>)accountInfoProvider;
-(void)submitWithTaskManager:(id)arg1;
-(void)finishEarlyWithError:(id)arg1;
-(id<CoreDAVTaskManager>)taskManager;
-(void)setTaskManager:(id)arg1;
-(void)setTimeoutInterval:(double)arg1;
-(double)timeoutInterval;

@end

