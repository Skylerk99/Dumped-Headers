/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:53 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSString;

@interface PKDiff : NSObject <NSSecureCoding> {

	NSMutableArray* _hunks;
	NSString* _passUniqueID;

}

@property (nonatomic,copy) NSString * passUniqueID;              //@synthesize passUniqueID=_passUniqueID - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)getHunkForKey:(id)arg1 oldValue:(id*)arg2 newValue:(id*)arg3 message:(id*)arg4 ;
-(NSString *)passUniqueID;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)compare:(id)arg1 ;
-(void)removeHunkForKey:(id)arg1 ;
-(void)addHunkWithKey:(id)arg1 oldValue:(id)arg2 newValue:(id)arg3 message:(id)arg4 ;
-(void)enumerateHunks:(/*^block*/id)arg1 ;
-(unsigned long long)_hunkIndexForKey:(id)arg1 ;
-(BOOL)isEqualToDiff:(id)arg1 ;
-(long long)hunkCount;
-(void)key:(id*)arg1 oldValue:(id*)arg2 newValue:(id*)arg3 message:(id*)arg4 forHunkAtIndex:(long long)arg5 ;
-(void)addHunksFromDiff:(id)arg1 ;
-(id)anyKey;
-(void)setPassUniqueID:(NSString *)arg1 ;
@end

