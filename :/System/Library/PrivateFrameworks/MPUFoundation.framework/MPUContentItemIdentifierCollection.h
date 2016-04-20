/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:59 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMapTable;

@interface MPUContentItemIdentifierCollection : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSMapTable* _identifierTypeToIdentifier;
	unsigned long long _itemType;

}

@property (nonatomic,readonly) unsigned long long identifierCount; 
@property (nonatomic,readonly) unsigned long long itemType;                     //@synthesize itemType=_itemType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)_copyWithZone:(NSZone*)arg1 class:(Class)arg2 ;
-(void)enumerateIdentifiersUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithItemType:(unsigned long long)arg1 ;
-(unsigned long long)identifierCount;
-(void)_setIdentifier:(id)arg1 forIdentifierType:(unsigned long long)arg2 ;
-(id)identifierForIdentifierType:(unsigned long long)arg1 ;
-(unsigned long long)itemType;
@end

