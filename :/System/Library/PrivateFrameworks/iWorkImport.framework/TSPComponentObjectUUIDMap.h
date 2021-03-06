/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:25 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSDictionary;

@interface TSPComponentObjectUUIDMap : NSObject <NSCopying, NSMutableCopying> {

	NSDictionary* _identifierToObjectUUIDDictionary;
	NSDictionary* _objectUUIDToIdentifierDictionary;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSDictionary * identifierToObjectUUIDDictionary;              //@synthesize identifierToObjectUUIDDictionary=_identifierToObjectUUIDDictionary - In the implementation block
@property (nonatomic,readonly) NSDictionary * objectUUIDToIdentifierDictionary;              //@synthesize objectUUIDToIdentifierDictionary=_objectUUIDToIdentifierDictionary - In the implementation block
-(void)enumerateIdentifiersAndObjectUUIDsUsingBlock:(/*^block*/id)arg1 ;
-(long long)identifierForObjectUUID:(id)arg1 ;
-(id)initWithIdentifierToObjectUUIDDictionary:(id)arg1 objectUUIDToIdentifierDictionary:(id)arg2 ;
-(id)objectUUIDForIdentifier:(long long)arg1 ;
-(NSDictionary *)identifierToObjectUUIDDictionary;
-(NSDictionary *)objectUUIDToIdentifierDictionary;
-(unsigned long long)count;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithMessage:(RepeatedPtrField<TSP::ObjectUUIDMapEntry>*)arg1 ;
@end

