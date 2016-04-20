/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:25 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <CameraKit/CMKCaptureRequest.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface CMKVideoCaptureRequest : CMKCaptureRequest <NSCopying, NSMutableCopying> {

	long long _deviceOrientation;
	long long _captureDevice;
	long long _torchMode;

}

@property (nonatomic,readonly) long long deviceOrientation;              //@synthesize deviceOrientation=_deviceOrientation - In the implementation block
@property (nonatomic,readonly) long long captureDevice;                  //@synthesize captureDevice=_captureDevice - In the implementation block
@property (nonatomic,readonly) long long torchMode;                      //@synthesize torchMode=_torchMode - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)deviceOrientation;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(long long)captureDevice;
-(long long)torchMode;
@end

