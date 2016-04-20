/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:04 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/_MSPContainerEdit.h>
#import <libobjc.A.dylib/MSPContainerEditRemoval.h>

@class NSArray, NSIndexSet, NSString;

@interface _MSPContainerEditRemoval : _MSPContainerEdit <MSPContainerEditRemoval> {

	NSArray* _originalObjects;
	NSArray* _removedImmutableObjects;
	NSIndexSet* _indexesOfRemovedObjects;

}

@property (nonatomic,readonly) NSArray * originalObjects;                         //@synthesize originalObjects=_originalObjects - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * removedImmutableObjects;                 //@synthesize removedImmutableObjects=_removedImmutableObjects - In the implementation block
@property (nonatomic,readonly) NSIndexSet * indexesOfRemovedObjects;              //@synthesize indexesOfRemovedObjects=_indexesOfRemovedObjects - In the implementation block
-(NSString *)description;
-(NSIndexSet *)indexesOfRemovedObjects;
-(NSArray *)removedImmutableObjects;
-(id)initWithRemovedObjects:(id)arg1 indexes:(id)arg2 ;
-(void)useImmutableObjectsFromMap:(id)arg1 intermediateMutableObjectTransferBlock:(/*^block*/id)arg2 ;
-(NSArray *)originalObjects;
@end

