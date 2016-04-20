/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:45 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameplayKit/GameplayKit-Structs.h>
@class NSMutableArray, NSArray;

@interface GKGraph : NSObject {

	NSMutableArray* _nodes;
	GKCGraph* _cGraph;

}

@property (nonatomic,readonly) NSArray * nodes; 
+(id)graphWithNodes:(id)arg1 ;
+(id)graph;
-(GKCGraph*)makeCGraph;
-(GKCGraph*)cGraph;
-(id)nodesMut;
-(void)connectNodeToLowestCostNode:(id)arg1 bidirectional:(BOOL)arg2 ;
-(id)findPathFromNode:(id)arg1 toNode:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(NSArray *)nodes;
-(void)addNodes:(id)arg1 ;
-(void)removeNodes:(id)arg1 ;
-(id)initWithNodes:(id)arg1 ;
@end

