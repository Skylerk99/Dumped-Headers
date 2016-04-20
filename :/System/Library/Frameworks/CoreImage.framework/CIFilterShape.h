/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:21 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CIFilterShape : NSObject <NSCopying> {

	unsigned _pad;
	void* _priv;

}

@property (readonly) CGRect extent; 
+(id)shapeWithRect:(CGRect)arg1 ;
+(id)_shapeInfinite;
-(CGSRegionObjectRef)CGSRegion;
-(id)initWithStruct:(filterShape*)arg1 ;
-(id)transformBy:(CGAffineTransform)arg1 interior:(BOOL)arg2 ;
-(id)insetByX:(int)arg1 Y:(int)arg2 ;
-(id)unionWith:(id)arg1 ;
-(id)unionWithRect:(CGRect)arg1 ;
-(id)intersectWith:(id)arg1 ;
-(id)intersectWithRect:(CGRect)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGRect)extent;
-(id)initWithRect:(CGRect)arg1 ;
-(void)finalize;
@end

