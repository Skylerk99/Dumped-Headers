/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:43 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPUFontDescriptor, MPUTextDrawingCache, NSMutableArray, UIColor, NSString, NSSet, UIImage;

@interface MusicEntityViewContentTextDescriptor : NSObject <NSCopying> {

	MPUFontDescriptor* _fontDescriptor;
	double _maximumHeight;
	BOOL _needsTextAttributesUpdate;
	double _scaledFirstBaselineOffset;
	double _tallestFontAscender;
	double _tallestFontBodyLeading;
	double _tallestFontCapHeight;
	double _tallestFontDescender;
	MPUTextDrawingCache* _textDrawingCache;
	NSMutableArray* _controlTargetActions;
	BOOL _textColorFollowsTintColor;
	BOOL _useTextFallbackForEmptyString;
	BOOL _shouldBaselineAlignTrailingAccessoryImage;
	long long _backdropOverlayBlendMode;
	UIColor* _backgroundColor;
	double _defaultFirstBaselineOffset;
	double _lineHeightMultiple;
	double _lineSpacing;
	long long _lineBreakMode;
	long long _maximumNumberOfLines;
	long long _maximumTextLengthForInput;
	long long _textAlignment;
	UIColor* _textColor;
	UIColor* _tintColor;
	NSString* _textPlaceholder;
	UIColor* _textPlaceholderColor;
	double _displayScale;
	NSString* _textValueProperty;
	NSString* _textValueFallbackLocalizationKey;
	/*^block*/id _textProvider;
	NSSet* _textProviderAdditionalPropertiesToPrefetch;
	/*^block*/id _attributedTextProvider;
	UIImage* _trailingAccessoryImage;
	long long _tag;
	UIOffset _trailingAccessoryOffset;

}

