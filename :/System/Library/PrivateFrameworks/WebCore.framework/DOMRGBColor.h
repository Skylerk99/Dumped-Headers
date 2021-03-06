/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:56 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/DOMObject.h>

@class DOMCSSPrimitiveValue;

@interface DOMRGBColor : DOMObject

@property (readonly) DOMCSSPrimitiveValue * red; 
@property (readonly) DOMCSSPrimitiveValue * green; 
@property (readonly) DOMCSSPrimitiveValue * blue; 
@property (readonly) DOMCSSPrimitiveValue * alpha; 
-(void)dealloc;
-(DOMCSSPrimitiveValue *)alpha;
-(CGColorRef)color;
-(DOMCSSPrimitiveValue *)red;
-(DOMCSSPrimitiveValue *)green;
-(DOMCSSPrimitiveValue *)blue;
-(void)finalize;
@end

