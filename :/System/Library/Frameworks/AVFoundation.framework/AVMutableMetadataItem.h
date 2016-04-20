/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:41 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVMetadataItem.h>

@class AVMutableMetadataItemInternal, NSString, NSLocale, NSDictionary;

@interface AVMutableMetadataItem : AVMetadataItem {

	AVMutableMetadataItemInternal* _mutablePriv;

}

@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * extendedLanguageTag; 
@property (nonatomic,copy) NSLocale * locale; 
@property (assign,nonatomic) SCD_Struct_CM5 time; 
@property (assign,nonatomic) SCD_Struct_CM5 duration; 
@property (nonatomic,copy) NSString * dataType; 
@property (nonatomic,copy) id<NSObject><NSCopying> value; 
@property (nonatomic,copy) NSDictionary * extraAttributes; 
+(id)metadataItem;
+(id)keyPathsForValuesAffectingIdentifier;
-(void)setExtraAttributes:(NSDictionary *)arg1 ;
-(void)setExtendedLanguageTag:(NSString *)arg1 ;
-(id)keySpace;
-(NSDictionary *)extraAttributes;
-(NSString *)extendedLanguageTag;
-(id)startDate;
-(SCD_Struct_CM5)duration;
-(id)key;
-(NSString *)identifier;
-(void)setDuration:(SCD_Struct_CM5)arg1 ;
-(id<NSObject><NSCopying>)value;
-(void)setValue:(id<NSObject><NSCopying>)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(void)setTime:(SCD_Struct_CM5)arg1 ;
-(SCD_Struct_CM5)time;
-(NSLocale *)locale;
-(void)setKey:(id)arg1 ;
-(id)languageCode;
-(void)setDataType:(NSString *)arg1 ;
-(NSString *)dataType;
-(void)setKeySpace:(id)arg1 ;
-(void)setStartDate:(id)arg1 ;
@end

