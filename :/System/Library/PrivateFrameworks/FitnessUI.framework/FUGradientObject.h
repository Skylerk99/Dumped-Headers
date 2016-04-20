/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:33 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface FUGradientObject : NSObject {

	NSArray* _colors;
	NSArray* _locations;

}

@property (nonatomic,readonly) NSArray * colors;                 //@synthesize colors=_colors - In the implementation block
@property (nonatomic,readonly) NSArray * locations;              //@synthesize locations=_locations - In the implementation block
+(id)gradientWithColors:(id)arg1 locations:(id)arg2 ;
+(id)gradientWithTopColor:(id)arg1 bottomColor:(id)arg2 ;
-(NSArray *)colors;
-(id)initWithColors:(id)arg1 locations:(id)arg2 ;
-(NSArray *)locations;
@end

