/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:45 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EDSheet.h>

@class CHDChart;

@interface EDChartSheet : EDSheet {

	CHDChart* mMainChart;
	BOOL mIsBoundsSet;
	CGRect mBounds;

}
-(void)teardown;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)areBoundsSet;
-(id)mainChart;
-(void)addDrawable:(id)arg1 ;
-(void)setMainChart:(id)arg1 ;
@end

