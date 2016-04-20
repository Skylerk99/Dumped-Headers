/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:43 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSTMasterLayout, NSMutableArray;

@interface TSTLayoutTask : NSObject <NSCopying> {

	TSTMasterLayout* mMasterLayout;
	NSMutableArray* mCellStatesToLayout;

}

@property (nonatomic,readonly) unsigned long long numberOfCellStates; 
-(id)initWithMasterLayout:(id)arg1 ;
-(void)addCellState:(id)arg1 ;
-(unsigned long long)numberOfCellStates;
-(void)enumerateCellStatesUsingBlock:(/*^block*/id)arg1 ;
-(void)writeToMasterLayoutCaches;
-(id)initWithLayoutTask:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)clear;
@end

