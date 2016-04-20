/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:23 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <Foundation/NSOperation.h>

@class UIImage;

@interface QLThumbnailOperation : NSOperation {

	long long _index;
	CGSize _size;
	UIImage* _image;

}

@property (assign) long long index;              //@synthesize index=_index - In the implementation block
@property (assign) CGSize size;                  //@synthesize size=_size - In the implementation block
@property (retain) UIImage * image;              //@synthesize image=_image - In the implementation block
-(CGSize)size;
-(void)setImage:(UIImage *)arg1 ;
-(void)dealloc;
-(id)init;
-(UIImage *)image;
-(void)setSize:(CGSize)arg1 ;
-(long long)index;
-(void)setIndex:(long long)arg1 ;
@end

