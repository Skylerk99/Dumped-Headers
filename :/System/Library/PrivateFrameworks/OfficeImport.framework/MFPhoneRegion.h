/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:42 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/MFRegion.h>

@class TSUBezierPath;

@interface MFPhoneRegion : MFRegion {

	TSUBezierPath* m_path;
	CGRect m_bounds;

}
-(void)dealloc;
-(id)initWithRects:(id)arg1 :(CGRect)arg2 :(id)arg3 ;
-(id)initWithPath:(id)arg1 :(CGRect)arg2 ;
-(id)pathForClippingWithDeviceContext:(id)arg1 ;
-(int)fill:(id)arg1 :(id)arg2 ;
-(int)frame:(id)arg1 :(id)arg2 ;
-(int)invert:(id)arg1 ;
@end

