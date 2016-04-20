/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:50:30 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CAMBufferObservanceChange.h>

@class NSString, NSObject, NSDictionary;

@interface CAMBufferKeyValueObserverObservanceChange : CAMBufferObservanceChange {

	NSString* _keyPath;
	NSObject* _object;
	NSDictionary* _change;

}

@property (nonatomic,copy,readonly) NSString * keyPath;                 //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,__weak,readonly) NSObject * object;                //@synthesize object=_object - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * change;              //@synthesize change=_change - In the implementation block
-(NSDictionary *)change;
-(NSObject *)object;
-(NSString *)keyPath;
-(id)initWithKeyPath:(id)arg1 ofObject:(id)arg2 withChange:(id)arg3 ;
@end

