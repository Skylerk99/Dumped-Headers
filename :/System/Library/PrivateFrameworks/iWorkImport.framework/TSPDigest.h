/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:23 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TSPDigest : NSObject <NSCopying> {

	array<unsigned char, 20> _digestData;

}

@property (nonatomic,readonly) NSString * digestString; 
@property (nonatomic,readonly) const array<unsigned char* digestData; 
+(id)digestWithDigestString:(id)arg1 ;
+(id)digestFromNSData:(id)arg1 ;
-(NSString *)digestString;
-(id)initWithDigestString:(id)arg1 ;
-(id)initFromNSData:(id)arg1 ;
-(id)initFromBytes:(const void*)arg1 length:(unsigned)arg2 ;
-(const array<unsigned char*)digestData;
-(id)initFromSHA1Context:(CC_SHA1state_st*)arg1 ;
-(id)initFromProtobufString:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)arg1 ;
-(void)saveToProtobufString:(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

