/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:45 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PQLValuable.h>

@class NSData, NSNumber, NSString;

@interface BRCGenerationID : NSObject <NSCopying, NSSecureCoding, PQLValuable> {

	unsigned _generationID;
	NSData* _signature;

}

@property (nonatomic,readonly) NSNumber * fsGenerationID; 
@property (nonatomic,readonly) NSData * signature;                         //@synthesize signature=_signature - In the implementation block
@property (nonatomic,readonly) NSString * generationIDString; 
@property (nonatomic,readonly) const char* UTF8String; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)newFromSqliteValue:(MemRef)arg1 ;
-(const char*)UTF8String;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRelativePath:(id)arg1 ;
-(NSNumber *)fsGenerationID;
-(void)sqliteBind:(sqlite3_stmtRef)arg1 index:(int)arg2 ;
-(id)initWithFSGenerationID:(unsigned)arg1 ;
-(BOOL)isEqualToGenerationID:(id)arg1 orSignature:(id)arg2 ;
-(NSString *)generationIDString;
-(id)initWithSignature:(const void*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)isEqualToFSGenerationID:(unsigned)arg1 ;
-(NSData *)signature;
@end

