/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:11 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MultipeerConnectivity/MultipeerConnectivity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class MCPeerIDInternal, NSString;

@interface MCPeerID : NSObject <NSCopying, NSSecureCoding> {

	MCPeerIDInternal* _internal;

}

@property (nonatomic,readonly) NSString * displayName; 
+(BOOL)supportsSecureCoding;
-(id)serializedRepresentation;
-(id)initWithIDString:(id)arg1 displayName:(id)arg2 ;
-(unsigned long long)pid64;
-(id)internalDescription;
-(id)initWithPID:(unsigned)arg1 displayName:(id)arg2 ;
-(id)initWithDisplayName:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(id)initWithSerializedRepresentation:(id)arg1 ;
-(id)idString;
-(unsigned)pid;
@end

