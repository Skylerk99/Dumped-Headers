/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:48 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface KNBuildUtility : NSObject
+(BOOL)animationInfo:(id)arg1 onInfo:(id)arg2 canRunSimultaneouslyWithAnimationInfo:(id)arg3 onInfo:(id)arg4 ;
+(int)sharedAnimationTypeForBuildChunks:(id)arg1 ;
+(id)chunksInBuilds:(id)arg1 ;
+(id)buildsForChunks:(id)arg1 ;
+(id)uniqueBuildsOrderedByChunks:(id)arg1 ;
+(id)chunksForInfos:(id)arg1 ;
+(id)orderedBuildsFromUnorderedBuilds:(id)arg1 ;
+(id)buildsToChunksMapForChunks:(id)arg1 ;
+(id)buildsToChunksMapForBuilds:(id)arg1 chunks:(id)arg2 ;
+(id)chunksForIdentifiers:(id)arg1 context:(id)arg2 ;
+(id)identifiersForChunks:(id)arg1 ;
+(id)nonNilChunkIdentifierFromPossiblyNilChunk:(id)arg1 ;
@end

