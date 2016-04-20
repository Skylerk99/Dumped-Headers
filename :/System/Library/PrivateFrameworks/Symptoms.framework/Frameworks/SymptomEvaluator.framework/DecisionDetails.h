/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:25 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSMutableArray, NSMutableDictionary;

@interface DecisionDetails : NSObject {

	NSDate* _timestamp;
	NSMutableArray* _evaluations;
	NSMutableDictionary* _additionalInfo;
	unsigned long long _reasonCode;
	char* _reason;

}

@property (nonatomic,retain) NSDate * timestamp;                                //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * evaluations;                      //@synthesize evaluations=_evaluations - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * additionalInfo;              //@synthesize additionalInfo=_additionalInfo - In the implementation block
@property (assign,nonatomic) unsigned long long reasonCode;                     //@synthesize reasonCode=_reasonCode - In the implementation block
@property (assign,nonatomic) char* reason;                                      //@synthesize reason=_reason - In the implementation block
-(void)setReason:(char*)arg1 ;
-(void)dealloc;
-(id)description;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(char*)reason;
-(NSMutableDictionary *)additionalInfo;
-(void)setAdditionalInfo:(NSMutableDictionary *)arg1 ;
-(unsigned long long)reasonCode;
-(id)initWithEvent:(id)arg1 because:(const char*)arg2 code:(unsigned long long)arg3 evaluations:(id)arg4 ;
-(NSMutableArray *)evaluations;
-(void)setEvaluations:(NSMutableArray *)arg1 ;
-(void)setReasonCode:(unsigned long long)arg1 ;
@end