@property (assign,nonatomic) long long backdropOverlayBlendMode;                            //@synthesize backdropOverlayBlendMode=_backdropOverlayBlendMode - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                     //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) double defaultFirstBaselineOffset;                             //@synthesize defaultFirstBaselineOffset=_defaultFirstBaselineOffset - In the implementation block
@property (assign,nonatomic) double lineHeightMultiple;                                     //@synthesize lineHeightMultiple=_lineHeightMultiple - In the implementation block
@property (assign,nonatomic) double lineSpacing;                                            //@synthesize lineSpacing=_lineSpacing - In the implementation block
@property (nonatomic,copy) MPUFontDescriptor * fontDescriptor; 
@property (assign,nonatomic) long long lineBreakMode;                                       //@synthesize lineBreakMode=_lineBreakMode - In the implementation block
@property (assign,nonatomic) long long maximumNumberOfLines;                                //@synthesize maximumNumberOfLines=_maximumNumberOfLines - In the implementation block
@property (assign,nonatomic) long long maximumTextLengthForInput;                           //@synthesize maximumTextLengthForInput=_maximumTextLengthForInput - In the implementation block
@property (assign,nonatomic) long long textAlignment;                                       //@synthesize textAlignment=_textAlignment - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                           //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) BOOL textColorFollowsTintColor;                                //@synthesize textColorFollowsTintColor=_textColorFollowsTintColor - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                                           //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,copy) NSString * textPlaceholder;                                      //@synthesize textPlaceholder=_textPlaceholder - In the implementation block
@property (nonatomic,retain) UIColor * textPlaceholderColor;                                //@synthesize textPlaceholderColor=_textPlaceholderColor - In the implementation block
@property (assign,nonatomic) double displayScale;                                           //@synthesize displayScale=_displayScale - In the implementation block
@property (nonatomic,copy) NSString * textValueProperty;                                    //@synthesize textValueProperty=_textValueProperty - In the implementation block
@property (nonatomic,copy) NSString * textValueFallbackLocalizationKey;                     //@synthesize textValueFallbackLocalizationKey=_textValueFallbackLocalizationKey - In the implementation block
@property (assign,nonatomic) BOOL useTextFallbackForEmptyString;                            //@synthesize useTextFallbackForEmptyString=_useTextFallbackForEmptyString - In the implementation block
@property (nonatomic,copy) id textProvider;                                                 //@synthesize textProvider=_textProvider - In the implementation block
@property (nonatomic,copy) NSSet * textProviderAdditionalPropertiesToPrefetch;              //@synthesize textProviderAdditionalPropertiesToPrefetch=_textProviderAdditionalPropertiesToPrefetch - In the implementation block
@property (nonatomic,copy) id attributedTextProvider;                                       //@synthesize attributedTextProvider=_attributedTextProvider - In the implementation block
@property (nonatomic,readonly) BOOL hasControlBehaviors; 
@property (nonatomic,readonly) unsigned long long allControlEvents; 
@property (nonatomic,readonly) NSSet * allTargets; 
@property (assign,nonatomic) BOOL shouldBaselineAlignTrailingAccessoryImage;                //@synthesize shouldBaselineAlignTrailingAccessoryImage=_shouldBaselineAlignTrailingAccessoryImage - In the implementation block
@property (nonatomic,retain) UIImage * trailingAccessoryImage;                              //@synthesize trailingAccessoryImage=_trailingAccessoryImage - In the implementation block
@property (assign,nonatomic) UIOffset trailingAccessoryOffset;                              //@synthesize trailingAccessoryOffset=_trailingAccessoryOffset - In the implementation block
@property (nonatomic,readonly) MPUTextDrawingCache * textDrawingCache; 
@property (nonatomic,readonly) double maximumHeight; 
@property (nonatomic,readonly) double scaledFirstBaselineOffset; 
@property (nonatomic,readonly) double tallestFontAscender; 
@property (nonatomic,readonly) double tallestFontBodyLeading; 
@property (nonatomic,readonly) double tallestFontCapHeight; 
@property (nonatomic,readonly) double tallestFontDescender; 
@property (assign,nonatomic) long long tag;                                                 //@synthesize tag=_tag - In the implementation block
-(double)maximumHeight;
-(void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(id)init;
-(void)setTextAlignment:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setLineBreakMode:(long long)arg1 ;
-(void)setMaximumNumberOfLines:(long long)arg1 ;
-(double)displayScale;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(long long)tag;
-(void)setTag:(long long)arg1 ;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3 ;
-(NSSet *)allTargets;
-(unsigned long long)allControlEvents;
-(id)actionsForTarget:(id)arg1 forControlEvent:(unsigned long long)arg2 ;
-(UIColor *)textColor;
-(long long)textAlignment;
-(long long)lineBreakMode;
-(double)lineSpacing;
-(void)setLineSpacing:(double)arg1 ;
-(MPUFontDescriptor *)fontDescriptor;
-(long long)maximumNumberOfLines;
-(double)scaledFirstBaselineOffset;
-(double)tallestFontAscender;
-(double)tallestFontBodyLeading;
-(id)textForEntityValueProvider:(id)arg1 ;
-(MPUTextDrawingCache *)textDrawingCache;
-(BOOL)hasControlBehaviors;
-(void)setFontDescriptor:(MPUFontDescriptor *)arg1 ;
-(void)setTextValueProperty:(NSString *)arg1 ;
-(void)setUseTextFallbackForEmptyString:(BOOL)arg1 ;
-(void)setTextValueFallbackLocalizationKey:(NSString *)arg1 ;
-(void)setBackdropOverlayBlendMode:(long long)arg1 ;
-(void)setTextProvider:(id)arg1 ;
-(void)setTextProviderAdditionalPropertiesToPrefetch:(NSSet *)arg1 ;
-(UIImage *)trailingAccessoryImage;
-(BOOL)shouldBaselineAlignTrailingAccessoryImage;
-(void)setShouldBaselineAlignTrailingAccessoryImage:(BOOL)arg1 ;
-(UIOffset)trailingAccessoryOffset;
-(double)tallestFontScaledValueForValue:(double)arg1 ;
-(void)setTrailingAccessoryOffset:(UIOffset)arg1 ;
-(double)tallestFontDescender;
-(double)tallestFontCapHeight;
-(void)setDefaultFirstBaselineOffset:(double)arg1 ;
-(void)setTrailingAccessoryImage:(UIImage *)arg1 ;
-(void)setTextPlaceholderColor:(UIColor *)arg1 ;
-(void)setTextPlaceholder:(NSString *)arg1 ;
-(void)setMaximumTextLengthForInput:(long long)arg1 ;
-(NSString *)textValueProperty;
-(NSSet *)textProviderAdditionalPropertiesToPrefetch;
-(void)updateForPreferredContentSizeChange;
-(id)_tallestFont;
-(void)_updateTextAttributes;
-(long long)backdropOverlayBlendMode;
-(double)defaultFirstBaselineOffset;
-(double)lineHeightMultiple;
-(long long)maximumTextLengthForInput;
-(NSString *)textPlaceholder;
-(UIColor *)textPlaceholderColor;
-(NSString *)textValueFallbackLocalizationKey;
-(BOOL)useTextFallbackForEmptyString;
-(id)textProvider;
-(id)attributedTextProvider;
-(void)setAttributedTextProvider:(id)arg1 ;
-(void)setLineHeightMultiple:(double)arg1 ;
-(void)setTextColorFollowsTintColor:(BOOL)arg1 ;
-(void)setDisplayScale:(double)arg1 ;
-(BOOL)textColorFollowsTintColor;
@end

