/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:56 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCAction.h>
#import <OpusOrigamiProducer/MCTransitionTrigger.h>

@class NSMutableDictionary, NSString, NSDictionary;

@interface MCTransitionTrigger : MCAction <MCTransitionTrigger> {

	NSMutableDictionary* _transitionAttributes;
	NSString* _transitionID;
	double _transitionDuration;
	NSString* _transitionDestinationPlugID;

}

@property (copy) NSString * transitionDestinationPlugID;                     //@synthesize transitionDestinationPlugID=_transitionDestinationPlugID - In the implementation block
@property (copy) NSString * transitionID;                                    //@synthesize transitionID=_transitionID - In the implementation block
@property (assign,nonatomic) double transitionDuration;                      //@synthesize transitionDuration=_transitionDuration - In the implementation block
@property (nonatomic,copy) NSDictionary * transitionAttributes;              //@synthesize transitionAttributes=_transitionAttributes - In the implementation block
+(id)transitionForTargetPlugObjectID:(id)arg1 withTransitionID:(id)arg2 ;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(NSString *)transitionDestinationPlugID;
-(id)initWithImprint:(id)arg1 ;
-(void)setTransitionDestinationPlugID:(NSString *)arg1 ;
-(void)demolish;
-(NSString *)transitionID;
-(void)setTransitionID:(NSString *)arg1 ;
-(void)setTransitionAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)transitionAttributes;
-(id)description;
-(double)transitionDuration;
-(void)setTransitionDuration:(double)arg1 ;
-(id)imprint;
@end

