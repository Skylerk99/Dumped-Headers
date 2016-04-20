/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:57 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MZEffectTiming
@property (nonatomic,readonly) double phaseInDuration; 
@property (nonatomic,readonly) double mainDuration; 
@property (nonatomic,readonly) double phaseOutDuration; 
@optional
-(unsigned long long)effectAuthoredSlideCount;
-(void)setMultiImageSlideRange:(NSRange)arg1;
-(id)effectAuthoredAttributes;
-(NSRange*)multiImageSlideRange;
-(void)appendSlideInformation:(id)arg1 andTextInformation:(id)arg2;

@required
-(double)lowestDisplayTime;
-(double)displayTimeForSlideAtIndex:(unsigned long long)arg1;
-(double)showTimeForSlideAtIndex:(unsigned long long)arg1;
-(double)showDurationForSlideAtIndex:(unsigned long long)arg1;
-(double)mainDuration;
-(double)phaseInDuration;
-(void)setPhaseInDuration:(double)arg1 mainDuration:(double)arg2 phaseOutDuration:(double)arg3;
-(double)phaseOutDuration;
-(double)displayTimeForTextAtIndex:(unsigned long long)arg1;

@end

