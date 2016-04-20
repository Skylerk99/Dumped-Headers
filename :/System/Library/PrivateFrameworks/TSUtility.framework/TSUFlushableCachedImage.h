/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:28 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUtility-Structs.h>
#import <TSUtility/TSUFlushableObject.h>

@interface TSUFlushableCachedImage : TSUFlushableObject {

	CGImageRef _image;
	id _delegate;
	SEL _delegateCreateImageSelector;

}
-(void)dealloc;
-(void)unload;
-(id)initWithDelegate:(id)arg1 createImageSelector:(SEL)arg2 ;
-(BOOL)hasFlushableContent;
-(CGImageRef)newImage;
@end

