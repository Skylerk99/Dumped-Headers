/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:39 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSDCapabilities : NSObject {

	long long _platform;
	long long _deviceType;
	long long _device;
	long long _renderer;

}

@property (nonatomic,readonly) long long platform;                              //@synthesize platform=_platform - In the implementation block
@property (nonatomic,readonly) long long deviceType;                            //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,readonly) long long device;                                //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) long long renderer;                              //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,readonly) BOOL isRendererH3OrBelow; 
@property (nonatomic,readonly) BOOL isRendererH4OrBelow; 
@property (nonatomic,readonly) BOOL isRendererH5OrBelow; 
@property (nonatomic,readonly) BOOL hasLightningPort; 
@property (nonatomic,readonly) CGSize maximumHardcodedTextureSize; 
+(id)currentCapabilities;
-(CGSize)maximumTextureSizeWithGLContext:(id)arg1 ;
-(void)p_setupPlatform;
-(void)p_setupDevice;
-(CGSize)maximumHardcodedTextureSize;
-(BOOL)isRendererH3OrBelow;
-(BOOL)isRendererH4OrBelow;
-(BOOL)isRendererH5OrBelow;
-(BOOL)hasLightningPort;
-(id)init;
-(long long)device;
-(long long)platform;
-(long long)renderer;
-(long long)deviceType;
@end

