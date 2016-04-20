/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:57 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
#import <PhotoEditSupport/BLImageBuffer.h>

@interface BLPixelImageBuffer : BLImageBuffer
+(id)bufferWithSize:(CGSize)arg1 colorManagement:(int)arg2 ;
+(id)bufferWithImage:(id)arg1 colorManagement:(int)arg2 ;
-(id)image;
-(void)accessPixelsByContextInBlock:(/*^block*/id)arg1 ;
-(void)accessPixelsByAddressInBlock:(/*^block*/id)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 rect:(CGRect)arg2 ;
@end

