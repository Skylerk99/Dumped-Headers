/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:38 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSCondition;

@interface _NSThreadPerformInfo : NSObject {

	id target;
	SEL selector;
	id argument;
	NSMutableArray* modes;
	NSCondition* waiter;
	char* signalled;

}
-(void)dealloc;
@end

