/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:44 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSTLayoutDynamicResizeInfo.h>

@interface TSTLayoutDynamicResizeInfoAccordion : TSTLayoutDynamicResizeInfo {

	double _heightFactor;
	double _widthFactor;

}

@property (nonatomic,readonly) double heightFactor;              //@synthesize heightFactor=_heightFactor - In the implementation block
@property (nonatomic,readonly) double widthFactor;               //@synthesize widthFactor=_widthFactor - In the implementation block
-(id)initWithMasterLayout:(id)arg1 columnRegion:(id)arg2 rowRegion:(id)arg3 ;
-(double)applyResizeHeightFactor:(double)arg1 ;
-(double)applyResizeWidthFactor:(double)arg1 ;
-(id)initWithDynamicResizeInfo:(id)arg1 ;
-(void)captureNewMinimumRowHeights:(id)arg1 ;
-(double)p_applyAccordionResizeFactor:(double)arg1 region:(id)arg2 direction:(long long)arg3 totalOfCaptured:(double)arg4 count:(unsigned short)arg5 capturedArray:(double*)arg6 currentArray:(double*)arg7 minimumArray:(double*)arg8 ;
-(double)heightFactor;
-(double)widthFactor;
@end

