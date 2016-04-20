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

@class CPPage, NSMutableArray;

@interface CPZoneBorder : NSObject <NSCopying, CPCopying> {

	CGRect bounds;
	CPPage* page;
	NSMutableArray* ownerArray;
	NSMutableArray* graphicObjects;
	NSMutableArray* neighbors;
	NSMutableArray* intersections;
	BOOL isHorizontal;
	BOOL hasForwardVector;
	BOOL hasBackwardVector;
	double overhangMin;
	double overhangMax;

}
+(void)outerVertices:(CGPoint*)arg1 fromBorders:(id)arg2 swollenBy:(double)arg3 ;
+(int)clockwiseWindingNumberOfShapeWithBorders:(id)arg1 ;
+(void)addIntersectionBetweenBorder:(id)arg1 andBorder:(id)arg2 atRect:(CGRect)arg3 ;
+(CGRect)extendRect:(CGRect)arg1 ;
+(void)removeIntersectionBetweenBorder:(id)arg1 andBorder:(id)arg2 ;
-(CGRect)bounds;
-(void)dealloc;
-(id)init;
-(void)setBounds:(CGRect)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isVertical;
-(id)page;
-(BOOL)isHorizontal;
-(long long)zOrder;
-(long long)compareXBounds:(id)arg1 ;
-(long long)compareYBounds:(id)arg1 ;
-(id)initSuper;
-(unsigned)graphicObjectCount;
-(id)graphicObjectAtIndex:(unsigned)arg1 ;
-(BOOL)hasNeighborShape:(id)arg1 ;
-(unsigned)indexOfIntersectionWith:(id)arg1 ;
-(unsigned)neighborCount;
-(id)neighborAtIndex:(unsigned)arg1 ;
-(BOOL)hasNeighborShape:(id)arg1 atSide:(int)arg2 ;
-(id)graphicObjects;
-(void)addGraphicObject:(id)arg1 ;
-(unsigned)intersectionCount;
-(BOOL)windsClockwiseOnto:(id)arg1 ;
-(BOOL)continues:(id)arg1 ;
-(BOOL)extractCycleTo:(id)arg1 goingForward:(BOOL)arg2 throughIntersectionIndex:(unsigned)arg3 returningTo:(id)arg4 atRect:(CGRect*)arg5 ;
-(id)copyWithoutIntersections;
-(BOOL)hasClockwiseVectorAtIndex:(unsigned)arg1 startingForward:(BOOL)arg2 ;
-(BOOL)hasCounterclockwiseVectorAtIndex:(unsigned)arg1 startingForward:(BOOL)arg2 ;
-(void)addToArray:(id)arg1 ;
-(void)trimToLastIntersections;
-(void)addNeighbor:(id)arg1 ;
-(void)removeFromArray;
-(void)removeLooseThreadsStartingFrom:(id)arg1 ;
-(id)initWithGraphicObject:(id)arg1 ;
-(void)addToArray:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)removeFromArrayAtIndex:(unsigned)arg1 ;
-(id)ownerArray;
-(void)removeGraphicObjectAtIndex:(unsigned)arg1 ;
-(void)removeNeighborAtIndex:(unsigned)arg1 ;
-(void)setHasForwardVector:(BOOL)arg1 ;
-(BOOL)hasForwardVector;
-(void)setHasBackwardVector:(BOOL)arg1 ;
-(BOOL)hasBackwardVector;
-(void)setSide:(int)arg1 ofPage:(id)arg2 ;
-(BOOL)intersectsWith:(id)arg1 atRect:(CGRect*)arg2 ;
-(void)instantiateVectors;
-(BOOL)hasVectorGoingForward:(BOOL)arg1 startingAtIndex:(unsigned*)arg2 ;
-(BOOL)extractCycleTo:(id)arg1 goingForward:(BOOL)arg2 startingAtIndex:(unsigned)arg3 ;
-(BOOL)crosses:(id)arg1 ;
-(void)combine:(id)arg1 ;
@end

