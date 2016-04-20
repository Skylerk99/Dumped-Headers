/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:49 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface CKDPLocale : PBCodable <NSCopying> {

	NSString* _activeKeyboard;
	NSMutableArray* _enabledKeyboards;
	NSString* _languageCode;
	NSString* _regionCode;

}

@property (nonatomic,readonly) BOOL hasLanguageCode; 
@property (nonatomic,retain) NSString * languageCode;                        //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,readonly) BOOL hasRegionCode; 
@property (nonatomic,retain) NSString * regionCode;                          //@synthesize regionCode=_regionCode - In the implementation block
@property (nonatomic,retain) NSMutableArray * enabledKeyboards;              //@synthesize enabledKeyboards=_enabledKeyboards - In the implementation block
@property (nonatomic,readonly) BOOL hasActiveKeyboard; 
@property (nonatomic,retain) NSString * activeKeyboard;                      //@synthesize activeKeyboard=_activeKeyboard - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)activeKeyboard;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)languageCode;
-(NSString *)regionCode;
-(void)setRegionCode:(NSString *)arg1 ;
-(NSMutableArray *)enabledKeyboards;
-(void)addEnabledKeyboards:(id)arg1 ;
-(unsigned long long)enabledKeyboardsCount;
-(void)clearEnabledKeyboards;
-(id)enabledKeyboardsAtIndex:(unsigned long long)arg1 ;
-(void)setActiveKeyboard:(NSString *)arg1 ;
-(BOOL)hasRegionCode;
-(BOOL)hasActiveKeyboard;
-(void)setEnabledKeyboards:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(BOOL)hasLanguageCode;
-(BOOL)readFrom:(id)arg1 ;
@end

