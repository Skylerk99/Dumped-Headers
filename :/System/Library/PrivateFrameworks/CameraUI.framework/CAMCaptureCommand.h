/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:30 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSArray, NSDictionary;

@interface CAMCaptureCommand : NSObject <NSCopying, NSCoding> {

	NSString* _reason;
	NSArray* _subcommands;

}

@property (nonatomic,copy) NSString * reason;                                 //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy) NSArray * subcommands;                             //@synthesize subcommands=_subcommands - In the implementation block
@property (nonatomic,readonly) BOOL requiresSessionModification; 
@property (nonatomic,readonly) NSDictionary * userInfo; 
-(void)setReason:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)userInfo;
-(NSString *)reason;
-(id)initWithSubcommands:(id)arg1 ;
-(void)executeWithContext:(id)arg1 ;
-(void)addSubcommand:(id)arg1 ;
-(BOOL)requiresSessionModification;
-(NSArray *)subcommands;
-(void)setSubcommands:(NSArray *)arg1 ;
-(void)removeSubcommand:(id)arg1 ;
@end

