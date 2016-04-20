/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:33 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCameraViewfinder.h>
#import <libobjc.A.dylib/FigCaptureSessionObserver.h>

@class NSDictionary, FigCameraViewfinderSessionLocal, NSString;

@interface FigCameraViewfinderLocal : FigCameraViewfinder <FigCaptureSessionObserver> {

	BOOL _observing;
	NSDictionary* _options;
	FigCameraViewfinderSessionLocal* _activeViewfinderSession;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) int photoThumbnailMaxDimension; 
@property (readonly) BOOL photoThumbnailQualitySpecified; 
@property (readonly) float photoThumbnailQuality; 
+(void)initialize;
+(id)cameraViewfinder;
-(void)dealloc;
-(id)init;
-(void)stop;
-(void)startWithOptions:(id)arg1 ;
-(void)captureSessionDidStop:(long long)arg1 ;
-(void)captureSessionDidStart:(id)arg1 ;
-(int)photoThumbnailMaxDimension;
-(BOOL)photoThumbnailQualitySpecified;
-(float)photoThumbnailQuality;
-(void)captureSession:(long long)arg1 didCapturePhotoWithStatus:(int)arg2 thumbnailData:(id)arg3 timestamp:(SCD_Struct_BW2)arg4 ;
-(void)_updateActiveViewfinderSession:(id)arg1 ;
@end

