/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:57 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/TSDBrushStroke.h>

@class UIColor, NSString;

@interface TSDMutableBrushStroke : TSDBrushStroke {

	int join;
	UIColor* color;
	double width;
	double miterLimit;
	NSString* strokeName;

}

@property (nonatomic,retain) UIColor * color; 
@property (assign,nonatomic) double width; 
@property (assign,nonatomic) int join; 
@property (assign,nonatomic) double miterLimit; 
@property (nonatomic,copy) NSString * strokeName; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)miterLimit;
-(void)setMiterLimit:(double)arg1 ;
-(double)width;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)setWidth:(double)arg1 ;
-(NSString *)strokeName;
-(void)setStrokeName:(NSString *)arg1 ;
-(void)setJoin:(int)arg1 ;
-(int)join;
@end

