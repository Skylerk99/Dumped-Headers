/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:42 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSUUID.h>

@interface __NSConcreteUUID : NSUUID {

	unsigned char _uuidBytes[16];

}
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)initWithUUIDBytes:(unsigned char)arg1 ;
-(SCD_Struct_NS83)_cfUUIDBytes;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)UUIDString;
-(id)initWithUUIDString:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(void)getUUIDBytes:(unsigned char)arg1 ;
@end

