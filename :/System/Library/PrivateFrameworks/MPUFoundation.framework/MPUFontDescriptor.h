/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:00 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface MPUFontDescriptor : NSObject <NSCopying, NSMutableCopying> {

	long long _leadingAdjustment;
	long long _textStyle;
	BOOL _usesItalic;
	BOOL _wantsMonospaceNumbers;
	long long _weight;

}

@property (nonatomic,readonly) long long textStyle;                      //@synthesize textStyle=_textStyle - In the implementation block
@property (nonatomic,readonly) long long weight;                         //@synthesize weight=_weight - In the implementation block
@property (nonatomic,readonly) long long leadingAdjustment;              //@synthesize leadingAdjustment=_leadingAdjustment - In the implementation block
@property (nonatomic,readonly) BOOL usesItalic;                          //@synthesize usesItalic=_usesItalic - In the implementation block
@property (nonatomic,readonly) BOOL wantsMonospaceNumbers;               //@synthesize wantsMonospaceNumbers=_wantsMonospaceNumbers - In the implementation block
+(id)fontDescriptorWithTextStyle:(long long)arg1 weight:(long long)arg2 ;
+(id)fontDescriptorWithTextStyle:(long long)arg1 ;
+(id)fontDescriptorWithTextStyle:(long long)arg1 leadingAdjustment:(long long)arg2 ;
+(id)_baseNativeTextStyleForTextStyle:(long long)arg1 ;
+(id)_adjustedNativeFontDescriptorWithBaseNativeFontDescriptor:(id)arg1 forCustomTextStyle:(long long)arg2 ;
+(void)_getNativeFontDescriptorSymbolicTraits:(unsigned*)arg1 nativeTextStyleAttribute:(id*)arg2 forWeight:(long long)arg3 ;
+(unsigned)_nativeFontDescriptorSymbolicTraitsForLeadingAdjustment:(long long)arg1 ;
+(unsigned)_nativeFontDescriptorSymbolicTraitsForUsingItalic:(BOOL)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)defaultFont;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(long long)textStyle;
-(long long)weight;
-(id)preferredFont;
-(double)scaledValueForValue:(double)arg1 ;
-(id)_fontWithBaseNativeFontDescriptorProvider:(/*^block*/id)arg1 ;
-(long long)leadingAdjustment;
-(BOOL)usesItalic;
-(BOOL)wantsMonospaceNumbers;
@end

