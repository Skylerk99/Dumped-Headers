/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:28 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableArray;

@interface TSCH3DTransforms : NSObject {

	NSMutableArray* mArray;
	tvec2<int> mSize;

}

@property (nonatomic,readonly) tvec2<int> size; 
+(id)transformsWithSize:(tvec2<int>)arg1 ;
+(id)transforms;
-(long long)arrayIndex:(tvec2<int>)arg1 ;
-(void)setTransform:(id)arg1 atIndex:(tvec2<int>)arg2 ;
-(id)transformAtIndex:(tvec2<int>)arg1 ;
-(tvec2<int>)size;
-(void)dealloc;
@end

