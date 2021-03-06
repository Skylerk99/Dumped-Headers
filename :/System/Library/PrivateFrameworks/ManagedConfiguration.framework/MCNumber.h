/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:01 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface MCNumber : NSObject <NSSecureCoding> {

	NSNumber* _number;

}

@property (nonatomic,retain) NSNumber * number;              //@synthesize number=_number - In the implementation block
+(id)numberWithInteger:(long long)arg1 ;
+(id)numberWithInt:(int)arg1 ;
+(id)numberWithUnsignedInteger:(unsigned long long)arg1 ;
+(id)numberWithUnsignedInt:(unsigned)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithInt:(int)arg1 ;
-(id)initWithInteger:(long long)arg1 ;
-(id)initWithUnsignedInteger:(unsigned long long)arg1 ;
-(id)initWithUnsignedInt:(unsigned)arg1 ;
-(NSNumber *)number;
-(void)setNumber:(NSNumber *)arg1 ;
-(id)descriptionWithLocale:(id)arg1 ;
@end

