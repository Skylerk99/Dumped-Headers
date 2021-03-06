/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:43 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSTStrokeLayerAbstractStack : NSObject {

	opaque_pthread_rwlock_t mRWLock;

}
-(void)lockForRead;
-(void)lockForWrite;
-(id)strokeLayerEnumeration;
-(void)enumerateStrokesInRange:(TSTSimpleRange)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)portalledStrokeLayer;
-(void)enumerateStrokesAndCapsInRange:(TSTSimpleRange)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)lookupStrokeAtIndex:(long long)arg1 ;
-(void)enumerateStrokesFrom:(unsigned)arg1 to:(unsigned)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)enumerateStrokesAndCapsFrom:(unsigned)arg1 to:(unsigned)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)init;
-(void)unlock;
@end

