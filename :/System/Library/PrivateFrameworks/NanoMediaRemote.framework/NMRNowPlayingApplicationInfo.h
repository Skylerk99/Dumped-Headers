/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:25 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NMRMediaRemoteProtobufCodable.h>

@class _NMRNowPlayingApplicationStateProtobuf, NSString;

@interface NMRNowPlayingApplicationInfo : NSObject <NMRMediaRemoteProtobufCodable> {

	_NMRNowPlayingApplicationStateProtobuf* _protobuf;

}

@property (nonatomic,copy) NSString * companionBundleIdentifier; 
@property (nonatomic,copy) NSString * watchBundleIdentifier; 
@property (nonatomic,copy) NSString * localizedDisplayName; 
@property (assign,nonatomic) unsigned playbackState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)localizedDisplayName;
-(void)setLocalizedDisplayName:(NSString *)arg1 ;
-(unsigned)playbackState;
-(id)init;
-(id)protobufData;
-(void)setPlaybackState:(unsigned)arg1 ;
-(NSString *)companionBundleIdentifier;
-(void)setCompanionBundleIdentifier:(NSString *)arg1 ;
-(NSString *)watchBundleIdentifier;
-(void)setWatchBundleIdentifier:(NSString *)arg1 ;
-(id)initWithProtobufData:(id)arg1 ;
@end

