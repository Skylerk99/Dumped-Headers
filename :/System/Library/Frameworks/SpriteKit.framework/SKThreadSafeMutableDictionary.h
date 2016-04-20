/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:35 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableDictionary;

@interface SKThreadSafeMutableDictionary : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration> {

	int _storageLock;
	NSMutableDictionary* _storage;

}
-(id)initWithNSMutableDictionary:(id)arg1 ;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

