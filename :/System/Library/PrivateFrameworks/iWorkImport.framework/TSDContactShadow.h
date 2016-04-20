/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:39 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDShadow.h>

@interface TSDContactShadow : TSDShadow {

	double mHeight;

}

@property (nonatomic,readonly) double height; 
@property (nonatomic,readonly) double perspective; 
+(id)instanceWithArchive:(const ShadowArchive*)arg1 unarchiver:(id)arg2 ;
+(id)contactShadowWithOffset:(double)arg1 height:(double)arg2 radius:(double)arg3 opacity:(double)arg4 color:(CGColorRef)arg5 enabled:(BOOL)arg6 ;
-(void)saveToArchive:(ShadowArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const ShadowArchive*)arg1 unarchiver:(id)arg2 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(long long)mixingTypeWithObject:(id)arg1 context:(id)arg2 ;
-(id)initWithOffset:(double)arg1 height:(double)arg2 radius:(double)arg3 opacity:(double)arg4 color:(CGColorRef)arg5 enabled:(BOOL)arg6 ;
-(CGRect)shadowBoundsForRect:(CGRect)arg1 additionalTransform:(CGAffineTransform)arg2 ;
-(double)clampOffset:(double)arg1 ;
-(double)clampRadius:(double)arg1 ;
-(id)newShadowClampedForSwatches;
-(CGRect)boundsInNaturalSpaceForRep:(id)arg1 ;
-(CGRect)boundsForRep:(id)arg1 ;
-(CGImageRef)newShadowImageForRep:(id)arg1 withSize:(CGSize)arg2 drawSelector:(SEL)arg3 unflipped:(BOOL)arg4 ;
-(CGImageRef)newShadowImageFromContext:(CGContextRef)arg1 withSize:(CGSize)arg2 bounds:(CGRect)arg3 unflipped:(BOOL)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)height;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)shadowType;
-(double)perspective;
@end

