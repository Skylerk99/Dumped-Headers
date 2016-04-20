/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:22 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoAppRegistry.framework/NanoAppRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSUUID, NSNumber;

@interface NARWorkspaceInfo : NSObject <NSSecureCoding> {

	NSArray* _applications;
	NSUUID* _UUID;
	NSNumber* _sequenceNumber;
	NSArray* _standaloneGlances;

}

@property (nonatomic,readonly) NSArray * applications;                   //@synthesize applications=_applications - In the implementation block
@property (nonatomic,readonly) NSUUID * UUID;                            //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,readonly) NSNumber * sequenceNumber;                //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,readonly) NSArray * standaloneGlances;              //@synthesize standaloneGlances=_standaloneGlances - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)UUID;
-(NSNumber *)sequenceNumber;
-(id)initWithApplications:(id)arg1 UUID:(id)arg2 sequenceNumber:(id)arg3 standaloneGlances:(id)arg4 ;
-(NSArray *)standaloneGlances;
-(NSArray *)applications;
@end

