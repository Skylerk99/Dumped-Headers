/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:37 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDColorFill.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSUColor;

@interface TSDMutableColorFill : TSDColorFill <NSCopying>

@property (nonatomic,copy) TSUColor * color; 
@property (assign,nonatomic) double opacity; 
@property (assign,nonatomic) double hue; 
@property (assign,nonatomic) double saturation; 
@property (assign,nonatomic) double brightness; 
-(void)setSaturation:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOpacity:(double)arg1 ;
-(void)setColor:(TSUColor *)arg1 ;
-(void)setBrightness:(double)arg1 ;
-(void)setHue:(double)arg1 ;
@end

