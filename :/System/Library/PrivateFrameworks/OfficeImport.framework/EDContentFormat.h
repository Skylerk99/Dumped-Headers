/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:45 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/EDKeyedObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class EDString, NSString;

@interface EDContentFormat : NSObject <EDKeyedObject, NSCopying> {

	EDString* mFormatString;
	unsigned long long mFormatId;
	BOOL mBuiltIn;
	BOOL mReferenced;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contentFormatWithNSString:(id)arg1 formatId:(unsigned long long)arg2 builtIn:(BOOL)arg3 ;
+(id)contentFormatWithFormatString:(id)arg1 formatId:(unsigned long long)arg2 ;
+(id)contentFormatWithFormatString:(id)arg1 ;
-(void)setFormatId:(unsigned long long)arg1 ;
-(void)setReferenced:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(long long)key;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)formatString;
-(unsigned long long)formatId;
-(BOOL)isEqualToContentFormat:(id)arg1 ;
-(BOOL)builtIn;
-(BOOL)referenced;
@end

