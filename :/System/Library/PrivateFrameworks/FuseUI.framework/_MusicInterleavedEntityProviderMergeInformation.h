/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:41 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MusicEntityProviding;
@class NSIndexPath;

@interface _MusicInterleavedEntityProviderMergeInformation : NSObject {

	id<MusicEntityProviding> _entityProvider;
	id _entityUniqueIdentifier;
	id _entityComparisonObject;
	NSIndexPath* _indexPath;

}

@property (nonatomic,retain) id<MusicEntityProviding> entityProvider;              //@synthesize entityProvider=_entityProvider - In the implementation block
@property (nonatomic,copy) id entityUniqueIdentifier;                              //@synthesize entityUniqueIdentifier=_entityUniqueIdentifier - In the implementation block
@property (nonatomic,copy) id entityComparisonObject;                              //@synthesize entityComparisonObject=_entityComparisonObject - In the implementation block
@property (nonatomic,copy) NSIndexPath * indexPath;                                //@synthesize indexPath=_indexPath - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)compare:(id)arg1 ;
-(NSIndexPath *)indexPath;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(void)setEntityComparisonObject:(id)arg1 ;
-(void)setEntityUniqueIdentifier:(id)arg1 ;
-(id)entityComparisonObject;
-(id<MusicEntityProviding>)entityProvider;
-(void)setEntityProvider:(id<MusicEntityProviding>)arg1 ;
-(id)entityUniqueIdentifier;
@end

