/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:27 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSARenderingExporterDelegate
@optional
-(int)renderingQuality;

@required
-(double)viewScale;
-(CGContextRef)newCGContextForURL:(id)arg1;
-(void)releaseCGContext:(CGContextRef)arg1;
-(BOOL)supportsPaging;
-(BOOL)supportsRenderingQuality;
-(void)setup;
-(void)teardown;

@end

