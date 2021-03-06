/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:11 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@interface _PFTask : NSObject {

	int _cd_rc;
	void* _task;
	void* arguments;
	opaque_pthread_mutex_t lock;
	opaque_pthread_cond_t condition;
	int isFinishedFlag;

}
+(int)getNumActiveProcessors;
+(double)getProcessorSpeed;
+(unsigned long long)getPhysicalMemory;
-(id)initWithFunction:(/*function pointer*/void*)arg1 withArgument:(void*)arg2 andPriority:(int)arg3 ;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(void)finalize;
@end

