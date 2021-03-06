/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:39 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDShapeRep.h>

@class TSDPathSource;

@interface TSDConnectionLineRep : TSDShapeRep {

	TSDPathSource* mLastPathSource;

}
-(void)updateFromLayout;
-(double)shortestDistanceToPoint:(CGPoint)arg1 countAsHit:(BOOL*)arg2 ;
-(id)connectionLineLayout;
-(BOOL)shouldSetPathSourceWhenChangingInfoGeometry;
-(void)dealloc;
-(BOOL)containsPoint:(CGPoint)arg1 ;
@end

