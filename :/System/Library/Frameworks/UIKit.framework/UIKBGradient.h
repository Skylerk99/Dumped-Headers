/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:17 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface UIKBGradient : NSObject <NSCopying> {

	NSString* _gradientName;
	NSString* _flatColorName;
	NSString* _startColorName;
	NSString* _endColorName;
	NSArray* _colors;
	double _middleLocation;
	double _opacity;
	BOOL _horizontal;
	BOOL _usesRGBColors;
	BOOL _didQueryRGBColors;

}

@property (assign,nonatomic) double opacity;                    //@synthesize opacity=_opacity - In the implementation block
@property (assign,nonatomic) BOOL horizontal;                   //@synthesize horizontal=_horizontal - In the implementation block
@property (nonatomic,readonly) BOOL usesRGBColors; 
+(id)gradientWithFlatColor:(id)arg1 ;
+(id)gradientWith3Colors:(id)arg1 middleLocation:(double)arg2 ;
+(id)gradientWithStartColor:(id)arg1 endColor:(id)arg2 ;
+(id)gradientWithName:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(void)setHorizontal:(BOOL)arg1 ;
-(id)initWithName:(id)arg1 ;
-(BOOL)horizontal;
-(CGGradientRef)CGGradient;
-(id)initWithFlatColor:(id)arg1 ;
-(id)initWithStartColor:(id)arg1 endColor:(id)arg2 ;
-(id)initWith3Colors:(id)arg1 middleLocation:(double)arg2 ;
-(BOOL)usesRGBColors;
@end

