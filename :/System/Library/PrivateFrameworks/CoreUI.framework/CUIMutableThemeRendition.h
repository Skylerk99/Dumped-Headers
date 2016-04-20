/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:16 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class CUIRenditionSliceInformation, CUIRenditionMetrics;

@interface CUIMutableThemeRendition : CUIThemeRendition {

	renditionkeytoken* _renditionKey;
	CGImageRef _image;
	CUIRenditionSliceInformation* _sliceInformation;
	CUIRenditionMetrics* _renditionMetrics;

}
-(void)dealloc;
-(void)setName:(id)arg1 ;
-(const renditionkeytoken*)key;
-(id)metrics;
-(CGImageRef)unslicedImage;
-(id)initWithCGImage:(CGImageRef)arg1 withDescription:(id)arg2 forKey:(const renditionkeytoken*)arg3 ;
-(id)sliceInformation;
@end

