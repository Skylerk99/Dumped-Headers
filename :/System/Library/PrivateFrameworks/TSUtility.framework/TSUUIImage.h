/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:28 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUtility-Structs.h>
#import <TSUtility/TSUImage.h>

@class UIImage;

@interface TSUUIImage : TSUImage {

	UIImage* mUIImage;

}
+(id)imageNamed:(id)arg1 inBundle:(id)arg2 ;
-(CGSize)size;
-(void)dealloc;
-(double)scale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGImageRef)CGImage;
-(long long)imageOrientation;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)UIImage;
-(CGImageRef)CGImageForSize:(CGSize)arg1 ;
-(id)initWithUIImage:(id)arg1 ;
@end

