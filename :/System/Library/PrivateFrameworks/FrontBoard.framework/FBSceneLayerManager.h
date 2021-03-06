/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:36 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSHashTable, NSMutableOrderedSet, NSString, NSOrderedSet;

@interface FBSceneLayerManager : NSObject <BSDescriptionProviding> {

	NSHashTable* _observers;
	NSMutableOrderedSet* _orderedLayers;
	NSString* _identifier;

}

@property (nonatomic,copy,readonly) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain,readonly) NSOrderedSet * layers;              //@synthesize orderedLayers=_orderedLayers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_enumerateObserversWithBlock:(/*^block*/id)arg1 ;
-(id)initWithScene:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(void)addObserver:(id)arg1 ;
-(NSString *)identifier;
-(void)removeObserver:(id)arg1 ;
-(NSOrderedSet *)layers;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)_observer_willStartTrackingLayers;
-(void)_observer_didRepositionLayer:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 ;
-(void)_observer_didStopTrackingLayers;
-(void)removeLayer:(id)arg1 ;
-(id)layerWithContextID:(unsigned)arg1 ;
-(id)contexts;
-(void)addLayer:(id)arg1 ;
@end

