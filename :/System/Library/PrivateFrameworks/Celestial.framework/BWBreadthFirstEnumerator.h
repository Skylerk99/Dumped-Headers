/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:33 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/BWNodeEnumerator.h>

@class NSMutableArray;

@interface BWBreadthFirstEnumerator : BWNodeEnumerator {

	NSMutableArray* _queue;
	NSMutableArray* _holdQueue;

}
-(void)dealloc;
-(id)nextObject;
-(id)initWithGraph:(id)arg1 ;
-(void)addChildren:(id)arg1 ;
@end

