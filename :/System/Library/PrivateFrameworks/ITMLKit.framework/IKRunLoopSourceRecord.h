/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:52 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IKRunLoopSourceRecord : NSObject {

	/*^block*/id _evaluateBlock;
	/*^block*/id _completionBlock;

}

@property (nonatomic,copy) id evaluateBlock;                //@synthesize evaluateBlock=_evaluateBlock - In the implementation block
@property (nonatomic,copy) id completionBlock;              //@synthesize completionBlock=_completionBlock - In the implementation block
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(id)initWithEvaluateBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)evaluateBlock;
-(void)setEvaluateBlock:(id)arg1 ;
@end

