/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:08 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/CPCopying.h>

@class CPZoneBorder;

@interface CPZoneBorderIntersection : NSObject <NSCopying, CPCopying> {

	CGRect intersectionRect;
	CPZoneBorder* intersectingBorder;
	BOOL forwardVector;
	BOOL backwardVector;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initSuper;
-(void)setIntersectionRect:(CGRect)arg1 ;
-(void)setIntersectingBorder:(id)arg1 ;
-(long long)comparePositionLengthwise:(id)arg1 ;
-(id)intersectingBorder;
-(CGRect)intersectionRect;
-(BOOL)backwardVector;
-(void)setForwardVector:(BOOL)arg1 ;
-(void)setBackwardVector:(BOOL)arg1 ;
-(BOOL)forwardVector;
@end

