/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:27 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSARenderingExporterDelegate.h>

@protocol TSKImageExporter;
@class TSARenderingExporter, NSURL, NSString;

@interface TSAImageRenderingExporterDelegate : NSObject <TSARenderingExporterDelegate> {

	TSARenderingExporter*<TSKImageExporter> mRenderingExporter;
	unsigned long long mWidth;
	unsigned long long mHeight;
	BOOL mScaleToFit;
	NSURL* mURL;
	NSString* mImageType;
	float mCompressionFactor;

}

@property (assign,nonatomic) unsigned long long width; 
@property (assign,nonatomic) unsigned long long height; 
@property (assign,nonatomic) BOOL scaleToFit; 
@property (nonatomic,retain) NSString * imageType; 
@property (assign,nonatomic) float compressionFactor; 
-(double)viewScale;
-(CGContextRef)newCGContextForURL:(id)arg1 ;
-(void)releaseCGContext:(CGContextRef)arg1 ;
-(BOOL)supportsPaging;
-(BOOL)supportsRenderingQuality;
-(id)initWithRenderingExporter:(id)arg1 ;
-(float)compressionFactor;
-(BOOL)scaleToFit;
-(void)setScaleToFit:(BOOL)arg1 ;
-(void)setCompressionFactor:(float)arg1 ;
-(unsigned long long)width;
-(unsigned long long)height;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)setHeight:(unsigned long long)arg1 ;
-(void)setImageType:(NSString *)arg1 ;
-(void)setup;
-(void)teardown;
-(NSString *)imageType;
@end

