/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:40 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ODDIteratorAttributes : NSObject {

	int mAxis;
	int mPointType;
	BOOL mHideLastTransition;
	int mStart;
	unsigned mCount;
	int mStep;

}
-(unsigned)count;
-(void)setAxis:(int)arg1 ;
-(int)axis;
-(int)start;
-(void)setStart:(int)arg1 ;
-(void)setCount:(unsigned)arg1 ;
-(void)setPointType:(int)arg1 ;
-(void)setHideLastTransition:(BOOL)arg1 ;
-(void)setStep:(int)arg1 ;
-(int)pointType;
-(int)step;
-(BOOL)hideLastTransition;
@end

