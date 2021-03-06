/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:40 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TSKSearch : NSObject {

	BOOL _isComplete;
	NSString* _string;
	unsigned long long _options;
	/*^block*/id _hitBlock;

}

@property (nonatomic,copy) NSString * string;                         //@synthesize string=_string - In the implementation block
@property (assign,nonatomic) unsigned long long options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) id hitBlock;                               //@synthesize hitBlock=_hitBlock - In the implementation block
@property (assign,nonatomic) BOOL isComplete;                         //@synthesize isComplete=_isComplete - In the implementation block
-(void)setHitBlock:(id)arg1 ;
-(void)setIsComplete:(BOOL)arg1 ;
-(id)initWithString:(id)arg1 options:(unsigned long long)arg2 hitBlock:(/*^block*/id)arg3 ;
-(id)hitBlock;
-(BOOL)isComplete;
-(void)dealloc;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(unsigned long long)options;
@end

