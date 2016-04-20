/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:49 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface KNAnimationAttributes : NSObject <NSCopying> {

	NSString* mEffect;
	NSDictionary* mAttributes;

}

@property (nonatomic,readonly) NSString * effect; 
@property (nonatomic,readonly) NSDictionary * attributes; 
+(id)supportedCustomAttributes;
+(id)attributesWithEffect:(id)arg1 attributes:(id)arg2 ;
+(BOOL)customAttributeKeyIsValid:(id)arg1 ;
-(id)attributesByAddingAttributesFromDictionary:(id)arg1 ;
-(id)valueForAttributeKey:(id)arg1 ;
-(id)initWithEffect:(id)arg1 attributes:(id)arg2 ;
-(id)attributesBySettingValue:(id)arg1 forAttributeKey:(id)arg2 ;
-(BOOL)containsAttributeForKey:(id)arg1 ;
-(id)attributesAdjustedForTheme:(id)arg1 ;
-(id)p_curveForNameKey:(id)arg1 forTheme:(id)arg2 ;
-(id)attributesByChangingEffectToEffect:(id)arg1 ;
-(id)attributesByAddingMissingAttributesFromDictionary:(id)arg1 ;
-(id)attributesByRemovingAttributeForKey:(id)arg1 ;
-(id)attributesByUpdatingThemeCurveNamesWithOldToNewCurveNameMap:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)effect;
-(NSDictionary *)attributes;
@end

