/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:45 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class EDResources;

@interface EDBorders : NSObject <NSCopying> {

	EDResources* mResources;
	unsigned long long mLeftBorderIndex;
	unsigned long long mRightBorderIndex;
	unsigned long long mTopBorderIndex;
	unsigned long long mBottomBorderIndex;
	unsigned long long mDiagonalBorderIndex;
	unsigned long long mVerticalBorderIndex;
	unsigned long long mHorizontalBorderIndex;

}
+(id)bordersWithLeft:(id)arg1 right:(id)arg2 top:(id)arg3 bottom:(id)arg4 diagonal:(id)arg5 resources:(id)arg6 ;
+(id)bordersWithResources:(id)arg1 ;
+(id)bordersWithLeft:(id)arg1 right:(id)arg2 top:(id)arg3 bottom:(id)arg4 diagonal:(id)arg5 vertical:(id)arg6 horizontal:(id)arg7 resources:(id)arg8 ;
-(void)setLeftBorder:(id)arg1 ;
-(void)setRightBorder:(id)arg1 ;
-(void)setTopBorder:(id)arg1 ;
-(void)setBottomBorder:(id)arg1 ;
-(void)setDiagonalBorder:(id)arg1 ;
-(void)setVerticalBorder:(id)arg1 ;
-(void)setHorizontalBorder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)bottomBorder;
-(id)topBorder;
-(id)leftBorder;
-(id)rightBorder;
-(id)initWithResources:(id)arg1 ;
-(BOOL)isEqualToBorders:(id)arg1 ;
-(id)diagonalBorder;
-(id)verticalBorder;
-(id)horizontalBorder;
@end

