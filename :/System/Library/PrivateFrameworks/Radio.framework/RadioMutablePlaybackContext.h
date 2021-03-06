/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:22 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <Radio/RadioPlaybackContext.h>

@class NSArray;

@interface RadioMutablePlaybackContext : RadioPlaybackContext

@property (assign,nonatomic) long long numberOfSkipsUsed; 
@property (nonatomic,copy) NSArray * trackPlaybackDescriptorQueue; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTrackPlaybackDescriptorQueue:(NSArray *)arg1 ;
-(void)setNumberOfSkipsUsed:(long long)arg1 ;
@end

