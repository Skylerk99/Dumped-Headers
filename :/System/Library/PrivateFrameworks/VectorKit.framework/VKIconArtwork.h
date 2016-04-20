/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:40 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class VKImage, NSMutableArray;

@interface VKIconArtwork : NSObject {

	BOOL _hasIcon;
	VKImage* _image;
	double _contentScale;
	NSMutableArray* _completionHandlers;

}

@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double contentScale;              //@synthesize contentScale=_contentScale - In the implementation block
-(CGSize)size;
-(void)dealloc;
-(id)image;
-(double)contentScale;
-(void)_cleanUpAfterDrawing;
-(id)_newImage;
-(id)initWithImage:(CGImageRef)arg1 contentScale:(double)arg2 ;
-(void)getImage:(/*^block*/id)arg1 ;
@end

