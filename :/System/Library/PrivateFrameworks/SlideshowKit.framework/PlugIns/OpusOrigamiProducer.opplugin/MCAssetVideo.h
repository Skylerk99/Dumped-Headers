/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:56 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCAsset.h>

@class NSMutableArray, NSSet;

@interface MCAssetVideo : MCAsset {

	NSMutableArray* mSlides;

}

@property (readonly) NSSet * slides; 
-(void)removeSlide:(id)arg1 ;
-(NSSet *)slides;
-(void)demolish;
-(BOOL)isInUse;
-(void)addSlide:(id)arg1 ;
@end

