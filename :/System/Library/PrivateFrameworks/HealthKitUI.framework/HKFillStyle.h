/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:29 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage;

@interface HKFillStyle : NSObject <NSCopying> {

	UIImage* _cachedImage;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)fillImageWithHeight:(double)arg1 ;
-(id)fillImageWithWidth:(double)arg1 ;
-(void)_renderCacheIfNecessaryForHeight:(double)arg1 ;
-(void)_renderCacheIfNecessaryForWidth:(double)arg1 ;
-(void)_renderCacheIfNecessaryForSize:(CGSize)arg1 ;
-(BOOL)_needsRenderForSize:(CGSize)arg1 ;
-(void)_renderInContext:(CGContextRef)arg1 size:(CGSize)arg2 ;
@end

