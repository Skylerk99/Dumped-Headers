/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:20 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIFoundation/NSTextAttachment.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_semaphore;
@class NSURL, NSObject;

@interface SKUIBadgeTextAttachment : NSTextAttachment <NSCopying> {

	NSURL* _imageURL;
	NSObject*<OS_dispatch_semaphore> _imageLoadingSemaphore;

}

@property (nonatomic,readonly) CGSize badgeSize; 
@property (nonatomic,readonly) NSURL * imageURL;                                        //@synthesize imageURL=_imageURL - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> imageLoadingSemaphore;              //@synthesize imageLoadingSemaphore=_imageLoadingSemaphore - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)imageURL;
-(id)initWithViewElement:(id)arg1 ;
-(void)_loadImageWithResourceName:(id)arg1 fallbackImage:(id)arg2 styleColor:(id)arg3 ;
-(void)setImageLoadingSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)_ensureImageIsLoaded;
-(NSObject*<OS_dispatch_semaphore>)imageLoadingSemaphore;
-(CGSize)badgeSize;
@end

