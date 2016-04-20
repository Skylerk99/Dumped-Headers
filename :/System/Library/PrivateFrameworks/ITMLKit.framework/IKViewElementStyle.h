/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:52 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ITMLKit/ITMLKit-Structs.h>
@class NSString, IKCSSRule, NSArray, NSMutableDictionary, UIColor, IKColor, NSURL, NSNumber, IKFourTuple, NSShadow;

@interface IKViewElementStyle : NSObject {

	BOOL _filterBlockedStyles;
	NSString* _classDescriptorString;
	IKCSSRule* _cssRule;
	NSArray* _mediaQueryList;
	NSMutableDictionary* _styleDict;

}

@property (nonatomic,readonly) UIColor * color; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) UIColor * borderColor; 
@property (nonatomic,readonly) IKColor * ikColor; 
@property (nonatomic,readonly) IKColor * ikHighlightColor; 
@property (nonatomic,readonly) IKColor * ikBackgroundColor; 
@property (nonatomic,readonly) IKColor * ikBorderColor; 
@property (nonatomic,readonly) NSString * badgeTreatment; 
@property (nonatomic,readonly) UIEdgeInsets borderMargins; 
@property (nonatomic,readonly) UIEdgeInsets borderWidths; 
@property (nonatomic,readonly) NSString * dividerType; 
@property (nonatomic,readonly) double fontSize; 
@property (nonatomic,readonly) NSString * fontWeight; 
@property (nonatomic,readonly) long long maxTextLines; 
@property (nonatomic,readonly) unsigned long long textAlignment; 
@property (nonatomic,readonly) unsigned long long elementAlignment; 
@property (nonatomic,readonly) unsigned long long elementPosition; 
@property (nonatomic,readonly) UIEdgeInsets elementPadding; 
@property (nonatomic,readonly) UIEdgeInsets elementMargin; 
@property (nonatomic,readonly) long long columnCount; 
@property (nonatomic,readonly) NSString * columnType; 
@property (nonatomic,readonly) NSString * columnItemType; 
@property (nonatomic,readonly) NSString * rowHeight; 
@property (nonatomic,readonly) NSString * maxWidth; 
@property (nonatomic,readonly) NSString * itemWidth; 
@property (nonatomic,readonly) NSString * itemHeight; 
@property (nonatomic,readonly) IKColor * imageMaskColor; 
@property (nonatomic,readonly) NSURL * imagePlaceholderURL; 
@property (nonatomic,readonly) IKColor * imagePlaceholderBackgroundColor; 
@property (nonatomic,readonly) long long reflectImage; 
@property (nonatomic,readonly) long long fillImage; 
@property (nonatomic,readonly) unsigned long long imagePosition; 
@property (nonatomic,readonly) NSString * imageTreatment; 
@property (nonatomic,readonly) CGAffineTransform transform; 
@property (nonatomic,readonly) NSString * transition; 
@property (nonatomic,readonly) NSNumber * transitionInterval; 
@property (nonatomic,readonly) NSString * labelsState; 
@property (nonatomic,readonly) unsigned long long ordinalMaxLength; 
@property (nonatomic,readonly) NSString * lockupType; 
@property (nonatomic,readonly) NSString * visibility; 
@property (nonatomic,readonly) NSString * cardType; 
@property (nonatomic,readonly) NSString * textScale; 
@property (nonatomic,readonly) NSString * textStyle; 
@property (nonatomic,readonly) IKFourTuple * borderRadius; 
@property (nonatomic,readonly) NSShadow * textShadow; 
@property (nonatomic,readonly) NSString * maxHeight; 
@property (nonatomic,readonly) NSNumber * letterSpacing; 
@property (nonatomic,retain) IKCSSRule * cssRule;                                      //@synthesize cssRule=_cssRule - In the implementation block
@property (nonatomic,readonly) NSString * classDescriptorString; 
@property (nonatomic,retain) NSArray * mediaQueryList;                                 //@synthesize mediaQueryList=_mediaQueryList - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * styleDict;                          //@synthesize styleDict=_styleDict - In the implementation block
+(id)positionConstraintsForView:(id)arg1 insets:(UIEdgeInsets)arg2 position:(unsigned long long)arg3 ;
+(void)initialize;
+(id)elementStyleWithSelector:(id)arg1 cssRule:(id)arg2 filterBlockedStyles:(BOOL)arg3 ;
+(id)elementStyleWithSelector:(id)arg1 aggregatingStyles:(id)arg2 ;
+(id)normalizeClassSelectorString:(id)arg1 ;
+(id)registeredStyles;
+(id)registeredAliases;
+(void)registerStyle:(id)arg1 aliasName:(id)arg2 withType:(unsigned long long)arg3 inherited:(BOOL)arg4 ;
+(unsigned long long)alignmentFromString:(id)arg1 ;
+(unsigned long long)positionFromString:(id)arg1 ;
+(void)unregisterStyles;
+(void)addBlockedStyle:(id)arg1 ;
+(void)clearBlockedStyles;
+(unsigned long long)transitionFromString:(id)arg1 ;
+(unsigned long long)imageTreatmentFromString:(id)arg1 ;
+(id)elementStyleWithSelector:(id)arg1 inlineStyleString:(id)arg2 filterBlockedStyles:(BOOL)arg3 ;
+(id)elementStyleWithParentStyle:(id)arg1 elementStyle:(id)arg2 elementStyleOverrides:(id)arg3 ;
+(void)registerStyle:(id)arg1 withType:(unsigned long long)arg2 inherited:(BOOL)arg3 ;
-(UIColor *)backgroundColor;
-(NSString *)rowHeight;
-(id)description;
-(CGAffineTransform)transform;
-(unsigned long long)textAlignment;
-(NSString *)transition;
-(UIColor *)color;
-(UIColor *)borderColor;
-(NSString *)maxWidth;
-(NSString *)itemWidth;
-(NSNumber *)transitionInterval;
-(long long)columnCount;
-(NSString *)textStyle;
-(long long)fillImage;
-(double)fontSize;
-(NSString *)fontWeight;
-(NSString *)classDescriptorString;
-(NSArray *)mediaQueryList;
-(void)setMediaQueryList:(NSArray *)arg1 ;
-(NSURL *)imagePlaceholderURL;
-(unsigned long long)imagePosition;
-(long long)reflectImage;
-(id)initWithCSSRule:(id)arg1 filterBlockedStyles:(BOOL)arg2 selStr:(id)arg3 ;
-(id)initWithClassSelector:(id)arg1 ;
-(void)_addElementStyle:(id)arg1 ;
-(NSMutableDictionary *)styleDict;
-(void)_addParentStyle:(id)arg1 ;
-(IKCSSRule *)cssRule;
-(UIEdgeInsets)_edgeInsetsForStyleKey:(id)arg1 ;
-(id)_newColorFromString:(id)arg1 ;
-(id)_gradientFromString:(id)arg1 ;
-(id)initWithStyle:(id)arg1 classSelector:(id)arg2 ;
-(IKColor *)ikHighlightColor;
-(UIEdgeInsets)elementMargin;
-(NSString *)columnType;
-(NSString *)columnItemType;
-(NSString *)labelsState;
-(unsigned long long)ordinalMaxLength;
-(unsigned long long)typeForStyle:(id)arg1 ;
-(void)setCssRule:(IKCSSRule *)arg1 ;
-(void)setStyleDict:(NSMutableDictionary *)arg1 ;
-(UIEdgeInsets)borderWidths;
-(NSString *)textScale;
-(unsigned long long)elementPosition;
-(IKColor *)ikColor;
-(NSShadow *)textShadow;
-(IKColor *)ikBackgroundColor;
-(NSString *)imageTreatment;
-(id)valueForStyle:(id)arg1 ;
-(NSString *)dividerType;
-(NSString *)itemHeight;
-(IKColor *)ikBorderColor;
-(UIEdgeInsets)elementPadding;
-(NSString *)maxHeight;
-(unsigned long long)elementAlignment;
-(NSString *)badgeTreatment;
-(long long)maxTextLines;
-(IKFourTuple *)borderRadius;
-(NSString *)cardType;
-(IKColor *)imageMaskColor;
-(NSString *)visibility;
-(IKColor *)imagePlaceholderBackgroundColor;
-(UIEdgeInsets)borderMargins;
-(NSString *)lockupType;
-(NSNumber *)letterSpacing;
@end

