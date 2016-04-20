/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:50 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKAction.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/OKActionMicrophoneNoiseExports.h>

@interface OKActionMicrophoneNoise : OKAction <NSSecureCoding, OKActionMicrophoneNoiseExports> {

	float _meanAudioLevel;

}

@property (nonatomic,readonly) float meanAudioLevel;              //@synthesize meanAudioLevel=_meanAudioLevel - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)microphoneNoiseActionWithState:(unsigned long long)arg1 meanAudioLevel:(float)arg2 context:(id)arg3 ;
+(id)microphoneNoiseActionWithState:(unsigned long long)arg1 location:(CGPoint)arg2 touchCount:(unsigned long long)arg3 meanAudioLevel:(float)arg4 context:(id)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(float)meanAudioLevel;
@end

