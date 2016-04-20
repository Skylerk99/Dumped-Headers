/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:44 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSUUUIDPath, NSObject;

@interface TSWPObjectPlacement : NSObject {

	TSUUUIDPath* _uuidPath;
	int _index;
	NSObject* _object;

}

@property (nonatomic,readonly) TSUUUIDPath * uuidPath;              //@synthesize uuidPath=_uuidPath - In the implementation block
@property (nonatomic,readonly) NSObject * object;                   //@synthesize object=_object - In the implementation block
@property (assign,nonatomic) int index;                             //@synthesize index=_index - In the implementation block
+(id)objectPlacementWithObject:(id)arg1 uuidPath:(id)arg2 index:(int)arg3 ;
-(id)initWithObject:(id)arg1 uuidPath:(id)arg2 index:(int)arg3 ;
-(TSUUUIDPath *)uuidPath;
-(void)dealloc;
-(NSObject *)object;
-(int)index;
-(void)setIndex:(int)arg1 ;
@end

