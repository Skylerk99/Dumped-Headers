/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:33 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FigCaptureSessionPreviewTapDelegate;
#import <Celestial/Celestial-Structs.h>
@interface FigCaptureSessionProxy : NSObject {

	OpaqueFigCaptureSessionRef _session;
	long long _identifier;
	BOOL _previewTapOpened;
	id<FigCaptureSessionPreviewTapDelegate> _previewTapDelegate;

}

@property (readonly) long long identifier; 
+(void)initialize;
-(void)dealloc;
-(long long)identifier;
-(int)openPreviewTapWithDelegate:(id)arg1 ;
-(void)closePreviewTap;
-(id)initWithFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 identifier:(long long)arg2 ;
@end

