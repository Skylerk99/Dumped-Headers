/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:42 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSTStrokeWidthCache : NSObject {

	unsigned mCount;
	opaque_pthread_rwlock_t mLock;
	vector<double, std::__1::allocator<double> >* mStrokeWidth;

}
-(double)strokeWidthForGridIndex:(unsigned)arg1 ;
-(void)setStrokeWidth:(double)arg1 forGridIndex:(unsigned)arg2 ;
-(void)dealloc;
-(id)init;
-(void)invalidate;
@end

