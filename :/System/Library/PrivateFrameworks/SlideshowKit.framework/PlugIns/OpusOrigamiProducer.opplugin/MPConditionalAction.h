/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:55 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MPAction.h>
#import <OpusOrigamiProducer/MPActionSupport.h>

@class NSString, MPAction;

@interface MPConditionalAction : MPAction <MPActionSupport> {

	NSString* _predicate;
	MPAction* _actionIfTrue;
	MPAction* _actionIfFalse;

}

@property (nonatomic,copy) NSString * predicate;              //@synthesize predicate=_predicate - In the implementation block
@property (readonly) MPAction * actionIfTrue;                 //@synthesize actionIfTrue=_actionIfTrue - In the implementation block
@property (readonly) MPAction * actionIfFalse;                //@synthesize actionIfFalse=_actionIfFalse - In the implementation block
+(id)conditionalAction;
-(void)setAction:(id)arg1 forCondition:(BOOL)arg2 ;
-(void)configureTarget;
-(MPAction *)actionIfTrue;
-(MPAction *)actionIfFalse;
-(void)configureActions;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAction:(id)arg1 ;
-(void)setPredicate:(NSString *)arg1 ;
-(NSString *)predicate;
@end

