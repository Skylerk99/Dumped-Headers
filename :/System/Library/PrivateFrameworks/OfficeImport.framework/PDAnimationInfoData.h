/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:50 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PDBuild, PDSequentialTimeNode, OADDrawable;

@interface PDAnimationInfoData : NSObject {

	unsigned mOrder;
	PDBuild* mBuild;
	PDSequentialTimeNode* mSequentialTimeNodeData;
	OADDrawable* mDrawable;

}
-(void)dealloc;
-(id)data;
-(unsigned)order;
-(id)drawable;
-(id)build;
-(id)initWithTarget:(id)arg1 presetClass:(int)arg2 presetId:(int)arg3 triggerType:(int)arg4 iterateType:(int)arg5 delay:(double)arg6 direction:(double)arg7 order:(unsigned)arg8 groupId:(id)arg9 build:(id)arg10 ;
@end

