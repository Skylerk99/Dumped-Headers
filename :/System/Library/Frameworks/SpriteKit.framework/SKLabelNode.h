/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:35 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>

@class NSString, UIColor;

@interface SKLabelNode : SKNode {

	SKCLabelNode* _skcLabelNode;

}

@property (assign,nonatomic) long long verticalAlignmentMode; 
@property (assign,nonatomic) long long horizontalAlignmentMode; 
@property (nonatomic,copy) NSString * fontName; 
@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) double fontSize; 
@property (nonatomic,retain) UIColor * fontColor; 
@property (assign,nonatomic) double colorBlendFactor; 
@property (nonatomic,retain) UIColor * color; 
@property (assign,nonatomic) long long blendMode; 
+(id)_labelNodeWithFontNamed:(id)arg1 ;
+(id)_labelNodeWithFontTexture:(id)arg1 fontDataString:(id)arg2 ;
+(id)labelNodeWithFontNamed:(id)arg1 ;
+(id)labelNodeWithText:(id)arg1 ;
-(id)_getTextSprites;
-(void)setFont:(CTFontRef)arg1 ;
-(SKCNode*)_makeBackingNode;
-(void)_didMakeBackingNode;
-(BOOL)isEqualToNode:(id)arg1 ;
-(void)setColorBlendFactor:(double)arg1 ;
-(double)colorBlendFactor;
-(long long)horizontalAlignmentMode;
-(long long)verticalAlignmentMode;
-(void)setHorizontalAlignmentMode:(long long)arg1 ;
-(void)setVerticalAlignmentMode:(long long)arg1 ;
-(id)initWithFontNamed:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(CGRect)frame;
-(id)description;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UIColor *)color;
-(NSString *)fontName;
-(void)setColor:(UIColor *)arg1 ;
-(void)setFontSize:(double)arg1 ;
-(void)setFontName:(NSString *)arg1 ;
-(double)fontSize;
-(void)_initialize;
-(void)setBlendMode:(long long)arg1 ;
-(long long)blendMode;
-(UIColor *)fontColor;
-(void)setFontColor:(UIColor *)arg1 ;
@end

